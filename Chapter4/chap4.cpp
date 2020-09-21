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

/*
//p.136
int main() {
	int n1 = 5 + 10 * 20 / 2; //105
	cout << n1 << "\n";
	return 0;
	
	// (* (vec.begin()))
	// ((* (vec.begin())) + 1)

}
*/
/* //p.141
int main() {
	int n = ((((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)); //91
	int n2 = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << n << "\n";
	cout << n2 << "\n";
	return 0;
}
*/
/* // p.141
int main() {
	int n1 = -30 * 3 + 21 / 5; //-86
	int n2 = -30 + 3 * 21 / 5; //-18
	int n3 = 30 / 3 * 21 % 5; //0
	int n4 = -30 / 3 * 21 % 4; //2 (actually -2, revised notes taken. When involving % operator, negative value is
							   // determined by the value of the numberator vs the denominator.)

	cout << n1 << "\n";
	cout << n2 << "\n";
	cout << n3 << "\n";
	cout << n4 << "\n";

	return 0;
}
*/
/* //p.141
int main() {
	int n = 0;
	cout << "Enter a number: \n";
	cin >> n;
	if (n % 2 == 0 && n != 0) {
		cout << n << " is an even number.";
	}
	if (n % 2 != 0 && n != 0) {
		cout << n << " is an odd number.";
	}
	if (n == 0) {
		cout << "Your input was 0.";
	}
	return 0;
}
*/
/*
int main() {
	const char* cp = "Hello World";
	cout << cp << " " << cp[0] << " " << cp[1] << " " << *cp << endl;
	return 0;
}
*/

int main() {
	int hold = 0;
	vector<int> iVec;
	while (cin >> hold) {
		
	}
	return 0;
}