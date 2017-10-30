#include "register.h"

SC_HAS_PROCESS(register);

register::register(sc_module_name name):sc_module(name){
  SC_METHOD(do_register);
  sensitive << clk.pos();
}

void register::do_register(){
  if(reset.read() == 1){
    Q.write(0);
  }
  else{
    if(enable.read() == 1){
      Q.write(D.read());
    }
  }
}
