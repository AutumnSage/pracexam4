// Include the required header files.

#include "Tesla.h"

// Define the static member variable.

int Tesla::nextvinNumber = 1000001;

// Define the constructor.

hunter::hunter(string n ,int v):animal(n,v){

kills = 0;

nextID++;

animalID=nextID;

}

// Define the member functions.

int hunter::get_kill(){

return kills;

}

void hunter::set_kill(int k){

kills = k;

}

string hunter::get_name(){

return "Hunter "+ name;

}