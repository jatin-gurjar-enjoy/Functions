//function for swapping values
#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a=5,b=10;
    swap(a,b);
    cout<<"The value of a after swapping: "<<a<<endl;
    cout<<"The value of b after swapping: "<<b<<endl;
    
    return 0;
}

/*
The value of a after swapping: 10
The value of b after swapping: 5
*/
