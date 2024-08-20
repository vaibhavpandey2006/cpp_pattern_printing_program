#include <iostream>
#include"join_p.h"

using namespace std;

int design_printt ( int  k)  {
    for ( int i =0 ; i <k ;i++){
        for ( int j =0 ; j< i+1 ;j++){
            cout << '*';

        }
        cout<<endl;
    }
}

void call_design() {
    int a;
    cout << " Enter the no "<< endl;
    cin>> a;
    design_printt(a);
  }
