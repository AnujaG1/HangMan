#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
using namespace std;
class Vehicle
{
    public:
    Vehicle() {}
    Vehicle(string make , string model, double year, float price) : make(make), model(model), year(year), price(price) {}
    
    void setMake(string m)
{
        make = m;
    }
    void setModel(string M)
    {
        model = M;
    }
    void setYear(double y)
    {
        year = y;
    }
    void setPrice(float p)
    {
        price = p;
    }
    string getMake()
    {
        return make;
    }
    string getModel()
    {
        return model;
    }
    double getYear()
    {
        return year;
    }
    float getPrice()
    {
        return price;
    }
    virtual double calculateTax() const = 0;
    virtual void printDetails() const override {
        std::cout<<"Make: "<<make<<std::endl;
        std::cout<<"Model: "<<model<<std::endl;
        std::cout<<"Year: "<<year<<std::endl;
        std::cout<<"Price: $"<<fixed<<setprecision(2)<<price<<std::endl;
    }
    protected:
    string make;
    string model;
    double year;
    float price;
    
};
class car : public Vehicle 
{
  private:
  int numDoors;
 
  public:
  car() { }
  car( string make , string model , double year, float price, int numDoors): Vehicle(make , model, year, price), numDoors(numDoors) {}
  void setNumDoors(int num)
  {
    numDoors = num;
  } 
  int getNumDoors()
  {
    return numDoors;
  } 
  double calculateTax() const override {
    return price *0.1;
  }
  void printDetails() const override{
    Vehicle::printDetails();
    std::cout<<"Number of Doors: "<<numDoors<<endl;
    std::cout<<"Taxi: $"<<fixed<<setprecision(2)<<calculateTax()<<endl;
  }
 
};
class truck: public Vehicle{
 private :
 float payload;
 int towingCapacity;

 public:
 truck() {}
 truck( string make , string model, double year, float price, float payload, int towingCapacity): Vehicle(make, model, year, price), payload(payload), towingCapacity(towingCapacity) {}
 void setPayload(float pay)
 {
    payload = pay;
 }
 void setTowingCapacity(int tow)
 {
    towingCapacity = tow;
 }
 float getPayload()
 {
    return payload;
 }
 int getTowingCapacity()
 {
    return towingCapacity;
 }
 double calculateTax() const override{
    return price*0.12;
 }
void printDetails() const override
{
    Vehicle: printDetails();
    std::cout<<"Payload: "<<payload<<"lbs"<<endl;
    std::cout<<"Towing Capacity: "<<towingCapacity<<"lbs"<<endl;
    std::cout<<"Tax: $"<<std::fixed<<std::setprecision(2)<<calculateTax()<<endl;
}
};
void addVehicle(Vehicle* showRoom[], int &numVehicles)
{
    if(numVehicles >=100)
    {
        std::cout<<"Vehicle is full. Cannot add more books."<<endl;
        return ;
    }
 
    string type , model, make;
    double year;
    float price;
    int numDoors;
    int towingCapacity;
    float payload;
    std::cout<<"Enter vehicle type ('car'/'truck'): ";
    std::cin>> type;
    std::cin>>make;
    std::cout<<"Enter vehicle make: ";
     std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cout<<"Enter vehicle model: ";
    std::cin>>model;
    std::cout<<"Enter vehicle year: ";
    std::cin>> year;
    std::cout<<"Enter vehicle price: ";
    std::cin>>price;
    if(type == "car")
    {
    std::cout<<"Enter number of doors: ";
    std::cin>>numDoors;
    }
    showRoom[numVehicles] = new car(make, model, year, price, numDoors);
     std::cout<<"'Car' added to fleet. "<<endl;
    }
    else if (type == "truck")
    {
            std::cout<<"Enter payloads in pounds: ";
            std::cin>>payload;
            std::cout<<"Enter towing capacity in pounds: ";
            std::cin>>towingCapacity;
            showRoom[numVehicles] = new truck(make, model , year, price, payload, towingCapacity);
            std::cout<<"'Truck' added to fleet."<<endl;

    
        else
        {
            std::cout<<"Invalid vehicle type."<<endl;
            return ;
        }
          numVehicles++;
}
    


void removeVehicle(Vehicle* showRoom[], int &numVehicles)
{
    if(numVehicles ==0)
    {
        cout<<"No vehicles to remove."<<endl;
        return ;
    }
    string make, model;
    cout<<"Enter vehicle make: ";
    cin>>make;
    cout<<"Enter vehicle model: ";
    cin>>model;
    for(int i =0;i<numVehicles;i++)
    {
        if(showRoom[i]-> getMake() == make && showRoom[i]->getModel() == model)
        {
         delete showRoom[i];
        
                for(int j =i; j<numVehicles-1 ;j++)
                {
                showRoom[j] = showRoom[j+1];
                }
        }
                numVehicles--;
                cout<<"Vehicle removed from fleet."<<endl;
                return ;
        
    }
    cout<<"Vehicle not found."<<endl;
}
void searchVehicle(Vehicle* showRoom[], int &numVehicles)
{
 string make, model;
 bool found = false;
 cout<<"Enter vehicle make: ";
 cin>>make;
 cout<<"Enter vehicle model: ";
 cin>>model;
 for(int i=0; i<numVehicles;i++)
 {
 if(showRoom[i]->getMake() == make && showRoom[i]->getModel())
 {
    
      found = true;
      cout<<"Vehicle Information."<<endl;
      showRoom[i]->printDetails();
      break;
  
  }
 }
 if(!found)
 {
    std::cout<<"Vehicle not found."<<endl;
 }
}

int main()
{
    Vehicle* showRoom[100];
    string type;
    int numVehicles = 0;
    int choice;
    bool running = true;
    std::cout<<"Welcome to the Vehicle Management System! "<<endl;
    while(running){
        std::cout<<"Menu"<<endl;
        std::cout<<"1. Add Vehicle"<<endl;
        std::cout<<"2. Remove Vehicle"<<endl;
        std::cout<<"3. Search for Vehicle"<<endl;
        std::cout<<"4. Exit"<<endl;

    
    std::cout<<"Enter your choice: ";
    std::cin>> choice;
   
    switch(choice)
    {
        case 1:
        addVehicle(showRoom , numVehicles);
        break;

        case 2:
        removeVehicle(showRoom , numVehicles);
        break;

        case 3:
        searchVehicle(showRoom , numVehicles);
        break;
        
        case 4:
        cout<<"Exiting Program "<<endl;
        running = false;
        break;

        default:
        cout<<"\n Choose the valid choice."<<endl;
    }
    }


    for(int i = 0;i<numVehicles; i++)
    {
    delete showRoom[i];
    }
    return 0;
}