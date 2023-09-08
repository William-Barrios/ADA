//
//  main.cpp
//  CalculatorPunteros
//
//  Created by William Alexis Barrios Concha on 31/08/23.
//

#include <iostream>
using namespace std;


float Addition(float a, float b){
    return a+b;
}
float Subtraction(float a, float b){
    return a-b;
}
float Multiplication(float a, float b){
    return a*b;
}
float Division(float a, float b){
    return a/b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    // Code B
    // User type to simplify the declaration
    typedef float (*lpfnOperation)(float, float);
    // CVector of pointer to functions
    lpfnOperation vpf[4] = {&::Addition,       &::Subtraction,
                            &::Multiplication, &::Division};
    float a, b, c; int opt;
    // enter the operands
    cin >> a >> b;
    // enter the operation 0-Addition, 1-Subtraction, 3-Multiplication, 4-Division
    cin >> opt;
    // The next line replaces the switch and replaces the whole switch
    c = (*vpf[opt])(a, b);
    cout<<c;
}
