#ifndef BASEABS_H
#define BASEABS_H

#ifndef INCLUDE_COMMON_Base
#define INCLUDE_COMMON_Base
#include <Arduino.h>
#endif

class BaseAbs{
    public:
    virtual void Init() = 0;
    virtual void Step() = 0;
    virtual ~BaseAbs();
};

#endif