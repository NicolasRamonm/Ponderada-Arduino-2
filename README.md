# Ponderada-Arduino-2

<img src='PXL_20241029_085758840.jpg'>

## Explicação da montagem:

Foram utilizados 3 LEDs (verde, amarelo e vermelho), conectados às portas 5, 6 e 7 respectivamente. Além disso 8 cabos macho-macho foram utilizados para as conexões, e um resistor de 1K Ω antes da conexão com o GND do arduino.

| Component Category   | Quantity   | Component Names                   |
|:---------------------|:-----------|:----------------------------------|
| LEDS                 | 3          | Verde, Vermelho, Amarelo          |
| Resistores           | 1          | Resistor 1K Ω                     |
| Cabos                | 8          | Conectores Macho-Macho            |

## Código utilizado:

```
int ledVermelho = 6;
int ledAmarelo = 5;
int ledVerde = 4;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Vermelho (6 segundos)
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(6000);

  // Amarelo (2 segundos)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);

  // Verde (4 segundos)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(4000);

  // Amarelo (2 segundos)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);
}
```

[Link para visualização do funcionamento](https://www.youtube.com/watch?v=oWXmuI6rF3A)
