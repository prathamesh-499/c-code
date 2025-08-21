#include <iostream>
#include<string>
#include<limits>
#include<vector>
using namespace std;

class Engine{
    public:
    string engine_type;
    float Hp;
    void Engine_spec(){
        cout<<"Engine number:"<<engine_type<<"\nHorse Power:"<<Hp<<endl;
    }
};
class Vehicle:public Engine{
	public:
	string model,brand;

    class Registration{
        public:
    string registration_num,owners_name;
        Registration(string r="None",string o="None"){
            registration_num = r;
            owners_name = o;
        }

    void show_resgistration_detail(){
    cout<<"Registration number:"<<registration_num<<endl;
    cout<<"Owner Name:"<<owners_name<<endl;

    }
    void setter(string r,string o){
            registration_num=r;
            owners_name=o;}


}res;

Vehicle(){}

	Vehicle(string m,string b,string res_no,string o){
		model=m;
		brand=b;
		res.setter(res_no,o);
	} 
	
virtual void all_car(){}

};
	
	
class Car :public Vehicle{
    public:
    Car(){}
    static vector<Car*> cars;
    Car(string m,string b,string r,string o,string et,float hp):Vehicle(m,b,r,o){
        engine_type=et;
        Hp=hp;
	    cars.push_back(this);
    }

    void all_car()override{

        for(Car* c:Car::cars){
        cout<<endl<<"Model:"<<c->model<<endl;
		cout<<"Brand:"<<c->brand<<endl;
		c->res.show_resgistration_detail();
        c->Engine_spec();

	    }
	}
};



class Truck :public Vehicle{
    int load_capacity;
    public:
    Truck(){}
    static vector<Truck*> trucks;

    Truck(string m,string b,string r,string o,string et,float hp,int load):Vehicle(m,b,r,o){
        engine_type=et;
        Hp=hp;
        load_capacity=load;
        trucks.push_back(this);

    }
void all_car(){

        for(Truck* c:Truck::trucks){
        cout<<endl<<"Model:"<<c->model<<endl;
		cout<<"Brand:"<<c->brand<<endl;
		c->res.show_resgistration_detail();
        c->Engine_spec();

	    }
	}

};

class Battery_info{
    public:
    int battery_capicity;

};
class Ev :public Vehicle, public Battery_info {
    Ev(string m,string b,string r,string o,int bc ,float hp):Vehicle(m,b,r,o){
        battery_capicity=bc;
        Hp=hp;
    }

};

vector<Car*> Car::cars;
vector<Truck*> Truck::trucks;

class Interface{
public:
    void registration_vechicle(){
        int cho;
        cout<<"Enter vehicle to registor\n 1 for car 2 for truck"<<endl;
        cin>>cho;
        string model,brand,res_no,owner,eng_type;
        float hp;
        cout<<"Enter model:"<<endl;
        cin>>model;
        cout<<"Enter brand:"<<endl;
        cin>>brand; 
        cout<<"Enter registration number:"<<endl;
        cin>>res_no;    
        cout<<"Enter owner's name:"<<endl;
        cin>>owner;
        cout<<"Enter engine type:"<<endl;
        cin>>eng_type;    
        cout<<"Horse power:"<<endl;
        cin>>hp;
        if(cho==1){
            new Car(model,brand,res_no,owner,eng_type,hp);}

        if (cho==2){
            int load;
            cout<<"Enter the load capacity of truck:"<<endl;
            cin>>load;
            new Truck(model,brand,res_no,owner,eng_type,hp,load);
        }
        
        
    }


    void display(){
        int cho;
        cout<<"Enter vehicle to display\n 1 for car 2 for truck"<<endl;
        cin>>cho;
        if(cho==1){
            Car c;
            c.all_car();
        }
        if(cho==2){
            Truck t;
            t.all_car();
        }
    }
 
};

int main()
{
Interface i;
i.registration_vechicle();
i.display();
    return 0;
}