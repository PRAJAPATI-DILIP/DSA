#include<iostream>
#include <queue>
using namespace std;
 int main(){



queue <int> queue1;
queue1.push(1);
queue1.push(8);
queue1.push(6);
queue1.push(4);
queue1.push(0);


while(queue1.empty()==false){
    cout<<"Numbers are: "<<queue1.front()<<"\n";
    queue1.pop();
}

 }


 