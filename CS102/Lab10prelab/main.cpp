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
    int i=0,f;
int number=0;
    ifstream file;
    vector<string> name;
    vector<double> nonvnum;
    vector<double>vnum;
    vector<double>dvnum;
    string a,e;
    double b,c,d;
    i=0;  
    if(argc!=3){
    cout<<"Requires a file and number of burrows to print";
   return 0;
   }


    e=argv[1];
    file.open(argv[1]);
    if (file.fail()){
        cout<<"Unable to open input file '"<<e<<"'"<<endl;
        return 0;
    }
   while(file>>a>>b>>c>>d)
{
i++;
name.push_back(a);
nonvnum.push_back(b);
vnum.push_back(c);
dvnum.push_back(d);
}
   
   number=std::stod(argv[2]);
    if(number>i)
       number=i;
   
      
   
    cout<<"Top "<<number<<" Crime Ridden Areas In Baltimore"<<endl;
    
    cout<<left<<setw(25)<<"District ";
    cout<<" "<<left<<setw(4)<<"VC "; 
    cout<<" "<<left<<setw(4)<<"DV "; 
    cout<<" "<<left<<setw(4)<<"NVC"<<endl;
    cout<<endl;
    i=number;
    for(f=0;f<i;f++){
    cout<<left<<setw(25)<<name[f];
    number=vnum[f]*10;
    cout<<" "<<left<<setw(4)<<number; 
    number=dvnum[f]*10;
    cout<<" "<<left<<setw(4)<<number; 
    number=nonvnum[f]*10;
    cout<<" "<<left<<setw(4)<<number<<endl;
}

    file.close();
    return 0;
}