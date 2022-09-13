#include <iostream>
using namespace std;

int main() {
	// 사각형 그리기
	int n;
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cout << "*";
		}
		cout << endl;
	}
}
