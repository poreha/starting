#include "player.h"

player::player()
{
    hp = 20;
    atc = 5;
    block = 0;
}

void player::getName(std::string name)
{
    mName = name;
}

std::string player::putName() const
{
    return mName;
}
