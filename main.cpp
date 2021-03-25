#define OLC_PGE_APPLICATION
#include "Engine.h"


int main()
{
    Engine engine;
    if (engine.Construct(640, 480, 4, 4, true))
    {
        engine.Start();    
    }
    return 0;
}
