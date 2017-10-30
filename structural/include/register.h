#ifndef REGISTER_H_
#define REGISTER_H_

#include <systemc.h>
#include "constants.h"

class register: public sc_module(){
public:
  // Inputs
  sc_in<bool> clk;
  sc_in<bool> reset;
  sc_in<bool> enable;
  sc_in<sc_uint<N> > D;

  // Outputs
  sc_out<sc_uint<N> > Q;

  // Constructor
  register(sc_module_name name);

  // Main Function
  do_register();
};

#endif
