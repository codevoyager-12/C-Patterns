// * * * * * *
//   * * * * *
//     * * * *
//       * * *
//         * *
//           *

#include<iostream>
using namespace std;
int main() {
	cout << "Enter a number ";
	int num;
	cin >> num;
	cout << endl;
	for (int i = 0;i < num;i++) {
		for (int j = 0;j < num;j++) {
			if (j < i) { cout << "  ";  }//two spaces 
			else { cout << "* "; }
		}
		cout << endl;
	}
}