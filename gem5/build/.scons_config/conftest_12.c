

#include "execinfo.h"

int
main() {
  backtrace_symbols_fd((void*)0, 0, 0);
return 0;
}
