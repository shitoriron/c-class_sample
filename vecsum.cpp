#include "vecsum.h"
#include <vector>
using namespace std;

vecsum::vecsum(vector<int> &vec): vec(vec){
}

int vecsum::solve(void){
    int res = 0;
    for (int i=0;i<vec.size();i++){
        res += vec[i];
    }
    return res;
}
