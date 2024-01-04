const int analogInPin = A2; //variable en entier constante , 
//attribution du pin analogique 2 à la lecture de la résistance photovoltaique
const int analogOutPin = 8;//variable en entier constante , 
//attribution du pin 8 digital au buzzer

int sensorValue = 0;//création d'une variable entier à valeur variable 
int outputValue = 0;//création d'une variable entier à valeur variable 

void setup() {
 pinMode(analogOutPin, OUTPUT); // initialisation du port 8 est une sortie
 pinMode(analogInPin, INPUT); // initialisation du port A2 est une entrée
}

void loop() {
 sensorValue = analogRead(analogInPin); //sensorValue prend la valeur relevée analoginpin à A2
 outputValue = map(sensorValue, 0, 1023, 200, 3000);//outputValue prend la valeur de la fonction map
 //qui permet de convertir une plage de valeur en une autre plage de valeur.
 analogWrite(analogOutPin, outputValue);//on met analogOutPin à la l'état de outputValue
 tone(analogOutPin, outputValue);//la note outputValue en hz jouée sur un buzzer branché sur la broche analogOutPin
 delay(50);//attendre 50ms
}