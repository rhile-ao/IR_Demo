/*====================================================
                  IR SENSOR DEMO
======================================================
Description:
  This code uses an IR sensor to detect objects and
  increments the counter whenever an object is 
  detected. It displays the detection count on the 
  Serial Monitor with a 500 ms delay between counts.

Programmer:
  De Asis, Felicity M.
  Dela Torre, Shanna Dale R.
  Galpo, Rhile L.

Date:
  14 October 2026
-------------------------------------------*/

// GPIOS
const byte IR= 36;

int counter= 0;
int input= 0;

void setup() {
  pinMode(IR, INPUT);
  Serial.begin(9600);
}

void loop() {

  input = digitalRead(IR);
  if (!input) {
    counter++;
    Serial.printf("Object Count: %d\n", counter);
    delay(500);
}
}