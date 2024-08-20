#include<iostream>
#include"join_p.h"

using namespace std;


int numbers ( int n ) {
    int value =1;

    for ( int i =1 ;i <=n ; i++ ){

        for ( int j = 1; j<= i; j++){
            cout << value << " " ;
            value++;

        }
        cout << endl;

    }

}

void cal_numbers ( ){
    int a ;

    cout <<" Enter the number" << endl;
    cin >> a;
    numbers( a);

}
