#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
const int months=24;
int main()
{
    double flights,delays;
	double MONTHS[months];
    string x,y;
    int month=23;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(2);
    cout<<"Enter the airline: ";
    cin>>x;
    cout<<"Enter the airport: ";
    cin>>y;

    cout<<"Enter the flights and delays:";
    for(month;month>=0;month--){
        cin>>MONTHS[month];
        
    }
    cout<<endl;
    cout<<x<<" at "<<y<<":"<<endl<<endl;
    month=0;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(2);
    for(month;month<=23;){
        cout<<MONTHS[month+1]<<" "<<MONTHS[month]<<endl;
       month=month+2;
    }
    
	return 0;
}
