#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    priority_queue<int,vector<int>,greater<int>> min_heap;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x==0){
            if(min_heap.empty()) cout << "0\n";
            else{
                cout << min_heap.top() << '\n';
                min_heap.pop();
            }
        }
        else
            min_heap.push(x);
    }
    return 0;
}