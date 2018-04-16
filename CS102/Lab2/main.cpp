//STUDENT: Nathan Webb 
//Professor: Andreas Koschan
//Time: TTR 9:40
#include <iostream>
using namespace std;
int main( )
{
    //variables for cookies, personal attributes, and gender specific BMR
    int weight,height,age,cookiesF,cookiesM;
    double BMRM,BMRF;
    char gender;
    cout.setf(ios::fixed);
    cout.precision(0);
    
    //output and input statements for users to enter information about themselves
    //this information will be used to determine the equation used and the numbers used in the equation
    cout<<"Please provide your basic information"<<endl;
    cout<<"male or female (m or f)? ";
    cin>>gender;
    cout<<"age in years? ";
    cin>>age;
    cout<<"weight in kilograms? ";
    cin>>weight;
    cout<<"height in centimeters? ";
    cin>>height;
    cout<<endl;
    
    //These are the equations to determine BMR. Uses previous cin statements to input numbers in
    //the variables
    //FEMALE
    BMRF = 447.593 + (9.247*weight) + (3.098*height) - (4.330*age);
    //MALE
    BMRM = 88.362 + (13.397*weight) + (4.799*height) - (5.677*age);
    //This equation calculates the number of cookies by dividing by the number of calories in a cookie
    cookiesF=BMRF/280;
    cookiesM=BMRM/280;
    
    //If statement to decide the output statements for the user. If the male is not 16 yet then
    //the output will be the same as the female output
    if (gender=='m' || age<=16)
        {cout<<"Your BMR = "<<BMRF<<endl;
        cout<<"You may eat "<<cookiesM<<" cookies"<<endl;}
        else
            cout<<"Your BMR = "<<BMRM<<endl;
            cout<<"You may eat "<<cookiesF<<" cookies"<<endl;
	
	return 0;
}