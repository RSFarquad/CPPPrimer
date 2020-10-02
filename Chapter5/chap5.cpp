#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

/* //p.173
int main(){
	int sum, val = 0;
	while (val <= 10)
	sum += val, ++val;

	cout << sum << endl;
	return 0;
}
*/
/* //p.174
int main(){
    vector<string> s = {10, "hi"};
    vector<string>::iterator iter = s.begin();
    while (iter != s.end()){
        ;
    }

    //while (bool status == find(word))
    if (!status){//status must be defined out of the while function
        ;
    }

    return 0;
}
*/
/* //p.177
int main(){
    //asking the user for grade input
    vector<string> vStr = {"F", "D", "C", "B", "A"};
    int numGrade = 0;
    cout << "Enter the numeric grade here: \n";
    cin >> numGrade;

    //turning the numeric input into string grade output
    string letterGrade;
    if (numGrade < 60 && numGrade != 100){
        cout << "Letter grade is " << vStr[0] << ".\n";
    }
    else if (numGrade >= 100){
        cout << "Letter grade is " << vStr[4] << "++. \n";
    }
    else{
        letterGrade = (vStr[(numGrade - 50) / 10]);
        if ((numGrade - 50) % 10 >= 7){
            letterGrade += '+';
            cout << "Letter grade is " << letterGrade << ". \n";
        }
        else if ((numGrade - 50) % 10 <= 3){
            letterGrade += '-';
            cout << "Letter grade is " << letterGrade << ". \n";
        }
        else{
            cout << "Letter grade is " << letterGrade << ". \n";
        }
    }
    return 0;
}
*/

