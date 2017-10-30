#include "mux21.h"

SC_HAS_PROCESS(mux21);

mux21::mux21(sc_module_name name):sc_module(name){
  SC_METHOD(do_mux21);
  sensitive << X << Y << select;
}

void mux21::do_mux21(){
  switch(select){
    case 0:
      Z.write(X);
      break;
    case 1:
      Z.write(Y);
      break;
  }
}
