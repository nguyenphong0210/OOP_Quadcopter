#ifndef RTW_HEADER_Environment_h_
#define RTW_HEADER_Environment_h_
#include "rtwtypes.h"

#ifndef Environment_COMMON_INCLUDES_
# define Environment_COMMON_INCLUDES_
#include "rtwtypes.h"
#include <BaseAbs.h>
#endif

#ifndef DEFINED_TYPEDEF_FOR_StatesBus_
#define DEFINED_TYPEDEF_FOR_StatesBus_

typedef struct {
  real_T V_body[3];
  real_T Omega_body[3];
  real_T Euler[3];
  real_T Accel_body[3];
  real_T dOmega_body[3];
  real_T V_ned[3];
  real_T X_ned[3];

  /* Latitude, Longitude, Altitude */
  real_T LLA[3];
  real_T DCM_be[9];
} StatesBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AtmosphereBus_
#define DEFINED_TYPEDEF_FOR_AtmosphereBus_

typedef struct {
  real_T air_temp;
  real_T speed_sound;
  real_T pressure;
  real_T air_density;
} _AtmosphereBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EnvironmentBus_
#define DEFINED_TYPEDEF_FOR_EnvironmentBus_

typedef struct {
  real_T Gravity_ned[3];
  _AtmosphereBus AtmosphereBus;
  real_T MagneticField_ned[3];
} EnvironmentBus;

#endif


/* External inputs (root inport signals with default storage) */
typedef struct {
  StatesBus States;                    /* '<Root>/States' */
} ExtU_Environment_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  EnvironmentBus Environmentb;         /* '<Root>/Environmentb' */
} ExtY_Environment_T;

class Environment : public BaseAbs
{
public:
    Environment();
    void Init() override;
    void Step() override;
};



#endif                                 /* RTW_HEADER_Environment_h_ */
