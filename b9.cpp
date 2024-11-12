#include <bits/stdc++.h>
using namespace std ;

int main (){
    double a,b,c ;
    cin >>a>>b>>c;
    double delta = b*b-4*a*c;
    if (a == 0){
        if (b == 0){
            cout <<"Khong la phuong trinh bac nhat hay bac hai";
        }
        else {
            double x = -c/b ;
            cout  << "nghiem cua phuong trinh bac nhat "<< x << endl;
        }
    }
    else {
        if (delta>0){
            double x1 = (-b + sqrt(delta))/2*a;
            double x2 = (-b - sqrt(delta))/2*a;
            cout << "Phuong trinh co 2  nghiem phan biet"<< x1 <<" "<< x2 <<endl;
        }
        else if (delta == 0){
            double x = -b/(2*a);
            cout << "phuong trinh co nghiem kep" << x << endl ;
        }
        else {
            cout << "Phuong trinh vo nghiem"<<endl;
        }

    }
    return 0 ;
}