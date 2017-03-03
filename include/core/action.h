#ifndef CORE_ACTION_INCLUDED
#define CORE_ACTION_INCLUDED


#include "core/parameter.h"


class Parameter;


class Action
{
    public:
        Action();
        virtual Action *Create();
        virtual ~Action();
        virtual void run(Parameter *p) {};
};


#endif