// https://atcoder.jp/contests/abc081/tasks/abc081_b
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count=0;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        int b = 0;       
        while (a % 2==0)
        {
            b++;
            a /=2;
        }
        
        if ( b == 0 ){
            break;
        }
        else if ( i == 0){
            count = b;
        }
        else if ( b < count ){
            count =b;
        }
    }

    cout << count << endl;

}