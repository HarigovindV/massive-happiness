#include "TestFoo.h"

#include <cstdio>
namespace MainSpace{
  namespace Test{
#define MAXSIZEIPSIZE 20
#deinfe MAXSIZEADDITIONALSIZE 5
std::int8_t PrintTest(const std::uint8_t * IP)
{
  if(std::strlen(IP)>MAXSIZE)return -1;
  std::uint8_t OUT[MAXSIZE+MAXSIZEADDITIONALSIZE+1];
  std::sprintf(OUT,"%s:YAY!",IP);
  std::printf(OUT);
}
}
  }//Test
}//MainSpace