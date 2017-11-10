#define BTN_OK 11
#define BTN_SL 10


void io_init(){
  pinMode(BTN_OK, INPUT);
  pinMode(BTN_SL, INPUT);

  digitalWrite(LED_BUILTIN, LOW);
  
  pinMode(LED_BUILTIN, OUTPUT);

  return;
}

uint8_t btn_ok(){
  return digitalRead(BTN_OK);
}
uint8_t btn_sl(){
  return digitalRead(BTN_SL);
}

void led_on(){
  digitalWrite(LED_BUILTIN, HIGH);
}

void led_off(){
  digitalWrite(LED_BUILTIN, LOW);
}


