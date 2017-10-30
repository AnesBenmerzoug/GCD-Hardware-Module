#include "comparator.h"

comparator::comparator(sc_module_name name):sc_module(name){
  SC_METHOD(do_compare);
  sensitive << X << Y;
}

void comparator::do_compare(){
  Gt.write(0);
  Eq.write(0);
  Lt.write(0);
  Z.write(X);
  if(X > Y){
    Gt.write(1);
  }
  else(X < Y){
    Lt.write(1);
  }
  else{
    Eq.write(1);
  }
}
