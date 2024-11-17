#ifndef HAL_MINIMAL_H
#define HAL_MINIMAL_H

#include "itf_hal.h"


class HalMinimal: public ItfHal {

public:
    HalMinimal();
    ~HalMinimal();

    void init();

private:

};


#endif // HAL_MINIMAL_H
