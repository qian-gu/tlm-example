#include "top.h"
#include <systemc>

int sc_main(int argc, char *argv[])
{
  auto top = new Top("top");
  sc_start();
  return 0;
}
