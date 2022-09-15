//정수 하나 입력
//소수이면 True, 아니면 False
 
#include<iostream>
using namespace std;
 
int sosu(int a) {
    for (int i = 2; i <= a / 2; i++) {
        if (a%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a;
    cin >> a;
 
    if (sosu(a) == 1) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}
