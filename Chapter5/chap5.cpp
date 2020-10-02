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
using std::getline;

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
/*
int main(){
    //asking the user for grade input
    vector<string> vStr = {"F", "D", "C", "B", "A"};
    int numGrade = 0;
    cout << "Enter the numeric grade here: \n";
    cin >> numGrade;

    //not accounting for + and - grades as I hate conditional operators.
    string letGrade = (numGrade >= 90) ? vStr[4] :
            (numGrade >= 80 && numGrade < 90) ? vStr[3] :
            (numGrade >= 70 && numGrade < 80) ? vStr[2] :
            (numGrade >= 60 && numGrade < 70) ? vStr[1] : vStr[0];
    
    cout << "The letter grade is " << letGrade << ". \n";

    return 0;
}
*/
/* // I did the wrong thing here, code is incomplete. Switching to switch statements.
int main(){
    string hold;
    unsigned int aCnt = 0;
    unsigned int eCnt = 0;
    unsigned int iCnt = 0;
    unsigned int oCnt = 0;
    unsigned int uCnt = 0;
    unsigned int wsCnt = 0;
    do{
        (cin >> hold);
        for (auto x : hold){
            if (x == 'a' || x == 'A'){
                ++aCnt;
            }
            else if (x == 'e' || x == 'E'){
                ++eCnt;
            }
            else if (x == 'i' || x == 'I'){
                ++iCnt;
            }
            else if (x == 'o' || x == 'O'){
                ++oCnt;
            }
            else if (x == 'u' || x == 'U'){
                ++uCnt;
            }
            else if (x == ' '){
                ++wsCnt;
            }
            else{
                ;
            }
        }
    } while (hold != "0");

    cout << "The number of times 'a' appears is " << aCnt << ". \n";
    cout << "The number of times 'e' appears is " << eCnt << ". \n";
    cout << "The number of times 'i' appears is " << iCnt << ". \n";
    cout << "The number of times 'o' appears is " << oCnt << ". \n";
    cout << "The number of times 'u' appears is " << uCnt << ". \n";
    cout << "There are " << wsCnt << " white spaces. \n";

    return 0;
}
*/
/*
int main(){
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, wsCnt = 0;
    unsigned int doubCnt = 0, testCnt = 0;
    //Given that we're grabbing strings here, it doesn't look like it
    //functionally registers new lines. Possible need character input for that.
    //EDIT: Switched to character input goint into 5.12.
    char hold, holdLast = '\0';
    do{
        cin.get(hold);
            switch(hold){
                case 'a': case 'A':{
                    ++aCnt;
                    break;
                }
                case 'e': case 'E':{
                    ++eCnt;
                    break;
                }
                case 'i': case 'I':{
                    ++iCnt;
                    if (holdLast == 'f'){
                        ++doubCnt;
                        ++iCnt;
                    }
                    break;
                }
                case 'o': case 'O':{
                    ++oCnt;
                    break;
                }
                case 'u': case 'U':{
                    ++uCnt;
                    break;
                }
                case ' ': case '\n': case '\t':{
                    ++wsCnt;
                    break;
                }
                case 'f': case 'l':{
                    if (holdLast == 'f'){
                        ++doubCnt;
                    }
                    break;
                }
                default:{
                    break;
                }
        }
        holdLast = hold;
    }while (hold != '0');

    cout << "The number of times 'a' appears is " << aCnt << ". \n";
    cout << "The number of times 'e' appears is " << eCnt << ". \n";
    cout << "The number of times 'i' appears is " << iCnt << ". \n";
    cout << "The number of times 'o' appears is " << oCnt << ". \n";
    cout << "The number of times 'u' appears is " << uCnt << ". \n";
    
    cout << "There are " << wsCnt << " white spaces. \n";

    cout << "The number of 'ff', 'fl', fi' combos are " << doubCnt << ". \n";

    return 0;
}
*/

