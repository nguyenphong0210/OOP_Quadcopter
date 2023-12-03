#include "Environment.h"
#include <vector>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

std::vector<BaseAbs*> objects;

// const int numObjects = 2;
// BaseAbs* object[numObjects];

Environment* envi = new Environment();

void setup(void) {
  Serial.begin(115200);

  objects.push_back(envi);
}

void loop() {
  for (auto& object : objects)
  {
    object->Step();
  }
  Serial.println("test");
}