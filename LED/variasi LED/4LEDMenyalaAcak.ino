#define LED_PIN_1 D1 // Definisikan pin LED pertama
#define LED_PIN_2 D2 // Definisikan pin LED kedua
#define LED_PIN_3 D3 // Definisikan pin LED ketiga
#define LED_PIN_4 D4 // Definisikan pin LED keempat
#define DELAY_TIME 500 // Waktu tunda antara perubahan keadaan LED (dalam milidetik)

void setup() {
  pinMode(LED_PIN_1, OUTPUT); // Set pin LED pertama sebagai output
  pinMode(LED_PIN_2, OUTPUT); // Set pin LED kedua sebagai output
  pinMode(LED_PIN_3, OUTPUT); // Set pin LED ketiga sebagai output
  pinMode(LED_PIN_4, OUTPUT); // Set pin LED keempat sebagai output

  randomSeed(analogRead(0)); // Inisialisasi generator bilangan acak dengan nilai analog
}

void loop() {
  int randomLED = random(1, 5); // Pilih secara acak nomor LED dari 1 hingga 4
  switch(randomLED) {
    case 1:
      digitalWrite(LED_PIN_1, HIGH); // Nyalakan LED pertama
      break;
    case 2:
      digitalWrite(LED_PIN_2, HIGH); // Nyalakan LED kedua
      break;
    case 3:
      digitalWrite(LED_PIN_3, HIGH); // Nyalakan LED ketiga
      break;
    case 4:
      digitalWrite(LED_PIN_4, HIGH); // Nyalakan LED keempat
      break;
  }
  delay(DELAY_TIME); // Tunda

  digitalWrite(LED_PIN_1, LOW); // Matikan semua LED
  digitalWrite(LED_PIN_2, LOW);
  digitalWrite(LED_PIN_3, LOW);
  digitalWrite(LED_PIN_4, LOW);
  delay(DELAY_TIME); // Tunda
}
