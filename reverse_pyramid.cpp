
#include<iostream>
#include"join_p.h"

using namespace std;

int pyramid_call ( int n ){

    for ( int i = n ; i >=1 ; i--){

        for( int j = 1 ; j <= n-i ; j++){
            cout << " ";
        }
        for ( int j = 1 ; j <= i ; j ++){
            cout << "& ";
        }

        cout << endl;

}
}
void pyramid_reverse ( ){
    int a;
    cout <<" Enter the number " << endl;
    cin>> a;
    pyramid_call (a);

}
