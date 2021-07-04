/*
Traffic Light LED
by alessandrobrz
*/
int LED_Verde = 8;
int LED_Giallo = 9;
int LED_Rosso = 10;

void setup() {
  // inizializzazione pin uscite
  pinMode(LED_verde, OUTPUT);  //LED VERDE
  pinMode(LED_Giallo, OUTPUT);  //LED GIALLO
  pinMode(LED_Rosso, OUTPUT); //LED ROSSO
}

// CICLO DI LAVORO SEMAFORO A LED
void loop() {
  digitalWrite(LED_verde, HIGH);    // ACCENSIONE LED VERDE
  delay(5000);              // ATTESA 5 SECONDI
  digitalWrite(LED_Giallo, HIGH);    // ACCENSIONE LED GIALLO
  delay(5000);              // ATTESA DI 5 SECONDI
  digitalWrite(LED_verde, LOW);     // SPEGNIMENTO LED VERDE
  digitalWrite(LED_Giallo, LOW);     // SPEGNIMENTO LED GIALLO
  digitalWrite(LED_Rosso, HIGH);   // ACCENSIONE LED ROSSO
  delay(5000);              // ATTESA DI 5 SECONDI
  digitalWrite(LED_Rosso, LOW);    // SPEGNIMENTO LED ROSSO
}
