//메뉴 입력받기
//1일경우 삼각형 그리기 -> shape(int x); 오버로딩
//2일경우 사각형 그리기 -> shape(int x, int y); 오버로딩
//예외처리, 메뉴선택 범위 잘못될경우 "wrong menu"
//예외처리, size 에 음수 입력시 "incorrect size"
 
#include<iostream>
using namespace std;
 
void shape(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
     
}
void shape(int x, int y) {
    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
 
int main() {
    int menu;
    cin >> menu;
    if (menu == 1) {
        int x;
        cin >> x;
        if (x < 0) {
            cout << "incorrect size";
            return 0;
        }
        shape(x);
    }
     
    else if (menu == 2) {
        int x, y;
        cin >> x >> y;
        if (x < 0 || y < 0) {
            cout << "incorrect size";
            return 0;
        }
        shape(x, y);
    }
    else {
        cout << "wrong menu";
    }
    return 0;
}
