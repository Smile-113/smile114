#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    if (n % 3 == 0 , n % 3 == 1){
        cout << n <<" "<<" la so chinh phuong";
    }
    else if (n % 4 == 0 , n % 4 == 1){
        cout << n <<" "<<" la so chinh phuong";
    }
    else{
        cout << n <<" "<<" khong la so ching phuong";
    }
    return 0 ;
}