// #include <iostream>
// #include<string>
// #include<limits>
// #include<vector>
// using namespace std;

// class Engine{
//     public:
//     string engine_type;
//     float Hp;
//     void Engine_spec(){
//         cout<<"Engine number:"<<engine_type<<"\nHorse Power:"<<Hp<<endl;
//     }
// };
// class Vehicle:public Engine{
// 	public:
// 	string model,brand;

//     class Registration{
//         public:
//     string registration_num,owners_name;
//         Registration(string r="None",string o="None"){
//             registration_num = r;
//             owners_name = o;
//         }

//     void show_resgistration_detail(){
//     cout<<"Registration number:"<<registration_num<<endl;
//     cout<<"Owner Name:"<<owners_name<<endl;

//     }
//     void setter(string r,string o){
//             registration_num=r;
//             owners_name=o;}


// }res;

// Vehicle(){}

// 	Vehicle(string m,string b,string res_no,string o){
// 		model=m;
// 		brand=b;
// 		res.setter(res_no,o);
// 	} 
	
// virtual void all_car(){}

// };
	
	
// class Car :public Vehicle{
//     public:
//     Car(){}
//     static vector<Car*> cars;
//     Car(string m,string b,string r,string o,string et,float hp):Vehicle(m,b,r,o){
//         engine_type=et;
//         Hp=hp;
// 	    cars.push_back(this);
//     }

//     void all_car()override{

//         for(Car* c:Car::cars){
//         cout<<endl<<"Model:"<<c->model<<endl;
// 		cout<<"Brand:"<<c->brand<<endl;
// 		c->res.show_resgistration_detail();
//         c->Engine_spec();

// 	    }
// 	}
// };



// class Truck :public Vehicle{
//     int load_capacity;
//     public:
//     Truck(){}
//     static vector<Truck*> trucks;

//     Truck(string m,string b,string r,string o,string et,float hp,int load):Vehicle(m,b,r,o){
//         engine_type=et;
//         Hp=hp;
//         load_capacity=load;
//         trucks.push_back(this);

//     }
// void all_car(){

//         for(Truck* c:Truck::trucks){
//         cout<<endl<<"Model:"<<c->model<<endl;
// 		cout<<"Brand:"<<c->brand<<endl;
// 		c->res.show_resgistration_detail();
//         c->Engine_spec();

// 	    }
// 	}

// };

// class Battery_info{
//     public:
//     int battery_capicity;

// };
// class Ev :public Vehicle, public Battery_info {
//     Ev(string m,string b,string r,string o,int bc ,float hp):Vehicle(m,b,r,o){
//         battery_capicity=bc;
//         Hp=hp;
//     }

// };

// vector<Car*> Car::cars;
// vector<Truck*> Truck::trucks;

// class Interface{
// public:
//     void registration_vechicle(){
//         int cho;
//         cout<<"Enter vehicle to registor\n 1 for car 2 for truck"<<endl;
//         cin>>cho;
//         string model,brand,res_no,owner,eng_type;
//         float hp;
//         cout<<"Enter model:"<<endl;
//         cin>>model;
//         cout<<"Enter brand:"<<endl;
//         cin>>brand; 
//         cout<<"Enter registration number:"<<endl;
//         cin>>res_no;    
//         cout<<"Enter owner's name:"<<endl;
//         cin>>owner;
//         cout<<"Enter engine type:"<<endl;
//         cin>>eng_type;    
//         cout<<"Horse power:"<<endl;
//         cin>>hp;
//         if(cho==1){
//             new Car(model,brand,res_no,owner,eng_type,hp);}

//         if (cho==2){
//             int load;
//             cout<<"Enter the load capacity of truck:"<<endl;
//             cin>>load;
//             new Truck(model,brand,res_no,owner,eng_type,hp,load);
//         }
        
        
//     }


//     void display(){
//         int cho;
//         cout<<"Enter vehicle to display\n 1 for car 2 for truck"<<endl;
//         cin>>cho;
//         if(cho==1){
//             Car c;
//             c.all_car();
//         }
//         if(cho==2){
//             Truck t;
//             t.all_car();
//         }
//     }
 
// };

// int main()
// {
// Interface i;
// i.registration_vechicle();
// i.display();
//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;

class Engine{
    public:
    string engine_type;
    float Hp;
    void Engine_spec(){
        cout<<"Engine type:"<<engine_type<<"\nHorse Power:"<<Hp<<endl;
    }
};

class Vehicle:public Engine{
    public:
    string model,brand;

    class Registration{
        public:
        string registration_num,owners_name;
        Registration(string r="None",string o="None"){
            registration_num=r;
            owners_name=o;
        }
        void show_reg(){
            cout<<"Registration number:"<<registration_num<<endl;
            cout<<"Owner Name:"<<owners_name<<endl;
        }
        void setter(string r,string o){
            registration_num=r;
            owners_name=o;
        }
    }res;

    Vehicle(){}
    Vehicle(string m,string b,string r,string o){
        model=m;
        brand=b;
        res.setter(r,o);
    }

    virtual void show()=0;
};

class Car:public Vehicle{
    public:
    static vector<Car*> cars;
    Car(){}
    Car(string m,string b,string r,string o,string et,float hp):Vehicle(m,b,r,o){
        engine_type=et;
        Hp=hp;
        cars.push_back(this);
    }
    void show()override{
        for(auto c:cars){
            cout<<"\nModel:"<<c->model<<"\nBrand:"<<c->brand<<endl;
            c->res.show_reg();
            c->Engine_spec();
        }
    }
};
vector<Car*> Car::cars;

class Truck:public Vehicle{
    public:
    static vector<Truck*> trucks;
    Truck(){}
    Truck(string m,string b,string r,string o,string et,float hp):Vehicle(m,b,r,o){
        engine_type=et;
        Hp=hp;
        trucks.push_back(this);
    }
    void show()override{
        for(auto t:trucks){
            cout<<"\nModel:"<<t->model<<"\nBrand:"<<t->brand<<endl;
            t->res.show_reg();
            t->Engine_spec();
        }
    }
};
vector<Truck*> Truck::trucks;

class Motorcycle:public Vehicle{
    public:
    static vector<Motorcycle*> bikes;
    Motorcycle(){}
    Motorcycle(string m,string b,string r,string o,string et,float hp):Vehicle(m,b,r,o){
        engine_type=et;
        Hp=hp;
        bikes.push_back(this);
    }
    void show()override{
        for(auto m:bikes){
            cout<<"\nModel:"<<m->model<<"\nBrand:"<<m->brand<<endl;
            m->res.show_reg();
            m->Engine_spec();
        }
    }
};
vector<Motorcycle*> Motorcycle::bikes;

class Battery{
    public:
    int capacity;
    Battery(int c=0){
        capacity=c;
    }
    void show_battery(){
        cout<<"Battery capacity:"<<capacity<<" kWh"<<endl;
    }
};

class ElectricVehicle:public Vehicle,public Battery{
    public:
    static vector<ElectricVehicle*> evs;
    ElectricVehicle(){}
    ElectricVehicle(string m,string b,string r,string o,string et,float hp,int cap)
    :Vehicle(m,b,r,o),Battery(cap){
        engine_type=et;
        Hp=hp;
        evs.push_back(this);
    }
    void show()override{
        for(auto e:evs){
            cout<<"\nModel:"<<e->model<<"\nBrand:"<<e->brand<<endl;
            e->res.show_reg();
            e->Engine_spec();
            e->show_battery();
        }
    }
};
vector<ElectricVehicle*> ElectricVehicle::evs;

class Service{
    public:
    void update(Vehicle &v,string msg){
        cout<<"Service update for "<<v.brand<<" "<<v.model<<": "<<msg<<endl;
    }
};

int main(){
    // Car c1("Corolla","Toyota","MH12AB1234","Ravi","Petrol",130);
    // Truck t1("truck","Volvo","MH12XY7890","Logistics Ltd","Diesel",540);
    // Motorcycle m1("R15","Yamaha","MH12CD4567","Amit","Petrol",150);
    // ElectricVehicle e1("ola","s1 air","MH12EV9999","Priya","EV",300,75);

    // cout<<"\n--- Cars ---"; c1.show();
    // cout<<"\n--- Trucks ---"; t1.show();
    // cout<<"\n--- Motorcycles ---"; m1.show();
    // cout<<"\n--- Electric Vehicles ---"; e1.show();

    // Service s;
    // cout<<"\n--- Service Updates ---\n";
    // s.update(c1,"Oil changed");
    // s.update(e1,"Battery software updated");

    std::cerr<<"Hello";
    return 0;
}
