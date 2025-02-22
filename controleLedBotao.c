#include "pico/stdlib.h"
#include "stdio.h"

// Definição dos pinos dos LEDs
#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13

// Definição dos pinos dos botões
#define BTN_PINA 5
#define BTN_PINB 6
#define BTN_PINC 22

void setup() {
    // Inicializa LEDs como saída e começa apagado
    int leds[] = {LED_VERDE, LED_AZUL, LED_VERMELHO};
    for (int i = 0; i < 3; i++) {
        gpio_init(leds[i]);
        gpio_set_dir(leds[i], GPIO_OUT);
        gpio_put(leds[i], 0);
    }

    // Inicializa botões como entrada com pull-up
    int buttons[] = {BTN_PINA, BTN_PINB, BTN_PINC};
    for (int i = 0; i < 3; i++) {
        gpio_init(buttons[i]);
        gpio_set_dir(buttons[i], GPIO_IN);
        gpio_pull_up(buttons[i]);
    }
}

int main() {
    setup(); // Configuração inicial

    // Loop infinito para verificar o estado dos botões
    while (true) {
        gpio_put(LED_VERDE, !gpio_get(BTN_PINA));   // Liga LED_PIN se BTN_PIN for pressionado
        gpio_put(LED_AZUL, !gpio_get(BTN_PINB)); // Liga LED_PIN2 se BTN_PINB for pressionado
        gpio_put(LED_VERMELHO, !gpio_get(BTN_PINC)); // Liga LED_PIN3 se BTN_PINC for pressionado
    }
}
