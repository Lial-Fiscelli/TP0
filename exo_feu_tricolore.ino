int rouge = 2; // int variable en entier ,  attribution du ping 2 pour la led rouge
int orange = 3 ; // int variable en entier ,  attribution du ping 3 pour la led orange
int vert = 4 ; // int variable en entier ,  attribution du ping 4 pour la led verte

void setup() {
  // put your setup code here, to run once:
  pinMode(rouge, OUTPUT); // initialisation du port 2 est une sortie
  pinMode(orange, OUTPUT); //initialisation du port 3 est une sortie
  pinMode(vert, OUTPUT); //initialisation du port 4 est une sortie

}

void loop() {
  digitalWrite(vert, HIGH); //on met la led verte à l'état haut
  delay(3000); // attendre 3s
  digitalWrite(vert, LOW); //on met la led verte à l'état bas
  digitalWrite(orange, HIGH); //on met la led orange à l'état haut
  delay(1000); //attendre 1s
  digitalWrite(orange,LOW); //on met la led orange à l'état bas
  digitalWrite(rouge, HIGH); //on met la led rouge à l'état haut
  delay(3000); //attendre 3s 
  digitalWrite(rouge,LOW); //on met la led rouge à l'état bas
  

}
