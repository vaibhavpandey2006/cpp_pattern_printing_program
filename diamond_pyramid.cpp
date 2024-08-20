#include <iostream>
#include"join_p.h"

using namespace std;

int calculate_diamond (int n ){
    int o = n-1;

    for( int i =1; i<= n ; i++){
        for( int j =1 ; j <=n-i; j++){
            cout << " ";
        }
        for ( int j = 1; j<= i ; j++ ) {
            cout << "& ";
        }
        cout << endl;
    }

   for ( int b = o ; b>0 ; b--){
            for ( int c = n; c > b ; c--){

                    cout << " ";
            }

            for ( int c = 1; c <=b; c++){
                    cout << "* ";
                    }

                    cout << endl;

}


}

void create_diamond (){

    int a ;
    cout << " Enter the number :"<<endl;
    cin>> a;
    calculate_diamond (a);

}
