// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
#include<iostream>
using namespace std;
int main() {
	cout << "Enter the number  " << endl;
	int num;
	cin >> num;
	for (int i = num;i > 0;i--) {
		for (int k = 0;k < num - i;k++) cout << " ";
		for (int j = 0;j < i;j++) cout << "* ";
		cout << endl;
	}
}