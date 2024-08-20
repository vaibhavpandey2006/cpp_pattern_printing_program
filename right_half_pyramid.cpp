
#include<iostream>
#include"join_p.h"

using namespace std;
int right_half (int n){

    for ( int i = 1 ; i <=n ; i++){


        // for printing spaces
        for ( int j =1; j <= n-i ; j++){
            cout << " ";
        }
        //for printing characters
        for ( int j = 1;  j <=i; j++){
            cout <<"*";
        }
        cout<<endl;
    }


}
void draw_rightpyramid (){

    int a;
    cout << "enter the number "<< endl;
    cin >> a;
    right_half( a);
}

