
//Entradas analogas 
int analoga =5;
int analoga2 =4;
//valor de lectura de entrada analoga 
int analoga_val = 0;

//salidas
int a =2;
int b =12;


int analoga2_val=0;


void setup()
{



pinMode(a, OUTPUT);
attachInterrupt(digitalPinToInterrupt(a),roja,CHANGE);
digitalWrite (a,HIGH);
pinMode(b, OUTPUT);



Serial. begin  (9600);
}
//funcion para encender o apagar salidas 
void onOut (int val, int out){
  if(val){
    digitalWrite (out,HIGH);
  }else{

  digitalWrite (out, LOW);    
  }

}
    
void loop() {

  analoga_val = analogRead (analoga);
  Serial.print ("Lectura de la LDR VERDE:");
  Serial.println (analoga_val);

  
  if (analoga_val < 350){

     digitalWrite(a,HIGH);
      
      
delay(5000);
 }else {

   digitalWrite(a,LOW);
   
   delay(500);

   
 }
 }
void roja()
{

    

  analoga2_val = analogRead (analoga2);
  Serial.print ("Lectura de la LDR ROJA: ");
  Serial.println (analoga2_val);
  
  if (analoga2_val < 350){

     digitalWrite(b,LOW);

delay(5000);
  } else {

   digitalWrite(b,HIGH);
   
   delay(500);

}
 }

 // put your setup code here, to run once:
