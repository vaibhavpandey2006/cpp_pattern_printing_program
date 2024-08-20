#include<iostream>
#include"join_p.h"

using namespace std;

int make_pyramid (int n) {

    for( int i =1; i<=n; i++){

        for ( int j =1; j <= n-i ; j++){
            cout << " ";
        }
        for( int j =1; j <= i ; j++){

            cout << " &";
        }
        cout << endl;
            }
    }


void call_pyramid (){
    int a ;
    cout << " Enter the number" <<endl;
    cin>> a;
    make_pyramid( a);


}



