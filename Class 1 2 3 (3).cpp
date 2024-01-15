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
          cin >> Hotel;
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
	Company Company;
	Company.inputCompany();
	
  BookingHotel Hotel;
  Hotel.inputBookingHotel();
    
  OrderingTicket Ticket;
  Ticket.inputOrderingTicket();
    
	
	
}
