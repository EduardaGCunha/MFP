#include <bits/stdc++.h>
using namespace std;

int main(){
    double m1, m2, x1, x2, f; cin >> m1 >> m2 >> x1 >> x2 >> f;
    double  res = (f*((x2-x1)*(x2-x1)))/(m1*m2);
    printf("%.5lf\n", res);
}