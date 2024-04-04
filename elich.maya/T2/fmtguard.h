#ifndef FMTGUARD_H
#define FMTGUARD_H

#include <iostream>

namespace elich
{
  class iofmtguard
  {
   public:
    iofmtguard(std::basic_ios< char > & s);
    ~iofmtguard();

   private:
    std::basic_ios< char > & s_;
    char fill_;
    std::streamsize precision_;
    std::basic_ios< char >::fmtflags fmt_;
  };
}

#endif
