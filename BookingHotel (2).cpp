#include <iostream>
#include <string>

using namespace std;

class DayBooking    
{
  public:
        string Day;
        
        void inputDayBooking(){
          cout << "How long do you reserve the room for?";
          cin >> Day;
        }
};

class NumberOfPerson{
  public:
        string Person;
         
        void inputNumberOfPerson(){
          cout<< "How many person do you book for?";
          cin >> Person;
        } 
};

class RoomLevel{
  public:
         string Level:
         
         void inputRoomLevel(){
           cout << "What level of room  would you like to book?";
           cin >> Level;
         }
};

int main()
{
	DayBooking Day;
	Day.inputdaBooking();
	
  NumbarofPerson Person;
  Person.inputNumberOfPerson();
    
  RoomLevel Level;
  Level.inputRoomLevel();
    
	
	
}
