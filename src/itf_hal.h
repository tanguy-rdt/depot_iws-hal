#ifndef ITF_HAL_H
#define ITF_HAL_H

class ItfHal {
public:
    virtual ~ItfHal() = default;

    virtual void init() = 0;
};

#endif // ITF_HAL_H