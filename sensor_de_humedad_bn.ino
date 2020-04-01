
//Entradas analogas 
int analoga =5;

//valor de lectura de entrada analoga 
int anlg_val = 0;

//salidas
int salida =13;






void setup()
{



pinMode(salida, OUTPUT);




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

  anlg_val = analogRead (analoga);
  Serial.print ("Lectura de la LDR:");
  Serial.println (anlg_val);

 
  if (anlg_val < 350){

     digitalWrite(salida,HIGH);

delay(5000);
 }else {

   digitalWrite(salida,LOW);

   delay(500);

 } }   


 // put your setup code here, to run once:
