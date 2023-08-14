#ifndef _TLM_EXAMPLE_GPU_MANAGER_H_
#define _TLM_EXAMPLE_GPU_MANAGER_H_

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_target_socket.h>
#include <vcml.h>

using namespace sc_core;

// Submodule forward declarations.

class GPUManager : public sc_module {
  public:
    // Port declarations.
    tlm_utils::simple_target_socket<GPUManager> target_socket_cpu;

    SC_HAS_PROCESS(GPUManager);

    // Constructor/destructor declarations.
    GPUManager(sc_module_name name);

    // Process declarations.

    // Helper declarations.
    void receive(tlm::tlm_generic_payload &payload, sc_time &delay);

  private:
    // Channel/Submodule *declarations.
};

#endif /* _TLM_EXAMPLE_GPU_MANAGER_H_ */


