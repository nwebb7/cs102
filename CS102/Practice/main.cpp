#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[] )
{
string filename,a,b,c,outputfile;
int index=0;
ifstream file;

vector<string> firstn;
vector<string> lastn;
vector<string> party;
vector<vector<int>> statevotes;
vector<int> states;
vector<int> a1;
vector<int> a2;
vector<int> a3;
vector<int> a4;
vector<int> a5;
vector<int> a6;
vector<int> a7;
vector<int> a8;
vector<int> a9;
vector<int> a10;
vector<int> a11;
vector<int> a12;
vector<int> a13;

cin>>filename;
cin>>outputfile;
file.open(filename);

while(file>>a>>b>>c){
firstn.push_back(a);
lastn.push_back(b);
party.push_back(c);
index++;
}
vector<int> people[index];
vector<int> totalvotes[index];
int yesno,state,vote,indexholder,lister,x,i=1;
int whileloop=0;

do{

cout<<"1. Cast A Vote"<<endl;
cout<<"2. Leave/Exit"<<endl;
cin>>yesno;

if(yesno==2)
whileloop=1;
else if(yesno==1){
cout<<"Enter your state: ";
cin>>state;

cout<<"Enter the number of the candidate to vote for: "<<endl;
cin>>vote;

if(state==1)
a1.push_back(vote);
else if(state==2)
a2.push_back(vote);
else if(state==3)
a3.push_back(vote);
else if(state==4)
a4.push_back(vote);
else if(state==5)
a5.push_back(vote);
else if(state==6)
a6.push_back(vote);
else if(state==7)
a7.push_back(vote);
else if(state==8)
a8.push_back(vote);
else if(state==9)
a9.push_back(vote);
else if(state==10)
a10.push_back(vote);
else if(state==11)
a11.push_back(vote);
else if(state==12)
a12.push_back(vote);
else if(state==13)
a13.push_back(vote);
else;
{}
}
}while(whileloop!=1);

a1.push_back(-1);
a2.push_back(-1);
a3.push_back(-1);
a4.push_back(-1);
a5.push_back(-1);
a6.push_back(-1);
a7.push_back(-1);
a8.push_back(-1);
a9.push_back(-1);
a10.push_back(-1);
a11.push_back(-1);
a12.push_back(-1);
a13.push_back(-1);

statevotes.push_back(a1);
statevotes.push_back(a2);
statevotes.push_back(a3);
statevotes.push_back(a4);
statevotes.push_back(a5);
statevotes.push_back(a6);
statevotes.push_back(a7);
statevotes.push_back(a8);
statevotes.push_back(a9);
statevotes.push_back(a10);
statevotes.push_back(a11);
statevotes.push_back(a12);
statevotes.push_back(a13);

int maxp;
if(a13[0]!=-1){
x=a1.size();
x=x-1;
while(x>0){
i=a1[x];
people[i]++;
x--;
}
x=people.size()
x=x-1;
max=people[0];
maxp=0;
while(x>0){
if(people[x]>max)
max=people[x];
maxp=x;
}
totalvotes[x]=totalvotes[x]+18;
}


file.close();
cout<<"\n"<<"Winner of the 2016 Presidential Election:";