#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    for(int i = 0; i < 7; i++){
        int a; cin >> a;
        if(a == 1) cnt++;
    }
    int n; cin >> n;
    if(((cnt%2)==0 && n == 0) || ((cnt%2==1) && n == 1)){
        cout << "N?" << endl;
    }else{
        cout << "S" << endl;
    }
}