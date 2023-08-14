#ifndef _TLM_EXAMPLE_CPU_H_
#define _TLM_EXAMPLE_CPU_H_

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_initiator_socket.h>
#include <string>

using namespace sc_core;

// Submodule forward declarations.

class CPU : public sc_module {
  public:
    // Port declarations.
    tlm_utils::simple_initiator_socket<CPU> initiator_socket_cpu;

    SC_HAS_PROCESS(CPU);

    // Constructor/destructor declarations.
    CPU(sc_module_name name);

    // Process declarations.
    void SendMethod();

    // Helper declarations.

  private:
    // Channel/Submodule *declarations.
    const std::string sentence_;
};

#endif /* _TLM_EXAMPLE_CPU_H_ */

