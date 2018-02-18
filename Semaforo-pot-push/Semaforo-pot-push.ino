int pv=2, pr=4, sv=5, sa=6, sr=7; 
//pv es led verde para peatones
//pr es led rojo para peatones
//sv es led ver para semaforo
//sa es led amarillo para semaforo
//sr es led rojo para semaforo
/*El presente programa presenta la simulación de un crucer de autos y peatones 
 * con semaforos, el sistema de los semaforos es un sistema americano, ya que contiene un
 * boton que permite hacer el cambio a verde el semaforo de los peatones siempre que estos desen
 */
int pinPot = A0;  // pin en donde se usará el potenciómetro
int valorPot;  // Variable para el valor del potenciómetro
int parpadeo;  // Función del map
int Boton=8;  // variable del pushbutton

void setup() {
   //peaton
  pinMode(pv, OUTPUT);
  pinMode(pr, OUTPUT);
  //semaforo
  pinMode(sv, OUTPUT);
  pinMode(sa, OUTPUT);
  pinMode(sr, OUTPUT);
  pinMode(Boton, OUTPUT);
  Serial.begin(9600);
  digitalWrite(sv,HIGH);
  digitalWrite(pr,HIGH);
  

}

void loop() {
  valorPot = analogRead(pinPot); // Lee el valor del pot y lo guarda en la variable valorPot
  parpadeo = map(valorPot, 0, 1023, 100, 500);  // función de mapeo que definirá el delay entre 4 rangos.
  if(digitalRead(Boton)) // el if pretende que una vez presionado el boton este hara la rutina 
  //del cambio de luz
  
  cambioLuz();
    //estado = LOW;
  
}

void cambioLuz(){
  digitalWrite(sv, HIGH);
  digitalWrite(pr, HIGH);
  delay(parpadeo);
  //parpadeo semaforo
  digitalWrite(sv, LOW);
  delay(parpadeo);
  digitalWrite(sv, HIGH);
  delay(parpadeo);
  digitalWrite(sv, LOW);
  delay(parpadeo);
  digitalWrite(sv, HIGH);
  delay(parpadeo);
  digitalWrite(sv, LOW);
  delay(parpadeo);
  digitalWrite(sv, HIGH);
  delay(parpadeo);
  //cambio semaforo
  digitalWrite(sv, LOW);
  digitalWrite(sa, HIGH);
  delay(parpadeo);
  delay(parpadeo);
  digitalWrite(sa, LOW);
  digitalWrite(pr, LOW);
  //cambio peaton y semaforo rojo
  digitalWrite(pv, HIGH);
  digitalWrite(sr, HIGH);
  delay(parpadeo);
  delay(parpadeo);
  delay(parpadeo);
  delay(parpadeo);
  delay(parpadeo);
  //parpadeo peatonal
  digitalWrite(pv, LOW);
  delay(parpadeo);
  digitalWrite(pv, HIGH);
  delay(parpadeo);
  digitalWrite(pv, LOW);
  delay(parpadeo);
  digitalWrite(pv, HIGH);
  delay(parpadeo);
  digitalWrite(pv, LOW);
  delay(parpadeo);
  digitalWrite(pv, HIGH);
  delay(parpadeo);
  digitalWrite(pv, LOW);
  delay(parpadeo);
  digitalWrite(pv, HIGH);
  delay(parpadeo);
  //cambio semaforo y peatonal
  //cambio semaforo
  digitalWrite(pv, LOW);
  digitalWrite(pr, HIGH);
  delay(parpadeo);
  digitalWrite(sr, LOW);
  digitalWrite(sv, HIGH);

//  cambioTiempo = millis();
}
