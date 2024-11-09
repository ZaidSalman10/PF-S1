#include<iostream>
#include<cmath>
using namespace std;
float eff(string player, string enemy)
{
    if (player == "fire")
    {
        if(enemy == "fire" || enemy == "water"){return 0.5;}
        if(enemy == "grass"){return 2;}
        if(enemy == "electric"){return 1;}
    }
    if (player == "water")
    {
        if(enemy == "water" || enemy == "fire"){return 0.5;}
        if(enemy == "electric"){return 1;}
        if(enemy == "grass"){return 1;}
    }
    if (player == "grass")
    {
        if(enemy == "grass" || enemy == "fire"){return 0.5;}
        if(enemy == "water"){return 2;}
        if(enemy == "electric"){return 1;}
    }
    if (player == "electric")
    {
        if(enemy == "electric" || enemy == "water"){return 0.5;}
        if(enemy == "grass"){return 1;}
        if(enemy == "fire"){return 1;}
    }
}

float dmg(float effect, float attack, float defense)
{
    float damage = 50 * (attack / defense) * effect;
    return damage;
}

main()
{
    string player, enemy;
    float attack, defense;
    cout << "Choose your elemental: ";
    cin >> player;
    cout << "Enter enemy elemental: ";
    cin >> enemy;
    cout << "Enter attack power of your elemental: ";
    cin >> attack;
    cout << "Enter defense power of enemy elemental: ";
    cin >> defense;
    float effect = eff(player, enemy);
    float damage = dmg(effect, attack, defense);
    cout << "The effective damage is: " <<damage << endl;
    float n = defense / damage;
    cout << "Shots to kill enemy: " << ceil(n);
}
