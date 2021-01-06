#include "freertos/queue.h"
#include "driver/gpio.h"

#define PIN_BIT(x) (1ULL<<x)

#define BUTTON_DOWN (1)
#define BUTTON_UP (2)
#define BUTTON_HELD (3)

typedef struct {
  uint8_t pin;
    uint8_t event;
} button_event_t;

QueueHandle_t button_init(unsigned long long pin_select);
QueueHandle_t pulled_button_init(unsigned long long pin_select, gpio_pull_mode_t pull_mode);