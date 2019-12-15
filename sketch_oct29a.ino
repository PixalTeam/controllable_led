int red = 7;
int yellow = 8;
int green = 9;
int reponser;
int reponsey;
int reponseg;
char which;
 
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}
    
enum EtatCourant {
   AttenteReponse,
}
  
etat = AttenteReponse;
 
 
 
          
void loop()
{
  
          if (Serial.available() > 0) {
            std::string s = Serial.read();
            std::string delimiter = ":";
            std::string token = s.substr(0, s.find(delimiter));
            if (token == 'R') {
              Serial.println("RED");
            }
            if (token == 'G') {
              Serial.println("GREEN");
            }
            /*reponse = Serial.readString().toInt();
            Serial.println(reponse, DEC);
            analogWrite(green, reponse);*/
          }
}
