#include<iostream>
#include"join_p.h"

using namespace std;

int pascal_triangle (int n) {



    for (int i = 1; i <=n; i++){
            int m =1;

        for ( int j = 1; j <=i ; j++){

            cout <<m<< " ";
            m = m* ( i -j)/j;
        }
        cout << endl;
    }

}


void call_pascal ( ){

    int a ;
    cout << " Enter the number :"<< endl;
    cin>> a;
    pascal_triangle(a);
}
