#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("Fossil classification inference demo");
}

void loop() {
    Serial.println("Run inference here");
    delay(2000);
}
