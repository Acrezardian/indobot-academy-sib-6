#define LED_PIN_1 D1 // Definisikan pin LED pertama
#define LED_PIN_2 D2 // Definisikan pin LED kedua
#define LED_PIN_3 D3 // Definisikan pin LED ketiga
#define LED_PIN_4 D4 // Definisikan pin LED keempat
#define BUTTON_PIN D5 // Definisikan pin tombol
#define DELAY_TIME 500 // Waktu tunda antara perubahan keadaan LED (dalam milidetik)

int ledVariation = 1; // Variasi LED saat ini
bool buttonState = false; // Status tombol sebelumnya

void setup() {
  pinMode(LED_PIN_1, OUTPUT); // Set pin LED pertama sebagai output
  pinMode(LED_PIN_2, OUTPUT); // Set pin LED kedua sebagai output
  pinMode(LED_PIN_3, OUTPUT); // Set pin LED ketiga sebagai output
  pinMode(LED_PIN_4, OUTPUT); // Set pin LED keempat sebagai output
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Set pin tombol sebagai input dengan pull-up resistor
}

void loop() {
  // Baca status tombol
  bool currentState = digitalRead(BUTTON_PIN);

  // Jika tombol ditekan dan sebelumnya tidak ditekan
  if (currentState == LOW && buttonState == HIGH) {
    // Geser ke variasi LED berikutnya
    ledVariation = (ledVariation % 2) + 1;
    // Memainkan variasi LED yang dipilih
    playLEDVariation(ledVariation);
  }

  // Simpan status tombol untuk iterasi berikutnya
  buttonState = currentState;
}

// Fungsi untuk memainkan variasi LED yang dipilih
void playLEDVariation(int variation) {
  // Matikan semua LED
  digitalWrite(LED_PIN_1, LOW);
  digitalWrite(LED_PIN_2, LOW);
  digitalWrite(LED_PIN_3, LOW);
  digitalWrite(LED_PIN_4, LOW);

  // Nyalakan LED sesuai variasi
  switch(variation) {
    case 1:
      // Bolak-balik
      for (int i = 0; i < 2; i++) {
        digitalWrite(LED_PIN_1, HIGH);
        digitalWrite(LED_PIN_4, HIGH);
        delay(DELAY_TIME);
        digitalWrite(LED_PIN_1, LOW);
        digitalWrite(LED_PIN_4, LOW);
        delay(DELAY_TIME);
        digitalWrite(LED_PIN_2, HIGH);
        digitalWrite(LED_PIN_3, HIGH);
        delay(DELAY_TIME);
        digitalWrite(LED_PIN_2, LOW);
        digitalWrite(LED_PIN_3, LOW);
        delay(DELAY_TIME);
      }
      break;
    case 2:
      // Berurutan
      for (int i = 0; i < 4; i++) {
        digitalWrite(getLEDPin(i+1), HIGH);
        delay(DELAY_TIME);
        digitalWrite(getLEDPin(i+1), LOW);
        delay(DELAY_TIME);
      }
      break;
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
