#include "BaseAbs.h"

void BaseAbs::Init()
{
    Serial.print("Base Init");
}

void BaseAbs::Step()
{
    Serial.print("Base Step");
}

BaseAbs::~BaseAbs() {}