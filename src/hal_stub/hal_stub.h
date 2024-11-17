#ifndef HAL_STUB_H
#define HAL_STUB_H

#include "itf_hal.h"


class HalStub: public ItfHal {

public:
    HalStub();
    ~HalStub();

    void init();

private:

};


#endif // HAL_STUB_H
