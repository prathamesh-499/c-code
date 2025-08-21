#include<iostream>
using namespace std;
class Product{
    int prod_id,prod_price,prod_quantity;
    string prod_name;
    static int prod_num;
public:
    Product(int prod_id,string prod_name,int prod_price,int prod_quantity){
        this->prod_id=prod_id;
        this->prod_name=prod_name;
        this->prod_price=prod_price;
        this->prod_quantity=prod_quantity;
        prod_num++;
}
    void display(){
        cout<<endl<<"Product ID:"<<prod_id<<"\nProduct Name:"<<prod_name<<"\nProduct Price"<<prod_price<<"\nProduct quantity"<<prod_quantity<<endl;
    }
    static void count(){
        cout<<prod_num<<endl;
    }
    inline int stock(){
        return prod_price*prod_quantity;
    }
    friend void compare(Product p1,Product p2);
};

void compare(Product p1,Product p2){
    if (p1.prod_price>p2.prod_price)
        cout<<p1.prod_name<<" is more expensive than "<<p2.prod_name<<endl;
    
    else if (p1.prod_price<p2.prod_price)
        cout<<p2.prod_name<<" is more expensive than "<<p1.prod_name<<endl;
    
    else
        cout<<"Both the product are of same price"<<endl;
    
}

int Product::prod_num=0;
int main (){
Product p1(1,"AC",50000,20);
Product p2(2,"Table",1000,100);
p1.display();
p2.display();
compare(p1,p2);
Product::count();
return 0;
}