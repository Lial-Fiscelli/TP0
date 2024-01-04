int led_v=4; // int variable en entier ,  attribution du ping 4 pour la led verte voiture
int led_o=3; // int variable en entier ,  attribution du ping 3 pour la led orange voiture
int led_r=2; // int variable en entier ,  attribution du ping 2 pour la led rouge voiture
int button=7; // int variable en entier ,  attribution du ping 7 pour le bouton
int led_vp=5; // int variable en entier ,  attribution du ping 5 pour la led verte du passage pour piétons
int led_rp=6; // int variable en entier ,  attribution du ping 6 pour la led rouge du passage pour piétions

void setup() {
  pinMode(led_v, OUTPUT); // initialisation du port 4 est une sortie
  pinMode(led_o, OUTPUT); // initialisation du port 3 est une sortie
  pinMode(led_r, OUTPUT); // initialisation du port 2 est une sortie
  pinMode(led_vp, OUTPUT); // initialisation du port 5 est une sortie
  pinMode(led_rp, OUTPUT); // initialisation du port 6 est une sortie
  pinMode(button, INPUT); // initialisation du port 7 est une entrée
}

void loop() {
  digitalWrite(led_vp, LOW); //on met la led verte passage pour piétons à l'état haut
  digitalWrite(led_rp, HIGH); //on met la led rouge passage pour piétons à l'état haut
  digitalWrite(led_r, LOW); //on met la led rouge pour les voitures à l'état bas
  digitalWrite(led_v, HIGH); //on met la led verte pour les voitures à l'état haut
  delay(3000); // attrendre 3s
  if (digitalRead(7)==HIGH) { // si lecture du bouton à l'état haut
    digitalWrite(led_rp, LOW); //on met la led rouge pour piétions  à l'état bas
    digitalWrite(led_vp, HIGH); //on met la led verte pour les piétons à l'état haut
    digitalWrite(led_r, HIGH); //on met la led rouge pour les voitures à l'état haut
    digitalWrite(led_v, LOW); //on met la led verte pour les voitures à l'état bas
    delay(3000); // attendre 3s
    digitalWrite(led_vp, LOW); //on met la led verte pour les piétons à l'état bas
    digitalWrite(led_rp, HIGH);//on met la led rouge pour les piétons à l'état haut
    digitalWrite(led_v, HIGH); //on met la led verte pour les voitures à l'état haut
    digitalWrite(led_r, LOW);//on met la led rouge pour les voitures à l'état bas
    digitalWrite(led_o, LOW);//on met la led orange pour les voitures à l'état bas
    delay(3000); // attendre 3s
}
  
  digitalWrite(led_r, LOW);//on met la led rouge pour les voitures à l'état bas
  digitalWrite(led_v, LOW);//on met la led verte pour les voitures à l'état bas
  digitalWrite(led_o, HIGH);////on met la led orange pour les voitures à l'état haut
  delay(1000); // attendre 1s
  digitalWrite(led_r, HIGH); //on met la led rouge pour les voitures à l'état haut
  digitalWrite(led_o, LOW);//on met la led orange pour les voitures à l'état bas
  delay(3000);// attendre 3s
}