
#include <iostream >
#include "join_p.h"

using namespace std;

int floyds_triangle (int n){
    int k = 1 ;
    //cout << k;
    for (int i = 1; i <=n ; i ++){
        for ( int j =n ; j > n-i ; j--){
            cout << k <<" ";
            k +=1;

        }
        cout << endl;

    }
    return 0;
}


void call_floyd_triangle (){
    int a ;
    cout<< " Enter the number :"<< endl;
    cin>>a;
    floyds_triangle(a);
}
