//Write a program to swap two values. Use the concept of call by pointer. 
#include <iostream>
using namespace std;
void swap (int *p,int *q){
    int temp;
    temp= *p;
    *p=*q;
    *q=temp;
}
int main(){
    int x,y;
    cout<<"Enter values for swapping.\n Enter value of X:\n";
    cin>>x;
    cout<<"Enter value for Y:\n";
    cin>>y;
    cout<<"Before swapping:\nValue of X->\t"<<x<<"\nValue of Y->\t"<<y<<endl;
    swap(&x,&y);
    cout<<"After swapping:\nValue of X->\t"<<x<<"\nValue of Y->\t"<<y<<endl;

}
