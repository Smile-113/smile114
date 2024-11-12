#include <bits/stdc++.h>
using namespace std ;

int main (){
    int a , b , c;
    cin >> a >> b >> c ;
    if ( a==b ||b==c||c==a ){
        cout << "Tam giac can"<<endl;
    }
    else if (a==b && b==c){
        cout << "Tam giac deu"<<endl;
    }
    else if (c==sqrt(pow(a,2)+pow(b,2))||b==sqrt(pow(a,2)+pow(c,2)) ||a==sqrt(pow(b,2)+pow(c,2))){
        cout << "Tam giac vuong"<<endl;
    }
    else if (a+b>c && b+c>a && c+a>b){
        cout << "Tam giac thuong"<<endl;
    }
    else {
        cout << "Khong phai la tam giac"<<endl;
    }
    return 0 ;
}