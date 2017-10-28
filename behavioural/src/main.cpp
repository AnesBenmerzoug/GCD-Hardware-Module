#include <systemc.h>
#include "gcd.h"
#include "gcd_tb.h"
#include "constants.h"

int sc_main(int argc, char* argv[]){
  gcd gcd_module("GCD_Module");

  sc_signal<bool> clk;
  sc_signal<bool> reset;
  sc_signal<bool> valid;
  sc_signal<sc_uint<N> > A;
  sc_signal<sc_uint<N> > B;
  sc_signal<bool> ready;
  sc_signal<sc_uint<N> > GCD;

  gcd_module.clk(clk);
  gcd_module.reset(reset);
  gcd_module.valid(valid);
  gcd_module.A(A);
  gcd_module.B(B);
  gcd_module.ready(ready);
  gcd_module.GCD(GCD);

  sc_start();

  return 0;
}
