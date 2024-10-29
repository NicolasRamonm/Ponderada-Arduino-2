# Ponderada-Arduino-2

<img src='PXL_20241029_115216588.jpg'>

## Explicação da montagem:

Foram utilizados 3 LEDs (verde, amarelo e vermelho), conectados às portas 5, 6 e 7 respectivamente. Além disso 8 cabos macho-macho foram utilizados para as conexões, e um resistor de 1K Ω antes da conexão com o GND do arduino, também foi utilizado um servo motor que move 90° quando o semáforo está verde e retorna quando vermelho.

| Component Category   | Quantity   | Component Names                   |
|:---------------------|:-----------|:----------------------------------|
| LEDS                 | 3          | Verde, Vermelho, Amarelo          |
| Resistores           | 1          | Resistor 1K Ω                     |
| Cabos                | 8          | Conectores Macho-Macho            |
| Servo                | 1          | Servo Motor 180°                  |

## Código utilizado:

```cpp
#include <Servo.h> //biblioteca para utilizar o servo

//número dos pinos
int ledVermelho = 6;
int ledAmarelo = 5;
int ledVerde = 4;

//pino do servo
Servo meuServo;
int pinoServo = 3;

void setup() {
//define os pinos como outputs
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  meuServo.attach(pinoServo);

  // Configurando o servo na posição inicial (0 graus)
  meuServo.write(0);
}

void loop() {
  // Vermelho (6 segundos)
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  meuServo.write(0); // Retorna o servo para 0 graus
  delay(6000);

  // Amarelo (2 segundos)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);

  // Verde (2 segundos + movimento do servo)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  meuServo.write(90); // Move o servo para 90 graus
  delay(4000);


  // Amarela (2 segundos)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);
}

```

[Link para visualização do funcionamento](https://www.youtube.com/watch?v=iweuzPhMklg)

## Avaliação

### Avaliador: Nome do Avaliador

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |                           Uso correto do resistor, montagem um pouco confusa de cabos e bom uso de cores: 2,5|
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        |                           Tempo marcado com cronômetro do celular correto: 3|
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        |                           Código respeita as fases do semáforo e apresenta boa estrutura, com comentários e bons nomes de variáveis: 3|
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        |                           Utiliza o micro servo corretamente no sistema: 1|
|  |                                                             |  | |**Pontuação Total: 9,5**|
