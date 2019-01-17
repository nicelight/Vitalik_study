#define RUKA 0
#define IK_TUALET 2
#define IK_VANNA 3
#define RELE_SVET_VANNA 10
#define RELE_SVET_TUALET 11
#define LED_TUALET 9
#define LED_VANNA 8


byte svet = 0;
unsigned long ms  = 0, svetms = 0;

unsigned int vremya_zadergki_tualet = 10000;
unsigned int vremya_zadergki_vanna = 10000;

void setup() {
  Serial.begin(115200);
  pinMode(IK_TUALET, INPUT_PULLUP);
  pinMode(IK_VANNA, INPUT_PULLUP);
  pinMode(RELE_SVET_VANNA, OUTPUT);
  pinMode(RELE_SVET_TUALET, OUTPUT);
  pinMode(LED_TUALET, OUTPUT);
  pinMode(LED_VANNA, OUTPUT);
} // setup

void loop() {
  // Serial.print("IK_TUALET=");
  // Serial.print(digitalRead(IK_TUALET));
  //Serial.print("svet=");
  // Serial.println(svet);
  // Serial.print("IK_VANNA=");
  // Serial.print(digitalRead(IK_VANNA));
  //Serial.print("svet=");
  // Serial.println(svet);
  
  ms = millis();
  
 sensors(); // обрабатываем датчики
 autos(); //управляем светом

}// loop
