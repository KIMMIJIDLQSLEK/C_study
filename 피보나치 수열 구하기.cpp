//Fibonacci 함수-> default값 3일경우
//while문으로 매개변수보다 작을경우 계속 반복, 클경우 break;
 
 
#include<iostream>
using namespace std;
 
void Fibonacci(int a = 3) {
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    int now = 2;
    cout << arr[0] <<" "<< arr[1]<<" ";
    while (1) {
        arr[now]=arr[now - 1] + arr[now - 2];
        if (arr[now] > a) {
            break;
        }
        cout << arr[now]<<" ";
        now++;
    }
    cout << endl;
}
 
int main() {
    Fibonacci();
    Fibonacci(8);
    Fibonacci(100);
    return 0;
}
