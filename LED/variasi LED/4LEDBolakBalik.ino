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
}

void loop() {
  for (int i = 1; i <= 4; i++) {
    digitalWrite(getLEDPin(i), HIGH); // Nyalakan LED
    delay(DELAY_TIME); // Tunda
    digitalWrite(getLEDPin(i), LOW); // Matikan LED
  }

  for (int i = 3; i >= 2; i--) {
    digitalWrite(getLEDPin(i), HIGH); // Nyalakan LED
    delay(DELAY_TIME); // Tunda
    digitalWrite(getLEDPin(i), LOW); // Matikan LED
  }
}

int getLEDPin(int index) {
  switch(index) {
    case 1:
      return LED_PIN_1;
    case 2:
      return LED_PIN_2;
    case 3:
      return LED_PIN_3;
    case 4:
      return LED_PIN_4;
    default:
      return -1;
  }
}
