#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie();
int rollDice();
const int high=6;
int main( )
{
   
    int x,y;

   //This is here so the user can start up the
   //the random number generator
    cout<<"Enter a seed number: ";
    cin>>x;
    srand(x);
    char ii;

   //this do while is here so the game can restart itself  
    do{

   //this is here so that program can follow 
   //the rules. Each number responds to a different rule set
    switch(rollDice()){

   //case 2-3-12 are the losing sets
    case 2: cout<<"You lose"<<endl;
    
    break;
    case 3: cout<<"You lose"<<endl;
    
    break;
    case 12: cout<<"You lose"<<endl;
    
    break;

   //case 7-11 are the winning sets
    case 7: cout<<"You win"<<endl;
    
    break;
    case 11: cout<<"You win"<<endl;
    break;

   //the rest of the numbers are the redemption sets
   // will repeat until the same number comes up

    case 4: cout<<"Point is 4"<<endl;
    do{y=rollDice();
     if (y==4)
        break;
    else if (y==7)
        break;
    
    }while(1);
    if (y==4)
        {cout<<"You win"<<endl;}
    else
        {cout<<"You lose"<<endl;}
    
    break;
    case 5: cout<<"Point is 5"<<endl;
    do{y=rollDice();
    if (y==5)
        break;
    else if (y==7)
        break;
    
        
    }while(1);
    if (y==5)
        {cout<<"You win"<<endl;}
    else
        {cout<<"You lose"<<endl;}
    
    break;
    case 6:cout<<"Point is 6"<<endl;
    do{y=rollDice();
     if (y==6)
        break;
    else if (y==7)
        break;
    
    }while(1);
    if (y==6)
        {cout<<"You win"<<endl;}
    else
        {cout<<"You lose"<<endl;}
    
    break;
    case 8:cout<<"Point is 8"<<endl;
    do{y=rollDice();
     if (y==8)
        break;
    else if (y==7)
        break;
    
    }while(1);
    if (y==8)
        {cout<<"You win"<<endl;}
    else
        {cout<<"You lose"<<endl;}
    
    break;
    case 9:cout<<"Point is 9"<<endl;
    do{y=rollDice();
     if (y==9)
        break;
    else if (y==7)
        break;
    
    }while(1);
    if (y==9)
        {cout<<"You win"<<endl;}
    else
        {cout<<"You lose"<<endl;}
    
    break;
    case 10:cout<<"Point is 10"<<endl;
    do{y=rollDice();
     if (y==10)
        break;
    else if (y==7)
        break;
    
    }while(1);
    if (y==10)
        {cout<<"You win"<<endl;}
    else
        {cout<<"You lose"<<endl;}
    break;
    }
    
   //this is to repeat the game is the user wants
   //to do so again
    cout<<"\n";
    cout<<"Do you want to play the game again? ";
    cin>>ii;}
    while((ii=='y')||(ii=='Y'));
    return 0;
}

//this is here to simulate the action of rolling a die
int rollDie(){
return (rand()%high)+1;
}

//this here to sum the die rolls together 
//and to output the the sums for each simulated die roll
int rollDice(){
    int x=rollDie();
    int y=rollDie();
    int z=x+y;
    cout<<"You rolled "<<x<<" + "<<y<<" = "<<z<<endl;
    return z;
}