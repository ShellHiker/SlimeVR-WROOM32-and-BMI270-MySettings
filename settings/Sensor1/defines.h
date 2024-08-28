#define IMU IMU_BMI270
#define SECOND_IMU IMU
#define BOARD BOARD_WROOM32
#define IMU_ROTATION DEG_90
#define SECOND_IMU_ROTATION DEG_90

#define PRIMARY_IMU_OPTIONAL false
#define SECONDARY_IMU_OPTIONAL true

#define MAX_IMU_COUNT 1

#ifndef IMU_DESC_LIST
#define IMU_DESC_LIST \
    IMU_DESC_ENTRY(IMU,        PRIMARY_IMU_ADDRESS_ONE,   IMU_ROTATION,        PIN_IMU_SCL, PIN_IMU_SDA, PRIMARY_IMU_OPTIONAL,   PIN_IMU_INT) 

#endif

// Battery monitoring options (comment to disable):
// BAT_EXTERNAL for ADC pin, BAT_INTERNAL for internal - can detect only low battery, BAT_MCP3021 for external ADC
#define BATTERY_MONITOR BAT_EXTERNAL
#define BATTERY_SHIELD_RESISTANCE 70 //130k BatteryShield, 180k SlimeVR or fill in external resistor value in kOhm

#define PIN_IMU_SDA 21
#define PIN_IMU_SCL 22
#define PIN_IMU_INT 23
#define PIN_IMU_INT_2 25
#define PIN_BATTERY_LEVEL 36