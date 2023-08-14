#ifndef _TLM_EXAMPLE_TOP_H_
#define _TLM_EXAMPLE_TOP_H_

#include <systemc>

using namespace sc_core;

// Submodule forward declarations.
class CPU;
class GPU;

class Top : public sc_module {
  public:
    // Port declarations.

    SC_HAS_PROCESS(Top);

    // Constructor/destructor declarations.
    Top(sc_module_name name);

    // Process declarations.

    // Helper declarations.

  private:
    // Channel/Submodule *declarations.
    CPU *cpu;
    GPU *gpu;
};

#endif /* _TLM_EXAMPLE_TOP_H_ */
