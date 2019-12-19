int red = 7;
int yellow = 8;
int green = 9;

int brightness = 0;
String reponse;
  
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  Serial.begin(9600);
}
     
enum EtatCourant {
   AttenteReponse,
}
   
etat = AttenteReponse;  
           
void loop()
{
  
          if (Serial.available() > 0) {
            reponse = Serial.readString();
 
            if(reponse.substring(0,1)=="R")
            {
              analogWrite(red, reponse.substring(1).toInt());
              Serial.println(reponse.substring(1));
            }

            if(reponse.substring(0,1)=="G")
            {
              analogWrite(green, reponse.substring(1).toInt());
              Serial.println(reponse.substring(1));
            }
             
            if(reponse.substring(0,1)=="Y")
            {
              analogWrite(yelow, reponse.substring(1).toInt());
              Serial.println(reponse.substring(1));
            }
             
              
            }
             
}
