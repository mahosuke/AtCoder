#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    string a;


    for (int i =0;i<n;i++){
        string s ;
        cin >> s;

        if ( s == "Y"){
            a = "Four";
        }
        else {continue;}
    }

    if (a == "Four"){
        cout << a << endl;
    }
    else {cout << "Three" << endl;}

}
