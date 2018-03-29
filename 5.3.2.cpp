#include <iostream>
#include <string>
class FlightBooking {
	public:
		FlightBooking(int id, int capacity, int reserved);
		void printStatus();
		void setres(double r);
		int getres();
	private:
		int id;
		int capacity;
		int reserved;
};
void FlightBooking::printStatus()
{
  double percent = ((double)reserved/(double)capacity)*100 ;
  if(percent <= 105){
  std::cout << "Flight " << id << " : " << reserved << " / " << capacity  << " " << percent << "%" << " seats taken\n";
  }
  else{
    std::cout << "This flight is too overbooked to fly" << std::endl;
  }
}
void FlightBooking::setres(double s){
if(reserved < 0){
    this->reserved = 0;
  }
  else{
  this->reserved = s;
  }}
int FlightBooking::getres(){
  return this->reserved;
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
  this->id = id;
  this->capacity = capacity;
  
  if(reserved < 0){
    this->reserved = 0;
  }
  else{
  this->reserved = reserved;
  }
// Save data to members
}
int main() {
	int choice;
	int reserved = 0.0,
	capacity = 0.0;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	booking.printStatus();

	std::cout << "1: Add Reservations \n 2: Calcel Reservation \n 3:Quit"<<std::endl;
	std::cin >> choice;
	switch(choice){
	case 1 : 
      std::cout << "Enter Amount to add"; 
      int temp1; 
      std::cin >> temp1; 
      booking.setres(booking.getres()+ temp1); 
      booking.printStatus();
    break;
	case 2 :
      std::cout << "Enter Amount to remove"; 
      int temp2; 
      std::cin >> temp2; 
      booking.setres(booking.getres()- temp2); 
      booking.printStatus();
    break;
	case 3 :return 0; 
    break;
  
  
  
}




return 0;
}

