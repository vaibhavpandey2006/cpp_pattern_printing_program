#include<iostream>


using namespace std;

int print_cylinder ( int n){
    int k = n/2;
    int l = n-1;


     cout << endl ;

     for ( int i = 1; i <=k; i++){
        for( int j =1; j <=n+n ; j++){
            cout << " ";
        }

        cout << "*";
        cout << endl;
        cout <<endl;
     }













}


int main  (){
    int a;
    cout << " Enter the number "<< endl;
    cin>> a;
    print_cylinder (a);



}
