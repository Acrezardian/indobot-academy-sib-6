#define LED_PIN_1 D1 // Definisikan pin LED pertama
#define LED_PIN_2 D2 // Definisikan pin LED kedua
#define LED_PIN_3 D3 // Definisikan pin LED ketiga
#define LED_PIN_4 D4 // Definisikan pin LED keempat

void setup() {
  pinMode(LED_PIN_1, OUTPUT); // Set pin LED pertama sebagai output
  pinMode(LED_PIN_2, OUTPUT); // Set pin LED kedua sebagai output
  pinMode(LED_PIN_3, OUTPUT); // Set pin LED ketiga sebagai output
  pinMode(LED_PIN_4, OUTPUT); // Set pin LED keempat sebagai output
}

void loop() {
  digitalWrite(LED_PIN_1, HIGH); // Nyalakan LED pertama
  digitalWrite(LED_PIN_2, LOW);  // Matikan LED kedua
  digitalWrite(LED_PIN_3, LOW);  // Matikan LED ketiga
  digitalWrite(LED_PIN_4, LOW);  // Matikan LED keempat
  delay(1000); // Tunda selama 1 detik

  digitalWrite(LED_PIN_1, LOW);  // Matikan LED pertama
  digitalWrite(LED_PIN_2, HIGH); // Nyalakan LED kedua
  digitalWrite(LED_PIN_3, LOW);  // Matikan LED ketiga
  digitalWrite(LED_PIN_4, LOW);  // Matikan LED keempat
  delay(1000); // Tunda selama 1 detik

  digitalWrite(LED_PIN_1, LOW);  // Matikan LED pertama
  digitalWrite(LED_PIN_2, LOW);  // Matikan LED kedua
  digitalWrite(LED_PIN_3, HIGH); // Nyalakan LED ketiga
  digitalWrite(LED_PIN_4, LOW);  // Matikan LED keempat
  delay(1000); // Tunda selama 1 detik

  digitalWrite(LED_PIN_1, LOW);  // Matikan LED pertama
  digitalWrite(LED_PIN_2, LOW);  // Matikan LED kedua
  digitalWrite(LED_PIN_3, LOW);  // Matikan LED ketiga
  digitalWrite(LED_PIN_4, HIGH); // Nyalakan LED keempat
  delay(1000); // Tunda selama 1 detik
}
