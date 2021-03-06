#include <iostream>
using namespace std;

int T;
int fib[41];
int arr[41][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    fib[0]=0; arr[0][0]=1; arr[0][1]=0; 
    fib[1]=1; arr[1][0]=0; arr[1][1]=1;

    for(int i=2;i<41;i++){
        fib[i]=fib[i-2]+fib[i-1];
        arr[i][0]=arr[i-2][0]+arr[i-1][0];
        arr[i][1]=arr[i-2][1]+arr[i-1][1];
    }
    cin >> T;

    for(int i=0; i<T; i++){
        int N;
        cin >> N;
        cout << arr[N][0] << ' ' << arr[N][1] << '\n';
    }
    return 0;
}