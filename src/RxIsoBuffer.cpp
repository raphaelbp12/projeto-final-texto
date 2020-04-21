struct RxIsoBuffer     ///< Struct used for reading data from the omni device.
{
	uint32_t magic;

	int16_t encoder_x;
	int16_t encoder_y;
	int16_t encoder_z;

	uint16_t gimbal_a_x;
	uint16_t gimbal_a_y;
	uint16_t gimbal_a_z;

	uint16_t v0;
	uint8_t tx_packet_num;

	union {
	    uint8_t bits;
	    struct {
	        bool button1  : 1;
	        bool button2  : 1;
	        bool undocked : 1;
	        bool bit3     : 1;
	        bool bit4     : 1;
	        bool bit5     : 1;
	        bool bit6     : 1;
	        bool bit7     : 1;
	    };
	} status;

	uint16_t s0;

	uint16_t gimbal_b_x;
	uint16_t gimbal_b_y;
	uint16_t gimbal_b_z;

	uint16_t v1;
	uint16_t s1;

	uint32_t time;

	uint16_t t0;
	uint16_t t1;

	uint32_t wall_time;
};