#include <iostream>
using namespace std;
int main(void){
    int N, A;
    cin >> N;
    cin >> A;
    if(N%500 > A){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    return 0;
}