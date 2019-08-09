#include "player.h"

player::player(std::string t_Name)
{
    mName = t_Name;
    hp = 20;
    atc = 5;
}

player::player(std::string t_Name,int t_hp, int t_atc, int t_block, int t_mana)
{
    mName = t_Name;
    hp = t_hp;
    atc = t_atc;
    block = t_block;
    mana = t_mana;
}

void player::getName(std::string name)
{
    mName = name;
}

std::string player::putName() const
{
    return mName;
}
