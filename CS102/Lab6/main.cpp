#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//these are the functions that are to be 
//selected by the user
double getcentimeters(double inches);
double BMI(int weight,int height);
double DISTANCE(int xi,int yi,int xii,int yii);
void MinMax(int x,int y,int z,int min,int max);
void Modulus(int ex, int wi,int quotient,int remainder);

int main()
{
    //these are the ints organized by function
    //a is the variable for switch selection
    //i is to either continue the program or quit
    int a,i;
    int weight,height;
    int xi,yi,xii,yii;
    int x,y,z,min,max;
    //ex and wi were chosen because they sound
    //phonetically similar to x and y
    int ex,wi,quotient,remainder;
    //double for inches
    double inches;
    do{
    //this is a output statement to display to the user 
    //their options.
	cout<<"Please make a selection from the following menu"<<endl<<endl;
    cout<<"1. Inches to Centimeters"<<endl;
    cout<<"2. BMI"<<endl;
    cout<<"3. Distance Between Two Points"<<endl;
    cout<<"4. MinMax"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"6. Quit"<<endl<<endl;
    cout<<"Enter the number of the operation you wish to perform: ";

//this is here to select the right function    
cin>>a;

//this contains all the functions
switch(a){
    
    //this converts inches to cm
    case 1:
    cout<<"Enter inches: ";
    cin>>inches;
    //here to make the display of the number reasonable to the user 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(3);
    
    cout<<"centimeters = "<<getcentimeters(inches)<<endl<<endl;
    //i =0 signifies to the loop to do the switch again
    i=0;
    break;
    
    //this is here to find BMI
    case 2:
    cout<<"Enter height and weight: ";
    cin>>height>>weight;
    //again same as before this is for formatting
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(4);
    
    cout<<"BMI = "<<BMI(weight,height)<<endl<<endl;
    i=0;
    break;
    
    //This is for distance
    //very similar to before
    case 3:
    cout<<"Enter x1, y1, x2, y2: ";
    cin>>xi>>yi>>xii>>yii;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(2);
    cout<<"Distance = "<<DISTANCE(xi,yi,xii,yii)<<endl<<endl;
    i=0;
    break;
    
    //this is different because it uses a void func
    //output statement are contained in the void function
    case 4: 
    cout<<"Enter three integers: ";
    cin>>x>>y>>z;
    MinMax(x,y,z,min,max);
    cout<<endl;
    i=0;
    break;
    
    //similar to case 4
    //all output is contained to the function
    case 5:
    cout<<"Enter x / y: ";
    cin>>ex;
    cin>>wi;
    Modulus(ex,wi,quotient,remainder);
    cout<<endl;
    i=0;
    break;
    //exits out of the switch
    case 6:
    i=1;
    break;
    //anything else thats entered other than numbers 1-6
    //cause the switch to repeat
    default:
    i=0;
    break;
    
    }}while(i==0);
    
    
	return 0;
}

// this is here to calculate in to cm
//returns a double
double getcentimeters(double inches){
    return inches * 2.54;
}
//this to calc BMI
//transfered weight, height to doubles 
//to return the appropriate number
double BMI(int weight,int height){
    double x,y;
    x=weight;
    y=height;
    return ((x/(y*y))*703);
}
//calculates distance 
//nothing too special
double DISTANCE(int xi,int yi,int xii,int yii){
    double x1=xi,x2=xii,y1=yi,y2=yii;
    return sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
}
//finds min and max
// groups xandy then compares to z
//couts in the func
void MinMax(int x,int y,int z,int min,int max){
    if (x>=y) 
    {max=x;
    min=y;}
    else if (y>=x)
    {max=y;
    min=x;}
    
    if (z>=max)
    max=z;
    else if (z<=min)
    min=z; 
    cout<<"Min = "<<min<<", Max = "<<max<<endl;
}
//similar to last func
//nothing to different
void Modulus(int ex, int wi,int quotient,int remainder){
    quotient=(ex/wi);
    remainder=(ex%wi);
    cout<<"Quotient = "<<quotient<<", Remainder = "<<remainder<<endl;
}