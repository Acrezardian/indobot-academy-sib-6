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
  digitalWrite(LED_PIN_1, random(2) == 0 ? HIGH : LOW); // Nyalakan LED 1 secara acak
  digitalWrite(LED_PIN_2, random(2) == 0 ? HIGH : LOW); // Nyalakan LED 2 secara acak
  digitalWrite(LED_PIN_3, random(2) == 0 ? HIGH : LOW); // Nyalakan LED 3 secara acak
  digitalWrite(LED_PIN_4, random(2) == 0 ? HIGH : LOW); // Nyalakan LED 4 secara acak
  delay(DELAY_TIME); // Tunda
}
