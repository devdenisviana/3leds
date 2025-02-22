# Controle de LEDs com Botões no Raspberry Pi Pico W (BitdogLab)

Este projeto demonstra o uso e a configuração de pinos GPIO (General Purpose Input/Output) em um Raspberry Pi Pico W, especificamente em uma placa BitdogLab, para controlar LEDs com botões.

## Descrição

O objetivo principal deste projeto foi praticar e aprimorar o conhecimento sobre o uso de GPIOs no Raspberry Pi Pico W. Através da configuração de pinos como entradas e saídas, foi possível implementar um sistema onde botões controlam o acendimento de LEDs.

O projeto utiliza três botões como entradas digitais para detectar quando são pressionados. Ao pressionar um botão, o pino GPIO correspondente envia um sinal para acender um LED específico. Ao soltar o botão, o LED se apaga.

## Componentes Utilizados

* **Raspberry Pi Pico W:** O microcontrolador principal, responsável por executar o código e controlar os pinos GPIO.
* **Placa BitdogLab:** Utilizada como plataforma para facilitar a conexão dos componentes e o desenvolvimento do projeto.
* **LEDs (Verde, Azul e Vermelho):** Utilizados como indicadores visuais para demonstrar o controle dos pinos GPIO.
* **Botões:** Utilizados como entradas digitais para interagir com o sistema e controlar os LEDs.
* **Resistores:** Utilizados para limitar a corrente nos LEDs e para configurar os botões com pull-up.
* **Fios:** Utilizados para conectar os componentes à placa BitdogLab e ao Raspberry Pi Pico W.

## Recursos Utilizados

* **GPIOs (General Purpose Input/Output):** Pinagem do microcontrolador que permite a interação com componentes externos.
* **Resistores Pull-up:** Configuração utilizada para garantir que os pinos de entrada dos botões tenham um estado definido quando não estão pressionados.

## Objetivo

O foco principal deste projeto foi o aprendizado e a prática da configuração e utilização de pinos GPIO em um Raspberry Pi Pico W. O objetivo foi demonstrar a capacidade de controlar dispositivos externos (LEDs) através de entradas digitais (botões), utilizando os recursos de GPIO do microcontrolador.