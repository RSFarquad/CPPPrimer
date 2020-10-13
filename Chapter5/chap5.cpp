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
/* //p.184 Couldn't figure this out, giving up on coding forevor now. Wish you all the best.
int main(){
    string hold;
    vector<string> vString;
    do{
        cin >> hold;
        vString.push_back(hold);
    }while (hold != "0");

    auto start = vString.begin();
    auto end = vString.end();
    unsigned inc = 0;
    unsigned rTotal = 0;
    while ((start + 1) < end){
        if (vString[inc] == vString[inc + 1]){
            ++rTotal, ++inc, ++start;
        }
        else{
            ++inc, ++start;
        }
    }
    */
/* //p.187
   int main(){
       vector<string> vStr;
       string hold;
       //putting values in the string vector while input isn't 0.
       cout << "Input string values. Enter 0 to end input.\n";
       do{
           cin >> hold;
           vStr.push_back(hold);
       }while (hold != "0");
        //printing all values in the vector with a while statement
       auto startStr = vStr.begin();
       auto endStr = vStr.end();
       unsigned incStr = 0;
       while (startStr != endStr){
           cout << vStr[incStr] << "\n";
           ++incStr, ++startStr;
       }
        //printing all values in the vector with a for statement
       for (auto x : vStr){
           cout << x << "\n";
       }
        //new vector so that we can use while and for statements to access specific values in the vector
       vector<int> vInt = {1, 2, 3, 4, 5};
       auto startInt = vInt.begin();
       auto endInt = vInt.end();
        //while statement uesed to access the number 3
       while (startInt != endInt && *startInt != 3){
           ++startInt;
       }
       cout << *startInt << "\n";
        //for statement used to access the number 3
       for (auto x : vInt){
           if (x = 3){
               cout << x << "\n";
           }
           else{
               ;
           }
       }
       return 0;
   }
*/
/* //p.187 I feel like this was a dumb solution, but I created a for loop that only exists to
    //capture the size of the initial vector, preventing any attempt for a type conversion
    //from size_type to int. Maybe it's not dumb and I'm just a coding god......
int main(){
    vector<int> vInt1 = {0, 1, 1, 2};
    vector<int> vInt2 = {0, 1, 1, 2, 3, 5, 8};
    cout << vInt1.size() << endl;
    cout << vInt2.size() << endl;

    //HERE IT IS, my dumb tally system.
    unsigned sizeTally = 0;
    for (auto x : vInt1){
        ++sizeTally;
    }
    unsigned matchTally = 0;
    for (unsigned x = 0; x != sizeTally; ++x){
        if (vInt1[x] == vInt2[x]){
            ++matchTally;
        }
    }
    
    if (matchTally == sizeTally && vInt1.size() < vInt2.size()){
        cout << "The first vector is a prefix for the second.\n";
    }
    else if (vInt1.size() == vInt2.size()){
        cout << "The two vectors are the same size, and as such, can't be prefixes.\n";
    }
    else {
        cout << "The two vectors are not prefixes of each other.\n";
    }

    return 0;
}
*/
/* //p.189 Kinda wonky cause it freaks out if you have any spaces in your input, but it works.
int main() {
    
    string confirm;
    do {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        if  (s1 < s2){
            cout << "The first string is less than the second.\n";
        }
        else if (s2 < s1){
            cout << "The second string is less than the first.\n";
        }
        else{
            cout << "Something went wrong.\n";
        }
        cout << "Would you like to go again? If not, type no. \n";
        cin >> confirm;
    }while (confirm != "no");

    return 0;
}
*/
/* //p.191 Super happy with how this turned out. Specifically, forcing the exit by setting
   //the hold variable to 0 during the else if statement.
int main() {
    string hold;
    string check;
    unsigned toggle = 0;

    do {
        cout << "You can exit this loop by typing 0. Enter your next input: \n";
        cin >> hold;
        if (hold != "0"){
            if (hold != check){
            ; //purposefully left null
        }
        else if (hold == check){
            hold = "0";
            ++toggle;
            break;
        }
        check = hold;
        }
    }while (hold != "0");
    if (toggle == 1){
        cout << "Words were repeated. Repeated word was: " << check << ".\n";
    }
    else if (toggle == 0){
        cout << "No words were repeated.\n";
    }
    else{
        cout << "Something went very wrong.\n";
    }
    return 0;
}
*/

