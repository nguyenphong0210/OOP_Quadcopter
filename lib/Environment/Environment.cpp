#include "Environment.h"

/* External inputs (root inport signals with default storage) */
ExtU_Environment_T Environment_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Environment_T Environment_Y;

/* Real-time model */
RT_MODEL_Environment_T Environment_M_;
RT_MODEL_Environment_T *const Environment_M = &Environment_M_;

void Environment::Init()
{
    /* (no initialization code required) */
}

void Environment::Step()
{
  /* Outputs for Atomic SubSystem: '<S1>/Environment (Constant)' */
  /* BusCreator: '<S2>/Bus Creator1' incorporates:
   *  Constant: '<S2>/Air Density'
   *  Constant: '<S2>/Air Temp'
   *  Constant: '<S2>/Pressure'
   *  Constant: '<S2>/Speed of Sound'
   */
  Environment_Y.Environmentb.AtmosphereBus.air_temp = 288.0;
  Environment_Y.Environmentb.AtmosphereBus.speed_sound = 340.0;
  Environment_Y.Environmentb.AtmosphereBus.pressure = 101300.0;
  Environment_Y.Environmentb.AtmosphereBus.air_density = 1.184;

  /* BusCreator: '<S2>/Bus Creator' incorporates:
   *  Outport: '<Root>/Environmentb'
   */
  Environment_Y.Environmentb.Gravity_ned[0] = 0.0;
  Environment_Y.Environmentb.MagneticField_ned[0] = 0.0;
  Environment_Y.Environmentb.Gravity_ned[1] = 0.0;
  Environment_Y.Environmentb.MagneticField_ned[1] = 0.0;
  Environment_Y.Environmentb.Gravity_ned[2] = 9.81;
  Environment_Y.Environmentb.MagneticField_ned[2] = 0.0;
  
  /* End of Outputs for SubSystem: '<S1>/Environment (Constant)' */
}

Environment::Environment() {}