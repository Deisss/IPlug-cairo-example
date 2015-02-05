#ifndef __MYFIRSTCAIROPLUGIN__
#define __MYFIRSTCAIROPLUGIN__

#include "IPlug_include_in_plug_hdr.h"

class MyFirstCairoPlugin : public IPlug
{
public:
  MyFirstCairoPlugin(IPlugInstanceInfo instanceInfo);
  ~MyFirstCairoPlugin();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mGain;
};

#endif
