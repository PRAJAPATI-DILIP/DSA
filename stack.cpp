#include<iostream>
#include <stack>
using namespace std;
 int main(){

    //int a[]={4,6,8,5,3,0,1};
    //cout<<"size is: "<<sizeof(a);
 stack <int> num;
 num.push(2);
 num.push(4);
 num.push(5);

 
 while (num.empty()==false){

    cout<<"Numbers are: "<<num.top()<<"\n";
    num.pop();
 }


   
return 0;


 }