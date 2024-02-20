// Development Plan: Commit the code each time a step is completed.
// [x] Write and build the boilerplate code for Arduino (#include<Arduino.h>, setup(), loop())
// [x] Open the simulator
// [x] Make the red LED flash on and off once every 50 milliseconds.
// [x] Make the red LED flash on and off only if one of the buttons is being pressed.
// [x] Turn on an LED when the button of a corresponding color is held down.
// [x] The blue LED should be different; it should turn off when its button is pressed, not on.
// [x] The green LED should be a switch; when its button is pressed, it should change from staying on to staying off, then go back the next time it's pressed.
// [ ] When the red button is pressed, it should turn on for a couple of seconds, then automatically turn back off.
// [ ] All buttons' LEDs should respond as soon as they are pressed.


#include <Arduino.h>

bool isPressed = false;

void setup() {
    // initialize LEDs
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

    // initialize Buttons
    pinMode(11, INPUT);
    digitalWrite(11, HIGH);
    pinMode(10, INPUT);
    digitalWrite(10, HIGH);
    pinMode(9, INPUT);
    digitalWrite(9, HIGH);
}


void loop () {
    if (digitalRead(11) == 0) {
        digitalWrite(3, HIGH);
        delay(500);
        digitalWrite(3, LOW);
        delay(500);
    }

    if (digitalRead(10) == 0) {
        isPressed = true;
    }
    if (isPressed == 1) {
        digitalWrite(4, !digitalRead(4));
        isPressed = false;
    }

    if (digitalRead(9) == 0) {
        digitalWrite(5, LOW);
    } else {
        digitalWrite(5, HIGH);
    }
}