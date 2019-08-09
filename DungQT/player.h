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
    player();
    void getName(std::string = "");
    std::string putName() const;

};

#endif // PLAYER_H
