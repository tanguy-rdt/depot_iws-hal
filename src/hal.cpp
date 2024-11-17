#include "hal.h"
#include <memory>

#ifdef STUB
    #include "hal_stub.h"
#elif MINIMAL
    #include "hal_minimal.h"
#endif

#include <stdio.h>


Hal::Hal() {
    #ifdef STUB
        _hal = std::make_unique<HalStub>();
    #elif MINIMAL
        _hal = std::make_unique<HalMinimal>();
    #endif
}

Hal::~Hal() {

}

void Hal::init() {
    _hal->init();
}