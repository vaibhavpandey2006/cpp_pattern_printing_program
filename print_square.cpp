
#include <iostream>
#include"join_p.h"

using namespace std;

int design_print ( int  k)  {
    int n =k-1;

    if ( k > 1){

    for ( int j = 1; j <=k ;j++ ){
    for ( int i = 1 ; i<=k ; i++){
        cout << " done ";
    }
    cout << endl;
    }


    }
    else
         cout << " enter the correct number:"<< endl;




}



void call_square () {
    int a;
    cout << " Enter the no "<< endl;
    cin>> a;
    design_print(a);
  }
