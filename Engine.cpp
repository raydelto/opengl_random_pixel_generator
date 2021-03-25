#include "Engine.h"

Engine::Engine()
{
    sAppName ="Pixel Generator";
}

bool Engine::OnUserCreate() 
{
    return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
    // called once per frame
    for (int x = 0; x < ScreenWidth(); x++)
        for (int y = 0; y < ScreenHeight(); y++)
            Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand()% 255));    
    return true;
}
