#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <exception>
#include "Chapter6.h"
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
using std::getline;

//factorial function
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
//absolute value function
signed int absVal(signed int i){
    if (i >= 0){
        return i;
    }
    else if (i < 0){
        signed int dif = 0 - i;
        return dif;
    }
}
//static count function, counting the amount of times itself is called
int cnt(){
    static int ctr = 0;
    return ctr++;
}


/* //p.204 Did both 6.3 and 6.4 by accident.
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
 int main(){
    int factInput = 0;
    cout << "Input a number: \n";
    cin >> factInput;
    cout << "Factorial is: " << factorial(factInput) << ".\n";
    
    return 0;
 }
 */
/* //p.204
signed int absVal(signed int i){
    if (i >= 0){
        return i;
    }
    else if (i < 0){
        signed int dif = 0 - i;
        return dif;
    }
}
int main(){
    cout << "Calculate absolute value by inputting a number: \n";
    signed int calc = 0;
    cin >> calc;
    cout << "Absolute value is: " << absVal(calc) << ".\n";
    return 0;
}
*/
/* //p.205
int cnt(){
    static int ctr = 0;
    return ctr++;
}
int main(){
    for (int i = 0; i != 10; ++i){
        cout << cnt() << endl;
    }
    return 0;
}
*/

