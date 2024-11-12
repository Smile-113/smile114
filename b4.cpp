#include <bits/stdc++.h>
using namespace std ;

int main (){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        cout << a <<" "<<" La so lon nhat ";
    }
    else if (b>a && b>c && b>d){
        cout << b <<" "<<" La so lon nhat ";
    }
    else if (c>a && c>b && c>d){
        cout << c <<" "<<" La so lon nhat ";
    }
    else {
        cout << d <<" "<<" La so lon nhat ";
    }
    return 0 ;
}