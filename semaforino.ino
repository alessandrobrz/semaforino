/*
Traffic Light LED
by alessandrobrz
*/

void setup() {
  // inizializzazione pin uscite
  pinMode(8, OUTPUT);  //LED VERDE
  pinMode(9, OUTPUT);  //LED GIALLO
  pinMode(10, OUTPUT); //LED ROSSO
}

// CICLO DI LAVORO SEMAFORO A LED
void loop() {
  digitalWrite(8, HIGH);    // ACCENSIONE LED VERDE
  delay(5000);              // ATTESA 5 SECONDI
  digitalWrite(9, HIGH);    // ACCENSIONE LED GIALLO
  delay(5000);              // ATTESA DI 5 SECONDI
  digitalWrite(8, LOW);     // SPEGNIMENTO LED VERDE
  digitalWrite(9, LOW);     // SPEGNIMENTO LED GIALLO
  digitalWrite(10, HIGH);   // ACCENSIONE LED ROSSO
  delay(5000);              // ATTESA DI 5 SECONDI
  digitalWrite(10, LOW);    // SPEGNIMENTO LED ROSSO
}
