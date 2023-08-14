#include "gpu.h"
#include "gpu_manager.h"

GPU::GPU(sc_module_name name) : sc_module(name) {
  gpu_manager = new GPUManager("gpu_manager");
  target_socket_cpu.bind(gpu_manager->target_socket_cpu);
}
