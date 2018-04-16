//STUDENT: Nathan Webb 
//Professor: Andreas Koschan
//Time: TTR 9:40
#include <iostream>
using namespace std;
int main( )
{
   //variables used in the equation to determine PI
    int mental_sharpness,age,i=1;
    double PI,key=1.1,fin=.83,mou=.67,desk=.97,lap=1.12,phone=1.14,tab=1.235;
   //variable to decide which if else statement to use and to decide if to continue
    char education_level,screen_size,y_n;
    //variable for different devices
    string input_device;

   //percisision to change output specific to 3 decimals
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(3);
    
    //beggining of loop that contains main part of the program
    //that should be repeated if the user decides to do so
    do {
   //statements to get user to enter information to be used
   //to decide which equation to use and the values used
   //in the equation
    cout<<"CSOZT Brain Trainer"<<endl<<endl;
    cout<<"Education level (a, c, or h): ";
    cin>>education_level;
    cout<<"Mental sharpness (1-10): ";
    cin>>mental_sharpness;
    cout<<"Age (in years): ";
    cin>>age;
    cout<<"Input device (keyboard, mouse, finger): ";
    cin>>input_device;
    cout<<"Screen size (d, l, p, t): ";
    cin>>screen_size;
    cout<<endl;

   //If else statements to decide which equation to use
   //first checks to see if you are highshcooler or have 
   // a lower mental sharpness. It then checks for college or 
   //advanced level
    if (mental_sharpness<=3 || education_level=='h')
        //high school grad
        PI = 3.71 * (405 + (5.8 * mental_sharpness * mental_sharpness)) / (2.2913513322 * age);
        else if (education_level=='c')
            //college grad
            PI = 5.17 * (393 + (6.3 * mental_sharpness * mental_sharpness)) / (1.117213218 * age);
        else if (education_level=='a')
           //advanced degree
           PI = 5.72 * (513 + (3.9 * mental_sharpness * mental_sharpness)) / (1.755249215 * age);
    
    //seperate if statment to decide what to multiply PI by a variable
    //decided by previous input by user
    //wrong input will end the program
    if (input_device=="mouse")
        PI=mou*PI;
        else if (input_device=="finger")
            PI=fin*PI;
        else if (input_device=="keyboard")
            PI=key*PI;
        else 
            {cout<<"Invalid input device";
            return 0;}
            
    //similar to previous if else statmen before that 
    // decide what to multiply PI by variable entered by user
    switch (screen_size){
        case 'd':
            PI=desk*PI;
            break;
        case 'l':
            PI=lap*PI;
            break;
        case 'p':
            PI=phone*PI;
            break;
        case 't':
            PI=tab*PI;
            break;
        default:
            cout<<"Invalid screen type";
            return 0;
    }

    //cout statement to show results to user    
    cout<<"PI = "<<PI<<endl; 
    //cout statement to ask for repetition of program
    cout<<"Repeat calculation (y/n): ";
    cin>>y_n;
    cout<<endl;
    //if statement to set i to a number either larger or smaller than 2 
    // to end the program or to begin again the previous output statments and calculations
    if (y_n=='y')
        i=1;
    else
        i=10;
    
    }  
    //ends the loop and ends the program
    while(i<2);
	return 0;
}