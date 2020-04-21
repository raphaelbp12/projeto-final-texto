FROM ros:indigo-robot
MAINTAINER Bruno Guilhermo de Barros Valerio bruno.gbv@poli.ufrj.br

# Install extra packages
RUN apt-get update && apt-get install -y \
    git \
    build-essential \
    libncurses5-dev \
    freeglut3 \
    dh-autoreconf \
    ros-indigo-moveit \
    ros-indigo-joy \
    ros-indigo-joystick-drivers \
    nano						
#remove nano after dockerfile is complete.

#### Install libraries
#Eigen
RUN apt-get update && apt-get install libeigen3-dev -y


#IEEE 1394
RUN apt-get update && apt-get install libraw1394-dev -y

#USB
RUN apt-get update && apt-get install libusb-dev -y

#Boost
RUN apt-get update && apt-get install libboost-all-dev -y
####

#GTDD and OpenHaptics
RUN mkdir -p tmp/gtdd tmp/oh
COPY geomagic_touch_device_driver_2016.1-1-amd64 tmp/gtdd
COPY openhaptics_3.4-0-developer-edition-amd64 tmp/oh
RUN cd tmp/gtdd && yes | ./install
RUN cd tmp/oh && yes | ./install
RUN rm -rf tmp/gtdd tmp/oh

# Configure passed arguments
ARG username=omni
ARG password=omni

# Add new user
RUN useradd -m $username && echo "$username:$password" | chpasswd && adduser $username sudo

# Change to the created user
USER $username
WORKDIR /home/$username

# Add source paths to .bashrc and library path
RUN echo "export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib/:/opt/geomagic_touch_device_driver/lib" >> /home/$username/.bashrc 
RUN echo "export OH_SDK_BASE=$OH_SDK_BASE:/opt/OpenHaptics/Developer/3.4-0" >> /home/$username/.bashrc
RUN echo "export GTDD_HOME=/opt/geomagic_touch_device_driver" >> /home/$username/.bashrc
RUN echo "export export QT_PLUGIN_PATH=/opt/geomagic_touch_device_driver/lib/plugins" >> /home/$username/.bashrc
RUN echo "source /opt/ros/indigo/setup.bash" >> /home/$username/.bashrc
RUN echo "source /home/$username/catkin_ws/devel/setup.bash" >> /home/$username/.bashrc


# Configure ROS workspace
RUN mkdir -p ~/catkin_ws/src
RUN /bin/bash -c "cd ~/catkin_ws/src && source /opt/ros/indigo/setup.bash && catkin_init_workspace && cd ../ && catkin_make"

# Add PhantomOmni metapackage to docker space 
COPY PhantomOmni/ /home/$username/catkin_ws/src/
RUN /bin/bash -c "source ~/catkin_ws/devel/setup.bash && cd /home/$username/catkin_ws && catkin_make"
