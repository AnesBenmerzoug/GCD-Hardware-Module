#ifndef COMPARATOR_H_
#define COMPARATOR_H_

#include <systemc.h>
#include "constants.h"

class comparator: public sc_module{
public:
  // Inputs
  sc_in<sc_uint<N> > X;
  sc_in<sc_uint<N> > Y;

  // Outputs
  sc_out<sc_uint<N> > Z;
  sc_out<bool> Gt;
  sc_out<bool> Eq;
  sc_out<bool> Lt;

  // Constructor
  comparator(sc_module_name name);

  // Main Function
  void do_compare();
};

#endif
