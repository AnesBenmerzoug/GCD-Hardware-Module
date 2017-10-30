#ifndef MUX21_H_
#define MUX21_H_

#include <systemc.h>
#include "constants.h"

class mux21: public sc_module{
public:
  // Inputs
  sc_in<bool> select;
  sc_in<sc_uint<N> > X;
  sc_in<sc_uint<N> > Y;

  // Outputs
  sc_out<sc_uint<N> > Z;

  // Constructor
  mux21(sc_module_name name);

  // Main Function
  void do_mux21();
};

#endif
