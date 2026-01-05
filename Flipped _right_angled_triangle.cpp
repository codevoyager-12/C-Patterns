//               *
//             * *
//           * * *
//         * * * *
//       * * * * *
//     * * * * * *
//   * * * * * * *
#include<iostream>
using namespace std;
int main() {
	cout << "Enter a number ";
	int num;
	cin >> num;
	cout << endl;
	for (int i = 0 ;i < num;i++) {
		for (int j = num;j >= 0;j--) {
			if (j <= i) {
				cout << "* ";
			}
			else { cout << "  "; }
		}
		cout << endl;
	}
}