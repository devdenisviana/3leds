# 🚀 Projeto: Controle de LEDs com Raspberry Pi Pico W

Este projeto demonstra como utilizar um **Raspberry Pi Pico W** para controlar **LEDs** através de **botões físicos** utilizando a linguagem **C**.

## 🛠️ Tecnologias Utilizadas
- **Linguagem C**
- **SDK do Raspberry Pi Pico**
- **Placa Raspberry Pi Pico W**

## 📌 Funcionalidade
Este código permite o controle de três LEDs por meio de três botões. Quando um botão é pressionado, o LED correspondente acende.

## 📂 Estrutura do Código
```c
#include "pico/stdlib.h"
#include "stdio.h"

// Definição dos pinos dos LEDs
define LED_VERDE 11
define LED_AZUL 12
define LED_VERMELHO 13

// Definição dos pinos dos botões
define BTN_PINA 5
define BTN_PINB 6
define BTN_PINC 22

void setup() {
    int leds[] = {LED_VERDE, LED_AZUL, LED_VERMELHO};
    for (int i = 0; i < 3; i++) {
        gpio_init(leds[i]);
        gpio_set_dir(leds[i], GPIO_OUT);
        gpio_put(leds[i], 0);
    }

    int buttons[] = {BTN_PINA, BTN_PINB, BTN_PINC};
    for (int i = 0; i < 3; i++) {
        gpio_init(buttons[i]);
        gpio_set_dir(buttons[i], GPIO_IN);
        gpio_pull_up(buttons[i]);
    }
}

int main() {
    setup();
    while (true) {
        gpio_put(LED_VERDE, !gpio_get(BTN_PINA));
        gpio_put(LED_AZUL, !gpio_get(BTN_PINB));
        gpio_put(LED_VERMELHO, !gpio_get(BTN_PINC));
    }
}
```

## 🔧 Como Configurar
1. **Instale o SDK do Raspberry Pi Pico** seguindo a [documentação oficial](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf).
2. **Compile o código** utilizando o CMake e o SDK do Pico.
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```
3. **Envie o arquivo `.uf2`** para o Raspberry Pi Pico W:
   - Conecte o Raspberry ao PC segurando o botão **BOOTSEL**.
   - Copie o arquivo gerado para a unidade montada no sistema.
4. **Execute o código** e pressione os botões para acender os LEDs!

## 📜 Explicação do Código
### **setup()**
- Configura os LEDs como **saída** e os inicia apagados.
- Configura os botões como **entrada com pull-up interno**.

### **main()**
- Loop infinito que verifica o estado dos botões:
  - Se o botão for pressionado (`gpio_get(BTN_PIN) == 0`), o LED correspondente acende.

## 📝 Notas
- **Os LEDs estão conectados nos pinos 11, 12 e 13**.
- **Os botões estão conectados nos pinos 5, 6 e 22**.
- **Os botões utilizam pull-up interno**, então eles são acionados ao conectar ao **GND**.

## 📌 Melhorias Futuras
- Adicionar **debounce** para evitar leituras falsas dos botões.
- Implementar **PWM** para controle do brilho dos LEDs.
- Criar **interrupções** para tornar o código mais eficiente.

## 🔗 Referências
- [Documentação do SDK do Pico](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf)
- [Configuração do ambiente de desenvolvimento](https://github.com/raspberrypi/pico-sdk)

---
💡 **Desenvolvido para projetos de sistemas embarcados com Raspberry Pi Pico W** 🚀

