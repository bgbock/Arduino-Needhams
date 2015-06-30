void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

  Serial.println();
  Serial.println("Code has started!");


//Set pin 0 to Output

pinMode(0, OUTPUT);           // set pin to output

//Set pins 1 to 29 as Input

For I = 1 to 29
    pinMode(I, INPUT_PULLUP);           // set pins to input
Next I

}

void loop() {

  // Perform ONCE
  //Check for continutity, pin to read HIGH when the circuit is open, and LOW when the circuit is closed.

For PinConnection = 1 to 30 Step 1

  For C = 1 to 29 step 1
    digitalRead(C); check for continutity
    if (C == LOW) {
     // if the condition is true: Print on screen what pin connects to another pin
     Serial.println("Module Pin" PinConnection-1 connects to "Pin" C == C + 1);
    } else {
       // if the condition is false: try next pin
       C == C + 1

Next PinConnection

// Run Pins 2 through 30
//Check for continutity, pin to read HIGH when the circuit is open, and LOW when the circuit is closed.

For Pins1 = 2 to 30 Step 1
//Set pin Pins1-1 to Output

pinMode(Pins1-1, OUTPUT);           // set next pin to output

//Set pins Pins1 to 29 as Input

For I = Pins1 to 29
    pinMode(I, INPUT_PULLUP);           // set pins to input
Next I
For I = 0 to Pins1-1
    pinMode(I, INPUT_PULLUP);           // set pins to input
Next I

For PinConnection = 0 to Pins1-1 Step 1

  For Pins2 = 2 to Pins1-1 step 1
    digitalRead(C); check for continutity
    if (Pins2 == LOW) {
     // if the condition is true: Print on screen what pin connects to another pin
     Serial.println("Module Pin" PinConnection connects to "Pin"  == C + 1);
    } else {
       // if the condition is false: try next pin
       Pins2 == Pins2 + 1

Next PinConnection

For PinConnection = Pins1 to 30 Step 1

  For Pins2 = Pins1 to 29 step 1
    digitalRead(C); check for continutity
    if (Pins2 == LOW) {
     // if the condition is true: Print on screen what pin connects to another pin
     Serial.println("Module Pin" PinConnection connects to "Pin"  == C + 1);
    } else {
       // if the condition is false: try next pin
       Pins2 == Pins2 + 1

Next PinConnection
}
    Serial.println("Code has finished!");
    While{1} ( /*empty*/ }


}
