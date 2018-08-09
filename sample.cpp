#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const int N_MAX = 10000;

void print_vector(vector<int> &vec){
    cout << vec.size() << endl;
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

class Sample{
public:
    int N;
    int vec[N_MAX];

    Sample(int N0, vector<int> &vec0){
        N = N0;
        for (int i=0;i<N;i++){
            vec[i] = vec0[i];
        }
    }
};

int main(){
    int N = 3;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        vec[i] = i;
    }
    Sample sam(N, vec);
    cout << sam.N << endl;
}