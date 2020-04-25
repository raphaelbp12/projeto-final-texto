# Divisão de capítulos

# 1 Introdução
Este capítulo servirá como introdução ao trabalho. Contará brevemente a história da robótica, afunilando para braços robóticos, até chegar finalmente no Phantom Omni. 

Também detalhará a motivação, objetivo e a estrutura do trabalho.

##### 1.1 História da Robótica
Breve história da robótica, passando pelos primeiros protótipos e indo até as três leis de Asimov.

##### 1.2 Braços Robóticos
Explicação do que são braços robóticos e quais suas aplicações nos dias de hoje.

##### 1.3 Phantom Omni
Introdução ao dispositivo háptico Phantom Omni.

##### 1.4 Motivação
Explicando as motivações que levaram ao desenvolvimento desse trabalho.

##### 1.5 Objetivos
Os objetivos desse trabalho.

##### 1.6 Conhecimentos prévios necessários
Destaca-se os conhecimentos prévios necessários para o completo entendimento desse trabalho. Esses tópicos serão discutidos no capítulo 2.

##### 1.7 Estrutura do texto
Explica-se a estrutura escolhida para formulação deste trabalho.

# 2 Aspectos Teóricos
Este capítulo passará pelos tópicos levantados na seção 1.6, explicando em detalhes todo o conhecimento prévio necessário para a implementação do software.


##### 2.1 Robot Operating System - ROS
Nesta seção explica-se o que é o ROS, o motivo de sua escolha e seus principais conceitos e aplicações.

##### 2.2 Phantom Omni
Neste capítulo serão detalhadas as especificações técnicas do Phantom Omni.
##### 2.3 Geomagic Touch
Neste capítulo serão detalhadas as especificações técnicas do Geomagic Touch.
##### 2.4 Modelagem das cinemáticas do Phantom Omni
Neste capítulo são demonstrados os cálculos das cinemáticas necessários para a a modelagem do sistema.
As cinemáticas calculadas foram:
- Cinemática direta de posição
- Cinemática inversa de posição
- Cinemática diferencial de posição
- Cinemática direta de velocidade
- Cinemática inversa de velocidade
- Cinemática diferencial de velocidade

# 3 Desenvolvimento do Software
Neste capítulo será detalhado todo o código que foi desenvolvido, indo da arquitetura até a explicação de cada função.

##### 3.1 Arquitetura do código
Nesta seção será detalhada a arquitetura do código.

##### 3.2 Dependências
Temos nesta seção as dependências externas utilizadas para implementação do software. São elas:

- Boost
- ROS
- MoveIt!

##### 3.3 Implementação do código
Neste capítulo serão detalhadas as três principais classes do projeto, que são:

- OmniBase: nessa classe foram implementadas todas as funcionalidades que o Phantom Omni possui em comum com o Geomagic Touch, como por exemplo os cálculos das cinemáticas.
- OmniFireWire: nessa classe foi implementado o driver de comunicação entre o ROS e PhantomOmni via comunicação IEEE 1394
- OmniEthernet: nessa classe foi implementado o driver de comunicação entre o ROS e a framework Open Haptics, da própria Geomagic Touch.

# 4 Obtenção e validação dos resultados
Neste capítulo será detalhada a obtenção dos dados obtidos, bem como a validação do resultado obtido a partir desses dados.

##### 4.1 Utilizando o software e obtendo os dados
Explica-se a obtenção dos dados, ou seja, explicando como o software foi utilizado para obtenção desses dados.

##### 4.2 Validação dos resultados obtidos
Valida-se todos os resultados obtidos.

# 5 Conclusão

Neste capítulo o trabalho será concluído, observando se o objetivo foi alcançado e os possíveis trabalhos futuros 

##### 5.1 O objetivo foi atingido?
Explica-se os motivos do objetivos terem sido alcançados ou não

##### 5.2 Trabalhos futuros
Detalha-se os possíveis trabalhos futuros.