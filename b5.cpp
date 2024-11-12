#include <bits/stdc++.h>
using namespace std ;

int main (){
    float x , y ;
    cin >> y ;
    for ( float i = 2; i <=4; ++i){
        cin >> x ;
        if (x > y){
            y = x;
        }
    }
    cout << y <<" "<<" La so lon nhat "<<endl;
}