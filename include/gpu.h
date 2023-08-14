#ifndef _TLM_EXAMPLE_GPU_H_
#define _TLM_EXAMPLE_GPU_H_

#include <systemc>
#include <tlm>

using namespace sc_core;

// Submodule forward declarations.
class GPUManager;

class GPU : public sc_module {
  public:
    // Port declarations.
    tlm::tlm_target_socket<> target_socket_cpu;

    SC_HAS_PROCESS(GPU);

    // Constructor/destructor declarations.
    GPU(sc_module_name name);

    // Process declarations.

    // Helper declarations.

  private:
    // Channel/Submodule *declarations.
    GPUManager *gpu_manager;
};

#endif /* _TLM_EXAMPLE_GPU_H_ */

