#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;

const int Max=20;
int findmin(int array[],int size);
int findmax(int array[],int size);
int main(int argc,char *argv[] )
{
	string flights[Max];
    int distance[Max];
    int i=0;
    ifstream file;
    if(argc!=2){
        cout<<"not enough arguments."<<endl;
        return 0;
    }
    
    file.open(argv[1]);
    if (file.fail()){
        cout<<"yeh"<<endl;
        return 0;
    }
    
    while(file>>flights[i]>>distance[i]){
        i++;
    }
    
    for (int j=0;j<i;j++){
        cout<<flights[j]<<" "<<distance[j]<<endl;
    }
    int min=findmin(distance,i);
    int max=findmax(distance,i);
}

int findmin(int array[],int size){
    int min=array[0];
    int index=0;
    for(int i=0;i<size;i++){
        if (array[i]<min){
          min=array[i];
          index=i;
        }
    }
    return index;
}

int findmax(int array[],int size){
    int max=array[0];
    int index=0;
    for(int i=0;i<size;i++){
        if (array[i]>max){
          max=array[i];
          index=i;
        }
    }
    return index;
}