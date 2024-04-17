#include <bits/stdc++.h>
using namespace std;


int main(){
    double dis, m; cin >> dis >> m;
    double lado = dis*sqrt(2);
    int square = m/(lado);
    double left = (m-square*lado)/sqrt(2);
    double x = square*dis + left;
    cout << setprecision(10) << fixed << x << " ";
    if(square&1){
        cout << setprecision(10) << fixed << dis - left << endl;
    }else{
        cout << setprecision(10) << fixed << left << endl;
    }
}