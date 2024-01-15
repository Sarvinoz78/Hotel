#include <iostream>
#include <string>

using namespace std;

class FlyingDay    
{
  public:
        string Day;
        
        void inputFlyingDay(){
          cout <<"Which day do you order a ticket for?"
          cin >> Day;
        }
};

class FlyingTime{
  public:
        string Time;
         
        void inputFlyingTime(){
          cout<< "What time do you prefer to fly?";
          cin >> Time;
        } 
};

class FlyingClass{
  public:
         string Class:
         
         void inputFlyingClass(){
           cout << "What kind of class do you prefer?";
           cin >> Class;
         }
};

int main()
{
	FlyingDay Day;
	Day.inputFlyingDay();
	
  FlyingTime Time;
  Time.inputFlyingDay();
    
  FlyingClass Class;
  Class.inputFlyingClass();
    
	
	
}
