#define LED_PIN_1 D1 // Definisikan pin LED pertama
#define LED_PIN_2 D2 // Definisikan pin LED kedua

void setup() {
  pinMode(LED_PIN_1, OUTPUT); // Set pin LED pertama sebagai output
  pinMode(LED_PIN_2, OUTPUT); // Set pin LED kedua sebagai output
}

void loop() {
  digitalWrite(LED_PIN_1, HIGH); // Nyalakan LED pertama
  digitalWrite(LED_PIN_2, LOW); // Nyalakan LED kedua
  delay(1000); // Tunda selama 1 detik
  
  digitalWrite(LED_PIN_1, LOW); // Matikan LED pertama
  digitalWrite(LED_PIN_2, HIGH); // Matikan LED kedua
  delay(1000); // Tunda selama 1 detik
}
