#include<iostream>
#include "animal.h"

int Animal :: numberOfAnimals = 0; // static variable

Animal :: Animal()
{
    numberOfAnimals++;
    name = "Unknown";        //attributes/members
    species = "Unknown";
    type = "Unknown";
    height = 0;
    weight = 0;
}

Animal :: Animal(string a_name, string a_type,string a_species)
{
    numberOfAnimals++;
    name = a_name;
    species = a_species;
    type = a_type;
}
string Animal:: getNameTypeSpecies()
{
    return name+" "+type+" "+species;
}

double Animal :: getHeight()
{
    return height;
}

double Animal :: getWeight()
{
    return weight;
}

void Animal ::setName(string s_name)
{
    name = s_name;
    return;
}
void Animal ::setHeight(double s_name)
{
    height = s_name;
    return;
}
void Animal ::setWeight(double s_name)
{
    weight = s_name;
    return;
}


Animal :: ~Animal()
{
    --numberOfAnimals; // will not work for automatic objects
    cout << "animal dest" << endl;
}

