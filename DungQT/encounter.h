#ifndef ENCOUNTER_H
#define ENCOUNTER_H

#include <string>

# define PASS 0
# define FAIL 1


struct Stats
{
    int hp;
    int atc;
    int block;
    int mana;
};

class Encounter
{
    private:
        int Edp, Ematc, Ehp, Eatc, Eblock;
    public:
        Encounter(std::string monster, int dp, int matc, struct Stats * EHero, int * mark);

            //include Destructor and insert "You Win" screen with continue? button
    protected:
        int action(int act, struct Stats * EHero);
        int Fight(struct Stats EHero);



    };

extern void lvlup(struct Stats * EHero);

#endif // ENCOUNTER_H
