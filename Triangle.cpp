//           *
//          * *
//         * * *
//        * * * *
//       * * * * *
//      * * * * * *
//     * * * * * * *
//    * * * * * * * *
//   * * * * * * * * *
//  * * * * * * * * * * 
#include<iostream>
using namespace std;
int main() {
	cout << "Enter the number  " << endl;
	int num;
	cin >> num;
	for (int i = 0;i < num;i++) {
		for (int spaces = 0;spaces < num - i;spaces++) cout << " ";
		for (int j = 0;j < i + 1;j++) cout << "* ";
		cout << endl;
	}
}