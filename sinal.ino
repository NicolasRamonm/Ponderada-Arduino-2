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