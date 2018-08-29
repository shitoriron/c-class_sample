#include "vecsum.h"
#include <iostream>
using namespace std;

int main(){
    vector<int> a(3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 8;
    vecsum instance = vecsum(a);
    int res = instance.solve();
    cout << res << endl;
    return 0;
}