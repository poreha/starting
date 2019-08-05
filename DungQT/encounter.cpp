#include "encounter.h"
#include <iostream>

# define PASS 0
# define FAIL 1

Encounter::Encounter(std::string monster, int dp, int matc, struct Stats * EHero, int * mark)
{
            Edp = dp;
            Ematc = matc;
            Ehp = EHero->hp;
            Eatc = EHero->atc;
            Eblock = EHero->block;
            std::cout << "You encounter the " << monster << std::endl;
            if(Fight(*EHero) == 0){
                std::cout << "You Won." << std::endl;
                *mark = PASS;
            } else{
                std::cout << "You Lost." << std::endl;
                *mark = FAIL;
            }
}

int Encounter::Fight(struct Stats EHero)
{
    std::string enc;
    int act = 0;
    while( Ehp > 0 )
            {
                std::cout << ">Attack >Guard >Run\n" << std::endl;

                std::cin >> enc;

                //Action ids

                if (enc == "Attack") { act = 1; }
                else if (enc == "Guard") { act = 2; }
                else if (enc == "Run") { act = 3; }
                else { act = 0; }

        if( action(act, &EHero) ){
            std::cout << "	~C++ hits You~" << std::endl;
            Ehp = Ehp + Eblock - Ematc;
            if(Ehp <= 0)
                break;
            else
                std::cout << "C++: " << Edp << "	You: " << Ehp << std::endl;
            }

    else {
        //add stun if block >= matc
           return 0;
            }
        }
    return 1;
}

int	Encounter::action(int act, struct Stats * EHero)
    {
        switch(act)
            {
                case 1 :
                    {
                        Edp -= Eatc;
                        if(Edp <= 0)
                           { return 0; }

                        if(Eblock > 2)
                            { Eblock -= 2; }
                        else { Eblock = EHero->block; }
                        std::cout << "Deal " << Eatc << " damage, but loose Defence\n" << std::endl;
                        return 2;
                        }
                case 2 :
                    {
                        Eatc += 3;
                        Eblock += 2;
                        std::cout << "Gain " << Eblock << " Defence points\n" << std::endl;
                        return 2;
                        }
                case 3 :
                    {	std::cout << "~~You run away~~\n" << std::endl;
                        //break;
                        exit(0);
                        //how do i come back to the first encounter?
                        }
                default :
                    {	std::cout << "Become vulnerable" << std::endl;
                        Eblock -= 2;
                        return  2;
                        }
                }

                //eof switch
}


void lvlup(struct Stats * EHero) {
            int upgr = 0;
            while(1){
            std::cout << "Choose stat to upgrade:\n" << "[1] Defence		[2] Attack		[3] Health" << std::endl;
            std::cin >> upgr;
            switch( upgr )
                {
                    case 1 : {EHero->block += 1; std::cout << EHero->block << std::endl; break;}
                    case 2 : {EHero->atc += 2; std::cout << EHero->atc << std::endl; break;}
                    case 3 : {EHero->hp += 2; std::cout << EHero->hp << std::endl; break;}
                    default : {std::cout << "You can't even manage that!\n"; continue;}
                    }
                    break;
            }
        }
