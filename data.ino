void data_init(){
  Serial.begin(9600);
}

void data_loop(){
  if (Serial.available() > 0) {
    // read incoming serial data:
    // char inChar = Serial.read();
    // Type the next ASCII value from what you received:
    // Keyboard.write(inChar + 1);
  }
}

