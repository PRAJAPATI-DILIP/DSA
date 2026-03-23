// It follows FIFO approach (first in first out)
// it follows front and back method ,from back data is insert and from fron data is delete

#include<iostream>
#include<queue>

using namespace std;

int main(){
queue <int> dilip;

dilip.push(5);
dilip.push(8);
dilip.push(9);
dilip.push(10);
dilip.push(14);
while(dilip.empty()==false){
    cout<<"Values are: "<<dilip.front()<<"\n";
    dilip.pop();
}

return 0;


}