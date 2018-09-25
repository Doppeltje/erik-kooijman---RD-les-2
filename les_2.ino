//Erik Kooijman (GD2B)
String userName = "Unnamed Person";
int age = 0; //Preset for age
int a = 5; //
const float pi = 3.14;
float dia = 0;
float r = 0;
float h = 0;
//volume of a cylinder: pi * r2 * h


void setup() { // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() { // put your main code here, to run repeatedly:
  Serial.println("Hello! What's your name? :)"); //Ask for name
  while (Serial.available() == 0) //Wait for input
  { }//do nothing

  userName = Serial.readString(); //Read input and set to variable userName
  Serial.println("Hello " + userName);
  delay(1000); //Wait 1 second
  Serial.println("How old are you? :)");
    while (Serial.available() == 0)
    { }
    age = Serial.parseInt();
    Serial.println(age);
  Serial.println("Sweet! Let's calculate the volume of a cylinder, shall we?");
  delay(1000);
  Serial.println("Please insert the height of your cylinder:");
    while (Serial.available() == 0)
    { }
    h = Serial.parseFloat();
  delay(1000);
  Serial.println("Please insert the diameter of your cylinder:");
    while (Serial.available() ==0)
    { }
    dia = Serial.parseFloat();
  float r = (dia / 2); // Diameter/2 to find the radius
  Serial.println("The volume of your cylinder is: ");
  Serial.print(pi * r * r * h);
  Serial.print(" cm³");
    
}
