#include "top.h"
#include "cpu.h"
#include "gpu.h"

Top::Top(sc_module_name name) : sc_module(name) {
  cpu = new CPU("cpu");
  gpu = new GPU("gpu");
  cpu->initiator_socket_cpu.bind(gpu->target_socket_cpu);
}
