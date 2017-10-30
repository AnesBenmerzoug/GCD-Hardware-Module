#ifndef SUBSTRACTOR_H_
#define SUBSTRACTOR_H_

#include <systemc.h>
#include "constants.h"

class substractor: public sc_module{
public:
  // Inputs
  sc_in<sc_uint<N> > X;
  sc_in<sc_uint<N> > Y;

  // Outputs
  sc_out<sc_uint<N> > Z;

  // Constructor
  substractor(sc_module_name name);

  // Main Function
  do_substract();
};

#endif
