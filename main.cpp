#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
using namespace std;
int inventory[20], hp=100,dmgmelee[20]={4,3,3,5},str=0,dex=0,ine=0,cha=0,gate=15;
int stats(int &str,int &ine,int &cha,int &dex)
{
    cout<<"1.Strength      "<<str<<"/"<<"80"<<'\n';
    cout<<"2.Dexterity     "<<dex<<"/"<<"80"<<'\n';
    cout<<"3.Intelligence  "<<ine<<"/"<<"80"<<'\n';
    cout<<"4.Charisma      "<<cha<<"/"<<"80"<<'\n';
}
int random()
{
srand(time(NULL));
return (rand()%100)+1;
}
int random2()
{
srand(time(NULL));
return (rand()%100)+1;
}
int encounter1(int atr,int )
{
    int ehp=80;
    gate--;
    cout<<'\n'<<"You are attacked by an enemy fighter, what do you do ?";
    while(hp>0 && ehp>0)
    cout<<'\n'<<"Your health: "<<hp<"          Enemy health: "<<ehp;
    cout<<'\n'<<"1.Attack";
    cin>>atr;
    if(atr==1){cout<<"1.Hard swing";
    cout<<"2.Fast swing";
     cin>>atr;
     if(atr==1){
        if(random()+str+dex/2>60){ehp=ehp-dmgmelee[inventory[1]]*(random()/5);
        cout>>"You hit the enemy directly";
        }
        else cout<<"You miss";
     }
     else if(atr==2)
     {
         if(random()+str/2+dex>60){ehp=ehp-dmgmelee[inventory[1]]*(random()/5);
        cout>>"You hit the enemy directly";
        }
        else cout<<"You miss";
     }
     if(ehp<=0){cout<<'\n'<<"You masterfully pierce the enemy, he soon falls down lifeless on the bloody ground";
      gate++;
      return 0;}
    }
    cout<<'\n'<<"The fighter rushes at you."
    if(random()+str/2+dex<60){
        cout<<'\n'<<"Your guard is broken and the enemy's blade cuts deep into you.";
        hp=hp-random()/2.3;
    }
    else cout<<'\n'<<"The enemy cannot break your guard and is pushed back";
    if(hp<=0){cout<<'\n'<<"As the enemy drives his weapon into your flesh, all turns to black and you fall down, lifeless.";
    return 0;
    }
}
int walls(int atr)
{
    cout<<'\n'<<"The walls are engulfed in chaos and there are already enemy ladders from on which warrior are climbing up the walls";
    if(random()=>0)encounter1(atr);
}
int courtyard(int atr)
{
    cout<<'\n'<<"The courtyard is a mess of soldiers running around to their positions, meanwhile on the other side of the walls fierce battle shouts can be heard.What do you do?";
    cout<<'\n'<<"1.To the walls, they must be defended!";
    cin>>atr;
    if(atr==1){
        walls();
    }
}
//Soldier start---------------------------------------------------------------------------------------------------
int start1(int atr,int godg)
{
   cout<<"You are sleeping in the barracks but are suddenly awoken by one of your fellow guardsmen.";
   cout<<'\n'<<"-You there! Wake up, the fort is under attack! Arm yourself and head to the courtyard."<<'\n';
   _getch();
   cout<<"You rush out of bed with a sudden adrenaline pump and head for the weapon racks, what weapon do you choose?";
   cout<<'\n'<<"1. A double sided battle axe"<<'\n'<<"2. A nimble arming sword"<<'\n';
   cin>>atr;
   if(atr==1)
   {
      inventory[1]=1;
      cout<<"The axe already makes you feel mightier and you wouldn't want to be on the receiving end of its edge";
      if(godg!=0)cout<<'\n'<<"You soon realize that most enchantments will however not work on this weapon, a small price to pay";
      str=str+5;
   }
   else if(atr==2)
        {
          inventory[1]=2;
          cout<<"The sword fits well in your hands and moves easily through the air";
          if(godg==1)cout<<'\n'<<"The edge of the blade is covered in mitelin, an enchantment would prove devastating to any struck enemies";
          dex=dex+5;
        }
    _getch();
    if(godg==1){
    cout<<'\n'<<"As a god-gifted Messidian you can choose between several pieces of equipment"<<'\n';
    cout<<"1.A battle-gauntlet, I shall wield lightning and smite my enemies!"<<'\n';
    cout<<"2.A mitelin chain guard, The Messidia shall protect me from harm!"<<'\n';
    cout<<"3.I need no weapons of the gods"<<'\n';
    cin>>atr;
    if(atr==1){inventory[3]=1;
        dex=dex-3;
        cout<<"The gauntlet barely fits your hand and weighs it down greatly, you're glad you didn't bolt one of these onto your arm like the others"<<'\n';
    }
    else if(atr==2){
        inventory[3]=2;
        dex=dex-3;
        cout<<"The metal chains hang all around your body and already are filled with power, any direct strike on them would send the attacker reeling"<<'\n';
    }
    }
    cout<<'\n'<<"-Finally, you're done! Get a move on!yells the guardsman";
}
//Mercenary start------------------------------------------------------------------------------------------------------
start2(int atr,int godg)
{
    cout<<'\n'<<"You are enjoying the night in the fort's inn when suddenly are disturbed by one of the guardsmen";
    cout<<'\n'<<"-The fort is under attack! It's time for you to earn your pay merc! To arms!";
    _getch();
    cout<<'\n'<<"You rise and pick up your ...";
    cout<<'\n'<<"1.Longsword from the table, it is time for battle!";
    if(godg==2)cout<<'\n'<<"2.Plasma hilt from the table, the unbelievers shall burn!";
    cin>>atr;
    if(atr==1){
            cout<<'\n'<<"Your greatsword feels natural as always";
            inventory[1]=3;
            str=str+5;
}   if(atr==2 && godg==2)
{
    cout<<'\n'<<"The hilt becomes one with your arm, Sol will end all that oppose you";
    inventory[1]=4;
    str=str+5;
}
    if(godg!=0)cout<<'\n'<<"You then affix your ...";
    if(godg==1)
    {
        cout<<'\n'<<"1.Battle-gauntlet, I shall smite the enemy with lightning!";
        cout<<'\n'<<"2.Mitelin chain guard, none shall pass The Messidia's protection.";
        cout<<'\n'<<"3.I need no weapons of the gods";
        cin>>atr;
        if(atr==1){inventory[3]=1;
        dex=dex-3;
        cout<<'\n'<<"The gauntlet barely fits your hand and weighs it down greatly, you're glad you didn't bolt one of these onto your arm like the others"<<'\n';
    }
    else if(atr==2){
        inventory[3]=2;
        dex=dex-3;
        cout<<'\n'<<"The metal chains hang all around your body and already are filled with power, any direct strike on them would send the attacker reeling"<<'\n';
    }
    }
    else if(godg==2)
    {
        cout<<'\n'<<"1.Sacred flamethrower, none can escape the fires.";
        cout<<'\n'<<"2.I need no weapons of the gods";
        cin>>atr;
        if(atr==1)
        {
            cout<<'\n'<<"The small pipe fits perfectly into the small hole in your gauntlet and fires off small sparks when concentrated upon";
            inventory[3]=3;
            dex=dex-3;
        }
    }
    cout<<'\n'<<"Ready for battle, you head towards the courtyard";


}
int main()
{
    cout<<"Welcome to Siege of Pemiten version 0.1, begin by making your character"<<endl;
    cout<<"-----------PRESS ANY KEY TO CONTINUE-----------"<<endl;
    _getch();
    int upp=20,upe;
    cout<<'\n';
    cout<<"1.Strength      "<<str<<"/"<<"80"<<'\n';
    cout<<"2.Dexterity     "<<dex<<"/"<<"80"<<'\n';
    cout<<"3.Intelligence  "<<ine<<"/"<<"80"<<'\n';
    cout<<"4.Charisma      "<<cha<<"/"<<"80"<<'\n';
    cout<<"To add points to a certain attribute type the attributes"<<'\n'<<"number followed by the amount of points"<<'\n';
    int atr;
    while(upp>0)
    {
       cout<<"You have "<<upp<<" points left"<<'\n';
       cin>>atr>>upe;
       if(upe<=upp)
       {
           if(atr==1)str=str+upe;
           else if(atr==2)dex=dex+upe;
                else if(atr==3)ine=ine+upe;
                     else if(atr==4)cha=cha+upe;
       }
       upp=upp-upe;
       atr=0;upe=0;
       stats(str,ine,cha,dex);
    }
    string prof;
    cout<<'\n'<<"What occupation does your character have?"<<'\n'<<"1.Soldier at the fort"
    <<'\n'<<"2.A traveling merchant"<<'\n'<<"3.A chancellor"<<'\n'<<"4.A mercenary"<<'\n';
    cin>>atr;
    if(atr==1)
    {
            str=str+10;
            ine=ine-4;
            dex=dex+8;
            cha=cha-4;
            prof="Soldier";
            cout<<"You are a new conscript in the army, pulled from the nearby villages by the       chancellor's men a couple of months ago ago when you came of age."
            <<"You might not be the best spoken or the most intelligent man out there, but your agility is  good and your sword arm even better";
    }
    else if(atr==2)
    {
            str=str+2;
            ine=ine+5;
            dex=dex-2;
            cha=cha+5;
            prof="Merchant";
            cout<<"You are a merchant that stopped in town for the day, you're great at speaking, leading people and have a formal education."
            <<"Your days on the road have also made you able to hold a sword the proper way";
    }
         else if(atr==3)
         {
            str=str-6;
            ine=ine+10;
            dex=dex-4;
            cha=cha+10;
            prof="Chancellor";
            cout<<"You are this fort's administrator and leader, put in this position by the Cizan of the Salt Market himself due to your"
            <<"towering intellect and  incredible ability of motivating and leading people. The days sealed away in the walls of the castle"
            <<"have however not been kind to you, your body is frail and your reflexes slow";
         }
              else if(atr==4)
              {
                  str=str+14;
                  dex=dex+8;
                  cha=cha-12;
                  prof="Mercenary";
                  cout<<"You are a grizzled mercenary that pulled together through years of warfare under command of many different commanders"
                  <<", being an outsider however makes you untrustworthy in the eyes of the garrison";
              }
    cout<<'\n';
        int godg=0;
    cout<<"Is your character god-gifted?"<<'\n'<<"1.Yes"<<'\n'<<"2.No"<<'\n'<<"3.What is being god-gifted?"<<'\n';
    cin>>atr;
    if(atr==1){godg=1;
    if(prof!="Mercenary")cout<<"Your psionic powers were a surprise to you and your family, but luckily the Empire was not longer allowed to take away psionic enabled individuals, so you were free to live out your life";
    }
    else if(atr==3){
        cout<<'\n'<<"Being god-gifted is the name given to the mutation created by radiation that unlocks a person's psionic potential, only a small fraction of the population has this ability";
        cout<<'\n'<<"Is your character god-gifted?"<<'\n'<<"1.Yes"<<'\n'<<"2.No"<<'\n';
        cin>>atr;
        if(atr=1)godg=1;
    }
    if(godg==1 && prof=="Mercenary")
    {
        cout<<'\n'<<"You have traveled the long world and discovered many peoples, but ever since you found your psionic powers you were:"<<'\n'<<"1.A Messidian"<<'\n'<<"2.A Fire-Warrior"<<'\n';
        cin>>atr;
        if(atr==1)cout<<"Since birth, you lived under and fought for the Messidia, almighty god that brought the humans back to the land, you wield your lightning blade in his name and slay for his glory"<<'\n';
            else if(atr==2){cout<<"The fire burned high in your spirit, more than in your other outcast brothers, ever since discovering your psionic powers you wield your indomitable blazing blade against the unbelievers of Sol, the traitor god and bringer of light"<<'\n';
            godg=2;
            }
    }
    cout<<'\n'<<"Finished character creation, press any key to continue";
     _getch();
    cout<<'\n'<<"This is your character"<<'\n';
    stats(str,ine,cha,dex);
    cout<<'\n'<<"Profession: "<<prof<<'\n'<<"Is god-gifted: ";
    if(godg==0)cout<<"No";
    else if(godg==1)cout<<"Yes, Messidian specialization";
         else if(godg==2)cout<<"Yes, Fire-warrior specialization";
    cout<<'\n'<<"Press any key to begin the game"<<'\n';
     _getch();
    if(prof=="Soldier")start1(atr,str,dex,godg);
    else if(prof=="Mercenary")start2(atr,str,dex,godg);
    courtyard(atr,)

    return 0;
}
