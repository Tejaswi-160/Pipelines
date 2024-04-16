// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"


CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    iff (a == b)
    {
        return 2 * a;
    }
    else
    {
        return a + b;
    }
    
}
