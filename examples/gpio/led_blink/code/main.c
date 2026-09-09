#include "driver/gpio.g"
#incllude "freertos/FreeRTOS.h"
#incllude "freertos/task.h"

#define LED_pin GPIO_NUM_2
void app_main(void){
  gpio_set_direction(LED_pin, GPIO_MODE_OUTPUT);

  while(1){
    gpio_set_level(LED_pin,1);
    vTaskDelay(pdMS_TO_TICKS(1000));
    gpio_set_level(LED_pin,0);
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}
