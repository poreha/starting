
/*
    Add more info
    and read comments
*/
#include <iostream>
#include <istream>
#include "encounter.h"
#include "player.h"

using namespace std;


int main()
{
char answ;
string name;
player Plmain;// do I need player class?

cout << "Present yourself!" << endl;
cin >> name;
Plmain.getName(name);//

cout << "You are going to regret entering my Lair, " << name << "!" << endl;
cout << "	~C++ prepares for a Fight!~\nEncounter?{Y/N}: ";
cin >> answ;
if(answ == 'Y' || answ == 'y')
    {
        int mark = FAIL;
        Stats * Hero = new Stats;
        int dp = 20, matc = 5;
        Hero->atc = 5;
        Hero->hp = 20;
        Hero->block = 0;

        cout << "Encounter" << endl;
        Encounter Guardian("Guardian", dp, matc, Hero, &mark);
        if(mark == FAIL){
            cout << ">END OF JOURNEY<" << endl;
            exit(0);}
        else lvlup(Hero);
        Encounter Guardian1("Head Guardian",dp+3,matc+1,Hero, &mark);
        }
        //eof if

else
    {
        cout << ">END OF JOURNEY<" << endl;
        }



return 0;

}


