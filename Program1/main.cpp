//  Program1 working with a car class
//  Created by Minjing Liang on 8/27/20.
//  Copyright © 2020 Minjing Liang. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
class Car{           // declare a car class with member variables and functions
private:             // declare three private member variables
    int year;
    string make;
    int speed;
    
public:
    Car(int year, string make){    // the constructor
        this->year  = year;
        this->make  = make;
        this->speed = 0;
    }
    int getYear(){                // getter function to retrive year
        return year;
    }
    string getMaker(){            // getter function to retrive make
        return make;
    }
    int getSpeed(){              // getter function to retrive speed
        return speed;
    }
    int accelerate (){           // speed increasing function
       return (speed += 5);
    }
    int brake (){               // speed decreasing function
        return (speed -= 5);
    }
};
int main() {
    Car car(2020,"Lincoln");         // create an object
    for (int i = 0; i < 5; i++ ){    // for loop to call speed increasing function
        cout << "The speed is : " << car.accelerate() << endl;
    }
    for (int i = 0; i < 5; i++ ){    // for loop to call speed decreasing function
        cout << "The speed is : " << car.brake() << endl;
    }
    return 0;
}
