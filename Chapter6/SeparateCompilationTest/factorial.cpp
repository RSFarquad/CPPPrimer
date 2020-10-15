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

int factorial(int i)
     {
         int factTotal = 1;
         
         if (i <= 0){
             return -1;
         }

         while (i > 1){
            factTotal *= i--;
         }
         return factTotal;
     }