//n 입력
//n만큼 입력
//입력 받은값중 최대값 출력
 
#include<iostream>
using namespace std;
 
int max(int arr[100], int n, int max_num) {
    for (int i = 0; i < n; i++) {
        if(arr[i]>max_num) max_num = arr[i];
    }
    return max_num;
}
int main()
{
    int n, i, max_num;
    int arr[100];
    cin >> n;
    for (i = 0; i < n; i++) cin >> arr[i];
    max_num=max(arr, n, -1000000);
    cout << max_num;
    return 0;
}
