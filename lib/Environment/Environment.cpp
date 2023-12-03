#include "Environment.h"

/* External inputs (root inport signals with default storage) */
ExtU_Environment_T Environment_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Environment_T Environment_Y;

Environment::Environment()
{}

void Environment::Init()
{
    /* (no initialization code required) */
}

void Environment::Step()
{
    Serial.println("Step Environment");
}


