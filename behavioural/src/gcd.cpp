#include "gcd.h"

gcd::gcd(sc_module_name name): sc_module(name){
  SC_HAS_PROCESS(gcd);
  SC_THREAD(do_gcd);
  sensitive << clk.pos();
  reset_signal_is(reset, true);
  X = 0;
  Y = 0;
  gcd_tmp = 0;
  ready_tmp = 0;
}

void gcd::do_gcd(){
  if(reset.read() == 1){
    gcd_tmp = 0;
    ready_tmp = 0;
    X = 0;
    Y = 0;
  }
  else{
    if(valid.read() == 1){
      X = A.read();
      Y = B.read();
    }
    else{
      if(X > Y){
        X = X - Y;
      }
      else if(X < Y){
        Y = Y - X;
      }
      else{
        ready_tmp = 1;
        gcd_tmp = X;
      }
    }
  }
  GCD.write(gcd_tmp);
  ready.write(ready_tmp);
  wait();
}
