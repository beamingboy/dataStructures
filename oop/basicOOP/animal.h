#ifndef  ANIMAL_H   // Checks whether header is not declared.
#define  ANIMAL_H   // Will declare header once #ifndef generates true.

#include <string>
using namespace std;

class Animal
{
    private:
        string name;        //attributes/members
        string species;
        string type;
        double height;
        double weight;

    public:
        static int numberOfAnimals;
        int always;

    public:
        Animal(); //default constructor
        Animal(string a_name, string a_type,string a_species); //constructor
        string getNameTypeSpecies();   //behaviour/methods
        string getType();
        string getSpecies();

        double getHeight();
        double getWeight();
        void setName(string s_name);
        void setHeight(double s_name);
        void setWeight(double s_name);
        

        ~Animal();  //default destructor


};
#endif