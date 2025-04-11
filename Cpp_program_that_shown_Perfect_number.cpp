//  cpp program that are shown the perfect number 
#include<iostream>
using namespace std;

int main(){
    int num =28 ,div ,sum =0;
    for (int i = 1; i < num; i++)
    {
        div = num % i;
        if(div == 0){
            sum = sum + i;
        }
    }
    if(num == sum){
        cout<<"it is the Perfect number ";
    }else{
        cout<<"it is not Perfect number ";
    }
    return 0;
}