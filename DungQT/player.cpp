#include "player.h"

player::player()
{

}

void player::getName(std::string name)
{
    mName = name;
}

std::string player::putName()
{
    return mName;
}
