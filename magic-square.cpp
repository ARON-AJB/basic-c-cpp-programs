#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,i;
    int a1[3]={};
    int a2[3]={};
    int a3[3]={};
    i=1;
    cout<<"enter the matrix"<<endl;
    cin>>a1[0]>>a1[1]>>a1[2];
    cin>>a2[0]>>a2[1]>>a2[2];
    cin>>a3[0]>>a3[1]>>a3[2];
    n= a1[0]+ a2[1]+a3[2];
    if (a3[0]+a2[1]+a1[2]==n and a1[0]+a2[1]+a3[2]==n and a1[1]+a2[1]+a3[1]==n and a1[0]+a2[0]+a3[0]==n and a1[2]+a2[2]+a3[2]==n and a1[0]+a1[1]+a1[2]==n and a2[0]+a2[1]+a2[2]==n and a3[0]+a3[1]+a3[2]==n ) {
        cout<<"magic square";}
    else{
        cout<<"not magic square";}
    
   
}