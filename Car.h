#ifndef CAR_H

#define CAR_H

// Include the required header files.

#include<iostream>

using namespace std;

// Define the class.

class Car{

protected:

int price;

int emissions;

int vinNumber;

public:

// Declare the constructor.

Car(int p);

//Define the pure virtual function.

virtual void drive(int kms) = 0;

// Declare the member functions.

void set_price(int p);

int get_price();

int get_vinNumber();

};

#endif

