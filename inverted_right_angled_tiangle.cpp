// * * * * * * * *
// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;
int main() {
	cout << "Enter a number ";
	int num;
	cin >> num;
	cout << endl;
	for (int i = num;i > 0;i--) {
		for (int j = 0;j < i;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}