#include <iostream>
#include <cmath>
int main(){
int num1,num2;
std::cout<<"enter any two number"<<std::endl;
std::cin>>num1>>num2;
if (fmax(num1,num2)==num1)
 {std::cout<<num1<< " is greater"<<std::endl;
 std::cout<<num2<<" is smaller"<<std::endl;
 }
 else
 {std::cout<<num2<< " is greater"<<std::endl;
 std::cout<<num1<<" is smaller "<<std::endl;
 }
}