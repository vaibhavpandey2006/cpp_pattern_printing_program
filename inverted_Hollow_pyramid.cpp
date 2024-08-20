#include<iostream>
#include "join_p.h"

using namespace std ;

int inverted_pyramid (int n){

    for ( int i = n ; i >=1; i--){

        for ( int j = 1 ; j<= n -i ; j++){
            cout << " ";
        }
        for ( int j = 1; j <=2 *i -1; j++){
            if ( j==1 || j==2 *i-1 || i == n ){
                cout << "*";

            }
            else{
                cout<< " ";
            }
        }
        cout << endl;

        }

    }






void call_inveted_pyramid (){

    int a;
    cout << " Enter the number :"<< endl;
    cin>> a;
    inverted_pyramid(a);




}

