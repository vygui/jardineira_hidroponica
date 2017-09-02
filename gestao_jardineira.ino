int foram = 0;

//variaveis de pinos
int rele = 7;
int buzzer = 6;

void setup() {
  pinMode(rele, OUTPUT);      // Define o pino 7 como saida
  pinMode(buzzer, OUTPUT);     // Define o pino 6 como saida
}

void loop() {
  if (foram == 10) {
    tone(buzzer, 1000, 2000);
    while (foram != 0) {
        tone(buzzer, 1700,500);
        delay(700);
        foram--;
    } 
  }
  
                       
 
  delay(26000);  // Espera 26 segundos
  digitalWrite(rele, HIGH);   // Fecha o rele
  delay(4000);  // Espera 4 segundos
  digitalWrite(rele, LOW);    // Abre o Rele
  foram++;
  
}
