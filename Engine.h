#include "olcPixelGameEngine.h"

class Engine : public olc::PixelGameEngine
{
public:
    Engine();
    ~Engine() = default;

public:
    bool OnUserCreate() override;
    bool OnUserUpdate(float fElapsedTime) override;
};
