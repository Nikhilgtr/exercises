#include <stdio.h>
#include <stdint.h>
typedef union {
    
    struct {
    uint8_t LED1:1;
    uint8_t LED2:1;
    uint8_t LED3:1;
    uint8_t LED4:1;
    uint8_t LED5:1;
    uint8_t LED6:1;
    uint8_t LED7:1;
    uint8_t LED8:1;
    };
    
    struct {
    uint8_t FAN1:1;
    uint8_t FAN2:1;
    uint8_t FAN3:1;
    uint8_t FAN4:1;
    uint8_t FAN5:1;
    uint8_t FAN6:1;
    uint8_t FAN7:1;
    uint8_t FAN8:1;
    };
}LED_STATE;

int main()
{
    LED_STATE var;
    printf("%d %d\n", var.LED1, var.LED2);
    var.LED1 = 1;
    
    printf("%d %d\n", var.LED1, var.LED2);
    
    printf("%d %d\n", var.FAN1, var.FAN2);
    var.FAN1 = 0;
    
    printf("%d %d\n", var.FAN1, var.FAN2);
}
