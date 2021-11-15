// Overloading Using Different types of Parameters

// Program to compute absolute value
// Works for both int and float

#include <iostream>
using namespace std;

// function with float type parameter
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

int main() {
    
    // call function with int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // call function with float type parameter
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    return 0;
}

/*#include <iostream>
using namespace std;

// function with float type parameter
float sum(float a,float b){
    float s=a+b;
    return s;
}

// function with int type parameter
int sum(int a,int b){
    int s=a+b;
    return s;
}

int main() {
    
    // call function with int type parameter
    cout << "The sum of float numbers is= " << sum(5.3,7.5) << endl;

    // call function with float type parameter
    cout << "The sum of integer numbers is= " << sum(5,7) << endl;
    return 0;
}*/
