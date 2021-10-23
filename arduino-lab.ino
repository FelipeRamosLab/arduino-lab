#include <string.h>

int count;

void setup(){
    Serial.begin(9600);
    count = 0;
}

void loop(){
    Serial.print("Teste ");
    Serial.println(count);

    count++;
    delay(1000);
}
