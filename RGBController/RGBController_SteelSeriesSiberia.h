/*-----------------------------------------*\
|  RGBController_SteelSeriesSiberia.h       |
|                                           |
|  Generic RGB Interface SteelSeriesSiberia |
|  Class                                    |
|                                           |
|  E Karlsson (pilophae) 18/06/2020         |
\*-----------------------------------------*/

#pragma once

#include "RGBController.h"
#include "SteelSeriesSiberiaController.h"

class RGBController_SteelSeriesSiberia : public RGBController
{
public:
    RGBController_SteelSeriesSiberia(SteelSeriesSiberiaController* siberia_ptr);

    void        SetupZones();

    void        ResizeZone(int zone, int new_size);

    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        SetCustomMode();
    void        UpdateMode();

private:
    SteelSeriesSiberiaController*     siberia;
};
