// Include the required header files.

#include "Car.h"

// Define the constructor.

Car::Car(int p){

price=p;

vinNumber++;

emissions=e;

}

// Define the member functions.

void Car:: set_price(int p){

price=p;

}

void Car:: drive(int e){

emissions = e;

}

int Car::get_price(){

return price;

}

int Car:: get_vinNumber(){

return vinNumber;

}
