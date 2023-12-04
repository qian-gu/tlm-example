#include "cpu.h"

CPU::CPU(sc_module_name name) : sc_module(name), sentence_("Hello, I am CPU.") {
  SC_METHOD(SendMethod);
}

void CPU::SendMethod() {
  auto payload = new tlm::tlm_generic_payload{};
  payload->set_data_ptr((unsigned char *)sentence_.c_str());
  auto delay = SC_ZERO_TIME;
  initiator_socket_cpu->b_transport(*payload, delay);
}
