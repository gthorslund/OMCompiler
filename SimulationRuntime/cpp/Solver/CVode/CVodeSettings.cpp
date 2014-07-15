//#pragma once
#include "Modelica.h"
#include "CVodeSettings.h"

CVodeSettings::CVodeSettings(IGlobalSettings* globalSettings)
  : SolverSettings    (globalSettings)
  ,_denseOutput(true)
{
};

bool CVodeSettings::getDenseOutput()
{
  return _denseOutput;
}
void CVodeSettings::setDenseOutput(bool dense)
{
  _denseOutput = dense;
}
