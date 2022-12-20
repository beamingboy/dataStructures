#include <iostream>
#include "animal.h"

int main()
{
    cout << "\n**Simple object \n"<< endl;
    
    // ------defining the  simple object
    Animal panda("panda1","red","herbi");   //for panda we are using different constructor
    
    Animal lion;
    Animal tiger;
    // "." is used to ascess the methods and members of class
    //Can't ascess the private members directly, hence using public getter
    int lion_height = lion.getHeight();
    cout << "Lion's Height : " << lion_height << endl;
    cout << panda.getNameTypeSpecies()<< endl;
    
    cout << "\n\n**object array \n-----------\n"<< endl;
    
    
    
    //------defining the object array
    Animal pandas[3];               // it works as a simple array
    cout << "Panda1 array name : " << pandas[1].getNameTypeSpecies()<< endl;

    cout << "\n\n **object array with constructor -----------\n"<< endl;

    //delete[] pandas;



    // -----defining the the object array with constructors
    Animal lions[] = {
        Animal("lion1", "species1", "type1"),
        Animal("lion2", "species2", "type2"),
        Animal("lion3", "species3", "type3"),
        Animal("lion4", "species4", "type4"),
    };
    
    

    // displaying the attributes
    cout << "Lion1 name : " << lions[0].getNameTypeSpecies()<< endl;
    cout << "Lion2 name : " << lions[1].getNameTypeSpecies()<< endl;
    cout << "Lion3 name : " << lions[2].getNameTypeSpecies()<< endl;
    
    
    /////////////////////////////////
    cout << "\n\n**pointer object \n"<< endl;
    
    /*
     defining the pointer to the object
    -- the pointer object is used to ascess them further in program because destructor
    destroys the object each time at the end but be have to use delete keyword to destroy the object manullay
     */
    Animal *deer, *horse;
    
    // new is used to allocate the memory and we can use constructor simintaunasly
    horse = new Animal();
    deer = new Animal("happy","mamal","animal");

    // "->" is used to ascess the members and the bheaviours
    cout <<"deer" <<deer->getNameTypeSpecies()<< endl;
    cout <<"horse"<< horse->getNameTypeSpecies()<< endl;
    
    
    //--- defing the pointer array objects
    
    Animal *horses[3];
   
    cout << "\n\n**pointer object \n"<< endl;
    for (int i =0; i < 3; i++) {
        horses[i] = new Animal;
            }
    
    cout << horses[2]->getNameTypeSpecies()<< endl;

    
    
    delete horse;
    delete deer;
    for (int i =0; i < 3; i++) {

		delete horses[i];
	}

    int counter = Animal :: numberOfAnimals;
    cout <<counter<< endl;
    
    
}