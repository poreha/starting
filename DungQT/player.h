#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player
{
private:
    std::string mName;
public:
    player();
    void getName(std::string = "");
    std::string putName();

};

#endif // PLAYER_H
