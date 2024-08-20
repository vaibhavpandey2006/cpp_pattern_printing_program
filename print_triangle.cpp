
#include<iostream>
#include"join_p.h"

using namespace std;

int triangle_call (int n) {
    for ( int i =1 ; i <=n ; i++){


        for ( int j =1 ; j < i+1  ;j++){
            cout << "* ";
        }
        for( int j =1 ; j < n; j++){

            cout << " ";
        }

        cout <<endl;



    }

}

void print_triangle (){
    int a;
    cout << " Enter the number :"<< endl;
    cin>> a;
    triangle_call (a);


}
