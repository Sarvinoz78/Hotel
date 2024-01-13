#include <iostream>
#include <string>

using namespace std;

class Company
{
  public:
        double Service;
        
        void inputCompany(){
          cout << "Good day! How can I help you? What kind of service do you want?";
          cin >> Service;
        }
};

class BookingHotelg{
  public:
        string Hotel;
         
        void inputNumberOfHotelBooking(){
          cout<< "Can you tell me where the hotel you want to book is located.";
          cin >> Place;
        } 
};

class OrderingTicket{
  public:
         string Ticket:
         
         void inputOrderTheTicket(){
           cout << "Which country do you want to order a ticket for";
           cin >> Ticket;
         }
};

int main()
{
	Company myCompany;
	myCompany.inputCompany();
	
  BookingHotel myHotel;
  Hotel.inputBookingHotel();
    
  OrderingTicket myTicket;
  Ticket.inputOrderingTicket();
    
	
	
}
