#pragma once
#if defined ZMQ_HAVE_WINDOWS
#include "platform_windows.hpp"
#elif defined ZMQ_HAVE_OSX
#include "platform_darwin_x86_64.hpp"
#elif defined ZMQ_HAVE_LINUX
#else
  error "Sorry, haven't built on that platform yet"
#endif