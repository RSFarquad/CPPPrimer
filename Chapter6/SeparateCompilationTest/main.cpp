#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <exception>
#include "SCTHeader.h"
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
using std::getline;

int main(){
    int factInput = 0;
    cout << "Input a number: \n";
    cin >> factInput;
    cout << "Factorial is: " << factorial(factInput) << ".\n";
    
    return 0;
 }