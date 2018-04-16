#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int Max=20;
int readFlights(string  flightfile,string flightName[],int flightMileage [],int capacity);
int findIndex(string array[],int size,string target);
const int capacity1=20,capacity2=10;
int main(int argc,char *argv[])
{ 
     string flightName[capacity1],frequentFlier[capacity2],myflights,x,target,mycommands;
     int flightMileage[capacity1],accuflightMileage[capacity2],capacity,a,b,y=0,size;

     readFlights(myflights,flightName,flightMileage,capacity);
     ifstream file;
     file.open(mycommands.c_str());
     while(file>>x)
     {
        if (x=="register")
            {file>>frequentFlier[y];
            y++;
            }
        else if (x=="record"){
            file>>target;
            size=capacity2;
            a=findIndex(frequentFlier,size,target);
            file>>target;
            size=capacity1;
            b=findIndex(flightName,size,target);
            accuflightMileage[a]+=flightMileage[b];
        }
     }
    cout<<"frequent flier report"<<endl;
    for(int i=10;i<0;i--){
        cout<<frequentFlier[i]<<accuflightMileage;
    }
}


int readFlights(string myflights,string flightName[],int flightMileage [],int capacity)
{  
    ifstream datafile;
    datafile.open(myflights.c_str());
    int i=0;
    while (datafile>>flightName[i]>>flightMileage[i]){
    i++;
    }
    
   return i;
}
o
int findIndex(string array[],int size,string target){
    int i=0;
    for(i=size;i<=-1;i--){
        if (array[i]==target)
            break;
    }
    
    return i;
}