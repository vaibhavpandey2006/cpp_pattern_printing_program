#include<iostream>
#include"join_p.h"

using namespace std;

int reverse_floyd_triangle (int n){
    int k;
  if (n > 0){
     k = n * (n+1)/2 ;
  }
  else{
    cout << " Enter the correct number ( positive number )"<< endl;
  }
    for ( int i = n ; i >=1; i--){

        for ( int j = 1; j <= i ; j++ ){
            cout << k << "  ";
            k-=1;
        }
        cout << endl;
}
}
void call_reverse_floyd (){

    int a;
    cout << " Enter the number of rows :"<< endl;
    cin >> a;
    reverse_floyd_triangle(a);

}
