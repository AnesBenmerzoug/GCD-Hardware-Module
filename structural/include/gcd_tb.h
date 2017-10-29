#ifndef GCD_TB_H_
#define GCD_TB_H

#include <systemc.h>
#include "constants.h"

class gcd_testbench: public sc_module{
public:
  // Inputs
  sc_in<bool> clk;
  sc_in<bool> ready;
  sc_in<sc_uint<N> > GCD;

  // Outputs
  sc_out<bool> reset;
  sc_out<bool> valid;
  sc_out<sc_uint<N> > A;
  sc_out<sc_uint<N> > B;

  // Constructor
  gcd_testbench(sc_module_name name);

  // Main Function
  void do_testbench();
};

#endif
