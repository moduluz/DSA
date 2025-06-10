#include <bits/stdc++.h>
using namespace std;

void revprint(int i, int n){
    if(i < n) return;
    cout << i << endl;
    revprint(i - 1,n);
}

int main(){
    int n = 4;
    revprint(n ,1);
    return 0;   
}