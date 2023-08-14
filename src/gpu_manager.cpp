#include "gpu_manager.h"

GPUManager::GPUManager(sc_module_name name) : sc_module(name) {
  target_socket_cpu.register_b_transport(this, &GPUManager::receive);
}

void GPUManager::receive(tlm::tlm_generic_payload &payload, sc_time &delay) {
  vcml::log.info("%s", payload.get_data_ptr());
}
