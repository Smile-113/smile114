#include <bits/stdc++.h>
using namespace std ;

int main (){
    double a ,b ;
    cin >> a >> b;
    double x = b/a;
    if (a == 0 && b == 0){
        cout <<"loi ";
    }
    else if(a == 0 && b != 0){
        cout <<"loi "; 
    }
    else if(a != 0 && b == 0){
        cout <<"loi ";
    }
    else {
        cout <<"Ket qua : "<<" "<< x ;
    }
    return 0 ;

}