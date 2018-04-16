#include <iostream>
using namespace std;
int main( )
{

 int number_of_miles, steps_per_mile, total_steps,integer_miles;
 double fractional_miles, feet;
 
 //Output and Input statements for user to enter information
 cout << "Press return after entering a number." << endl;
 cout << "Enter the total number of steps walked: ";
 cin >> total_steps;
 cout << "Enter the number of steps required to walk a mile: ";
 cin >> steps_per_mile;
 cout<< endl;
 
 //Calculation to put number of steps walked into miles
 fractional_miles = (total_steps * 1.0) / steps_per_mile; 
 //Output statements to show calculated information
 cout << "If you have walked " << total_steps << " steps" << endl;
 cout << "and it takes " << steps_per_mile << " steps to walk a mile," << endl;
 cout << "then you have walked " << fractional_miles << " miles." << endl;
 
 //More calculations to take the decimal place of the miles and turn it into steps
 integer_miles = total_steps / steps_per_mile;
 feet = total_steps % steps_per_mile * (5280.0 / steps_per_mile); 
 cout<< endl;
 cout<< "You also have walked "<<integer_miles<<" miles and "<< feet<<" feet";
 return 0;
} 
