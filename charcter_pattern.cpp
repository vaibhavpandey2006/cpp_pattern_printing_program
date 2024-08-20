#include<iostream>
#include"join_p.h"

using namespace std;


int char_print (int n){

    int value  = int('A');
    for ( int i =1 ; i <=n; i++ ){

        for(int j =1 ; j <= i; j++){
                cout<< char(value) ;
        }
        cout << endl;
        value+=1;
    }

}


void call_character (){

    int a;
    cout << "Enter the number :"<<endl;
    cin>> a;
    char_print(a);

}
