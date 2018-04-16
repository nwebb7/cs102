//this program was created to help the user 
//find out the best possible month to fly
//with the least amount of delays plus some additional info
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
const int months=12;


void getdata(string& Airline, string& airport,double flights [],double delays [],int size);
double findMin(double array[],int size);
double findMax(double array[],int size);
void findPercent(double flights[],double delays[],double percentDelay[],int size);
double findAverage(double array3[],int size);

int main()
{       
        string Airline, airport;
        //this is here for the loops for flights,delays,and percentages
        //so they can compare from 1 to 12 to see what month they align to
        string month[months]={"December","November","October","September","August","July","June","May","April","March","February","January"};
        //these are the arrays used in this program
        double flights [months],delays [months], percentDelay[months];
        int size,x;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);        
        cout.precision(2);
        
        //function to get data that will be used for the later functions
        getdata(Airline,airport,flights,delays,size);
        //finds the relevant percentages from the flight,delay array to be put into 
        //percentage array
        findPercent(flights,delays,percentDelay,size);
        
        cout<<"For "<<Airline<<" at "<<airport<<":"<<endl<<endl;
        //preference for going from january to december
        //so the first max will be the first max month found
        //this is the same for all the other for loops in int main
        //declared size to be 11 repeatedly to make absolutely sure that size wont change
        //before each loop
        size=11;
        for(size;size>=0;size--){
            if(findMin(percentDelay,size)==percentDelay[size])
                break;}
        //month string will compare to size to find the right month
        //then function is called for the number
        //this is the same for all the rest of the output in main
        cout<<"The best month to fly is "<<month[size]<<" with "<<findMin(percentDelay,size)<<"% delays"<<endl;

        size=11;
        for(size;size>=0;size--){
            if(findMax(percentDelay,size)==percentDelay[size])
                break;}
        cout<<"The worst month to fly is "<<month[size]<<" with "<<findMax(percentDelay,size)<<"% delays"<<endl;
        
        //another precision func is called
        //to make output make more sense for the user
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);        
        cout.precision(1);
        
        size=11;
        for(size;size>=0;size--){
            if(findMax(flights,size)==flights[size])
                break;}
        cout<<"Most busy month is "<<month[size]<<" with "<<findMax(flights,size)<<" flights"<<endl;
        
        size=11;
        for(size;size>=0;size--){
            if(findMin(flights,size)==flights[size])
                break;}
        cout<<"Least busy month is "<<month[size]<<" with "<<findMin(flights,size)<<" flights"<<endl;
        
        size=11;
        for(size;size>=0;size--){
            if(findMin(delays,size)==delays[size])
                break;}
        cout<<"Month with fewest delays is "<<month[size]<<" with "<<findMin(delays,size)<<" delays"<<endl;
        cout<<"The average number of flights for "<<months<<" months is "<<findAverage(flights,size);
        cout<<" with an average of "<<findAverage(delays,size)<<" delays"<<endl; 
        
        return 0;
}

//again this is here to gather and store the data needed
void getdata(string& Airline, string& airport,double flights [],double delays [],int size){
    cout<<"Enter the airline: ";
    cin>>Airline;
    cout<<"Enter the airport: ";
    cin>>airport;
    cout<<"Enter the number of flights and number of delays:"<<endl;
    size=11;
    
    for(size;size>=0;size--){
        cin>>flights[size];
        cin>>delays[size];}       
}

//this is here to find the min of any array
double findMin(double array[],int size){
    size=11;
    double min=array[0],y;
    //compares last array to first and works its way down
    for (size;size>=1;size--){
        y=array[size];
            if (y<min){
                min=y;}}
    return min;
}

//this is exactly the same as min, but its a max 
double findMax(double array[],int size){
    size=11;
    double max=array[0],x;
    
    for (size;size>=1;size--){
        x=array[size];
            if (x>max){
                max=x;}}
    return max;
}

//this is here to find percentages from the two arrays and puts them into percent delay
//will go through each month and gets a percentage
void findPercent(double flights[],double delays[],double percentDelay[],int size){
    size=11;
    for(size;size>=0;size--){
        percentDelay[size]=(100.000*(delays[size]/flights[size]));}
}

//sums any array and finds the average
double findAverage(double array3[],int size){
    size=11;
    double average,sum=0;
    
    //sums all points in the array
    for(size;size>=0;size--){
        sum+=array3[size];}
    //finds average
    average=sum/months;
    return average;
}