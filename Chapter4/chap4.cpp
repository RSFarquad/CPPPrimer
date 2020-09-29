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
/* //p.144
int main() {
	const char* cp = "Hello World";
	cout << cp << " " << cp[0] << " " << cp[1] << " " << *cp << endl;
	return 0;
}
*/
/*  //p.144
int main() {
	int hold = 0;
	vector<int> iVec;
	while (cin >> hold && hold !=42) {
		iVec.push_back(hold);
	}
	return 0;
}
*/
/* //p.144
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	if (a > b && b > c && c > d){
		cout << "The conditions have been met!\n";
	}
	else{
		cout << "The conditions have not been met.\n";
	}
	return 0;
}*/
/*
int main() {
	int a = 1;
	int b = 2;
	if (a == b){
		cout << "What is up." << endl;
	}
	else{
		cout << "What is not up." << endl;
	}
	return 0;
}*/
/* //p.147
int main(){
	int i; 
	double d; 
//	d = i = 3.5; //d = 3, i = 3
//	i = d = 3.5; //d = 3.5, i = 3
	cout << d << " " << i << " \n";
	return 0;
}
*/
/* //p.150
int main() {
	vector<string> vString = {"hello", "how are you"};
	vector<string>::iterator iter = vString.begin();

	*iter++; //legal
	(*iter)++; //illegal, trying to increment the dereferenced iterator
	*iter.empty(); //illegal, trying to call the empty function of iterator
	iter->empty(); //legal
	++*iter; //illegal, incorrect syntax (should be *++iter)
	iter++->empty(); //legal
	return 0;
}
*/
/* //p.152
int main() {
	vector<int> vInt = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (auto iter : vInt){
		if (iter % 2 != 0){
			iter = iter * 2;
			cout << iter << " ";
		}
	}
	cout << "\n";
	for (auto iter : vInt){
		((iter % 2 != 0) ? (iter * 2) : 0) << " ";
	}
	return 0;
}
*/
/* //p.152
int main() {
	int grade = 0;
	while (cin >> grade){
		string finalgrade = (grade > 90) ? "high pass" : 
		(grade <= 90 && grade > 75) ? "pass" : 
		(grade <= 75 && grade >= 60) ? "low pass" : "fail";
		cout << finalgrade << "\n";
	}
	while (cin >> grade){
		if (grade > 90){
			cout << "high pass\n";
		}
		if (grade <= 90 && grade > 75){
			cout << "pass\n";
		}
		if (grade <= 75 && grade >= 60){
			cout << "low pass\n";
		}
		if (grade < 60){
			cout << "fail\n";
		}
	}
	return 0;
}
*/
/* //p.152
int main(){
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout << pl << endl;
	return 0;
}
*/
/* //p.157
int main(){
	int a;
	char b;
	string c;
	bool d;
	float e;
	double f;
	char16_t g;
	char32_t h;
	int& i = a;
	int* j = &a;

	cout << sizeof a << "\n";
	cout << sizeof b << "\n";
	cout << sizeof c << "\n";
	cout << sizeof d << "\n";
	cout << sizeof e << "\n";
	cout << sizeof f << "\n";
	cout << sizeof g << "\n";
	cout << sizeof h << "\n";
	cout << sizeof i << "\n";
	cout << sizeof j << "\n";
	return 0;
}
*/
/* //p.157
int main(){
	int x[10]; int *p = x;
	cout << sizeof(x)/sizeof(*x) << endl; // 40 / 4 = 10
	cout << sizeof(p)/sizeof(*p) << endl; // 8 / 4 = 2 

	return 0;
}
*/
/* //p.157
int main(){
	(sizeof x) + y;
	sizeof (p->mem[i]);
	(sizeof a) < b;
	sizeof f();
}
*/
/* //p.157 idk maybe
int main(){
	vector<int> ivec(10);
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0;
					ix != ivec.size(); ++ix, --cnt){
						ivec[ix] = cnt;
					}
	for (auto x : ivec){
		cout << x << " ";
	}
	cout << "\nChanging increment location.\n";
	vector<int> ivec2(10);
	vector<int>::size_type cnt2 = ivec2.size();
	for (vector<int>::size_type ix = 0;
					ix != ivec2.size(); ix++, cnt2--){
						ivec2[ix] = cnt2;
					}
	for (auto x : ivec2){
		cout << x << " ";
	}
	return 0;
}
*/
/* //p. 164
int main(){
	int i = 10;
	double d = 2.5;

	i *= static_cast<int>(d);
	cout << i << endl;
	return 0;
}
*/
/* //p.164
int main(){
	int i;
	double d;
	const string *ps;
	char *pc;
	void *pv;

	pv = const_cast<string*>(ps);
	pv = (void*)ps;

	i = static_cast<int>(*pc);
	i = int(*pc);

	pv = &d;

	pc = static_cast<char*>(pv);
	pc = (char*) pv;

	return 0;
}
*/

int main(){
	int sum, val = 0;
	while (val <= 10)
	sum += val, ++val;

	cout << sum << endl;
	return 0;
}