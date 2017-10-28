#ifndef GCD_H_
#define GCD_H

#include <systemc.h>
#include "constants.h"

class gcd: public sc_module{
public:
  // Inputs
  sc_in<bool> clk;
  sc_in<bool> reset;
  sc_in<bool> valid;
  sc_in<sc_uint<N> > A;
  sc_in<sc_uint<N> > B;

  // Outputs
  sc_out<bool> ready;
  sc_out<sc_uint<N> > GCD;

  // Variables
  sc_uint<N> X, Y;
  sc_uint<N> gcd_tmp;
  bool ready_tmp;

  // Constructor
  gcd(sc_module_name name);

  // Main function
  void do_gcd();
};

#endif
