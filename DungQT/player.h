#ifndef PLAYER_H
#define PLAYER_H

#include <string>


class player
{
private:
    std::string mName;
public:
    int hp =0;
    int atc =0;
    int block =0;
    int mana =0;
    player(std::string t_Name, int t_hp, int t_atc, int t_block, int t_mana);
    player(std::string t_Name);
    void getName(std::string = "");
    std::string putName() const;

};

#endif // PLAYER_H
