#define RED_LED_PIN D1    // Pin untuk lampu merah
#define YELLOW_LED_PIN D2 // Pin untuk lampu kuning
#define GREEN_LED_PIN D3  // Pin untuk lampu hijau

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);     // Atur pin lampu merah sebagai output
  pinMode(YELLOW_LED_PIN, OUTPUT);  // Atur pin lampu kuning sebagai output
  pinMode(GREEN_LED_PIN, OUTPUT);   // Atur pin lampu hijau sebagai output
}

void loop() {
  // Lampu merah menyala, sementara yang lain mati
  digitalWrite(RED_LED_PIN, HIGH);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
  delay(5000); // Tunda selama 5 detik

  // Lampu kuning menyala, sementara yang lain mati
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, HIGH);
  digitalWrite(GREEN_LED_PIN, LOW);
  delay(2000); // Tunda selama 2 detik

  // Lampu hijau menyala, sementara yang lain mati
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(5000); // Tunda selama 5 detik
}
