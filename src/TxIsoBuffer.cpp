struct TxIsoBuffer     ///< Struct used for writing mainly to omni motors.
{
    int16_t force_x;
    int16_t force_y;
    int16_t force_z;
    union {
        uint16_t bits;
        struct {
            bool dock_led0     : 1;
            bool dock_led1     : 1;
            bool bit2          : 1;
            bool force_enabled : 1;
            bool bit4          : 1;
            bool bit5          : 1;
            bool bit6          : 1;
            bool bit7          : 1;
            bool bit8          : 1;
            bool bit9          : 1;
            bool bit10         : 1;
            bool bit11         : 1;
            bool bit12         : 1;
            bool bit13         : 1;
            bool bit14         : 1;
            bool bit15         : 1;
        };
    } status;
    uint32_t padding1;
    uint32_t padding2;
};