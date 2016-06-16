//Arduino código capsense EEO [experimentacoes eletrorganicas]

#include <CapSense.h>

CapSense   cs_4_2 = CapSense(4,2);
CapSense   cs_4_6 = CapSense(4,6);
CapSense   cs_4_8 = CapSense(4,8);
void setup()
{
   cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
   Serial.begin(9600);
}
void loop()
{
    long start = millis();
    long planta1 =  cs_4_2.capSense(30);
    long planta2 =  cs_4_6.capSense(30);
    long planta3 =  cs_4_8.capSense(30);
    if (planta1 > 20000) Serial.print(“A”);
    if (planta2 > 25000) Serial.print(“B”);
    if (planta3 > 4000) Serial.print(“C”);
delay(10);
}
//Fim

