
const int btnLeft = 10;     // the number of the pushbutton pin 2
const int btnOk = 11;     // the number of the pushbutton pin 3

int dataMode = false;

void setup() {
  io_init();

  if(btn_ok() && btn_sl()){
    data_init();
  }else{
    com_init();
  }

  menu_init();

  
}

void loop() {
  if(dataMode){
    data_loop();
  }else{
    com_loop();
  }    
}
