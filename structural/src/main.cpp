#include <systemc.h>
#include "gcd.h"
#include "gcd_tb.h"
#include "constants.h"

int sc_main(int argc, char* argv[]){
  gcd gcd_module("GCD_Module");
  gcd_testbench testbench("Testbench");

  sc_clock clk("Clock", 10, SC_NS);
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

  testbench.clk(clk);
  testbench.reset(reset);
  testbench.valid(valid);
  testbench.A(A);
  testbench.B(B);
  testbench.ready(ready);
  testbench.GCD(GCD);

  sc_start();

  return 0;
}
