#include<iostream>
using namespace std;
class Circular_queue{
    public:
    int *arr;
    int size=0,capacity,f,r;

    public:
    Circular_queue(int size){
        capacity=size;
        arr= new int[size];
        f=0;
        r=-1;
    }
    void push (int val){//O(1)
        if (size==capacity){cout<<"circular queue in full\n";
        return;}
        r=(r+1)%capacity;
        arr[r]=val;
        size++;
    }
    void pop(){//O(1)
        if (empty()){cout<<"Circular queue is empty\n";
            return;
        }
//val is not deleted it's just overwritten .f pointer just moves on in a circle
        f=(f+1)%capacity;
        size--;
    }

    int front(){//O(1)
        if (empty()){cout<<"Circular queue is empty\n";
        return -1;}
        return arr[f];
    }
    bool empty(){//O(1)
        return size==0;
    }
};

int main (){
Circular_queue cq(4);

cq.push(1);
cq.push(2);
cq.push(3);
cq.push(4);
while (!cq.empty()){
    cout<<cq.front()<<"\n";
    cq.pop();
}

return 0;
}