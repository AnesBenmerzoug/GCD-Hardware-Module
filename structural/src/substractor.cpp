#include "substractor.h"

SC_HAS_PROCESS(substractor);

substractor::substractor(sc_module_name name):sc_module(name){
  SC_METHOD(do_substract);
  sensitive << X << Y;
}

void substractor::do_substract(){
  Z.write(X.read() - Y.read());
}
