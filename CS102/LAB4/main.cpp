#include <iostream>
using namespace std;
int main( )
{
    int i,count,flag;
    double r,sum,avg,avgsum,min,max,j,x;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);        
    cout.precision(3);

    //these statements are here so the user 
    //can enter how many times the loop should
	
    while (true){
        do{
            cout<<"Please enter the size of the data set (1-10 elements or 0 to quit): ";
            cin>>j;
           if(j<0||j>10)
               cout<<endl;
        }while(j<0||j>10);
        
         if (j==0)
                break;
    //this is here so the user can enter
    //in multiple sets of data
    cout<<"Please enter your data: ";
        sum=0;
        for (i=0;i<j;i++)
            {cin>>r;
            sum=r+sum;}
            
        avg=sum/j;
        cout<<endl<<"average = "<<avg<<endl<<endl;
        avgsum=avg+avgsum;
        
        count++;

        if(flag==1)
            {min=avg;
            max=avg;
            flag=0;}
        else
            if(avg<min)
                min=avg;
            if(avg>max)
                max=avg;
                 }
    //this is here to show
    // a more reasonable output for the user
    
    //this here to calculate the average 
    //for the user
    
    
    //this here to show the average to the user
      x=(avgsum-min-max)/(count-2);
    cout<<endl<<"final average = "<<x;
    
	return 0;
}