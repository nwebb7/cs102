//Nathan Webb
//Lab 3:35

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

class ShoppingItem {
int quantity;
double cost;
string name;
public:
//Blank constructor (does nothing)
ShoppingItem();
//Three argument constructor
//Sets quantity, cost, and name (private variables)
//to what is given as arguments
ShoppingItem(int _qty, double _cost, const string &_name);
int getQuantity() const;
double getCost() const;
string getName() const;
// returns quantity*cost
double getTotalCost() const;
};

string capitalize(string s);


int main(int argc, char **argv)
{

	
	//vars
	int q = 0;
	double p = 0.00, total, overall = 0.00;
	string i;
	bool first = true;
	double min, max;
	string minItem, maxItem;
	string firstname, lastname;
	string line, tmp_str;
	
	
	if (argc != 3){
		cout << "Requires two command line arguments.";
		return 0;
	}
		
	ifstream infile;
	infile.open(argv[1]);
	
	if(infile.fail()){
		cout << "Cannot open file " << argv[1] << ".";
		return 0;
	}


	//outstream
	ofstream outfile;
	outfile.open(argv[2]);
	
	if(outfile.fail()){
		cout << "Cannot open file " << argv[2] << ".";
		return 0;
	}
	
	
	
	istringstream sin;
	
	while(getline(infile,line)){
		sin.clear();
		sin.str(line); 
		if(sin >> q){
			if(q != -1){
				sin >> p >> i;
				//while loop to read until end of buffer
				while (sin >> tmp_str){
					i += " " + tmp_str;
                           }
			total = q * p; //goes inside the if condition
			overall += total;
			if(first == true){
				min = p;
				max = p;
				minItem = i;
				maxItem = i;
				first = false;
			}else{
				if(min > p){
					min = p;
					minItem = i;
				}
				if (max < p){
					max=p;
					maxItem = i;
				}
			}
			outfile << left << setw(15) << i << right << " " << setw(3) << q << " " << right << setw(6) << setprecision(2) << fixed << showpoint << p << " " << right << setw(7) << setprecision(2) << fixed << showpoint << total << endl;
		}else{
			sin >> lastname >> firstname;
			outfile << "\ncheapest item = " << minItem;
			outfile << "\nmost expensive item = " << maxItem;
			outfile << "\ntotal cost = " << setprecision(2) << fixed << showpoint << overall;
			outfile << "\nshopper = " << capitalize(firstname) << " " << capitalize(lastname) << endl <<endl;
			
			overall = 0;
			first = true;
			}
		}
	}
	

	infile.close();
	outfile.close();
	return 0;
}

string capitalize(string s){
	string ret = s;
	ret[0] = toupper(ret[0]);
	for(int i = 1; i < ret.length(); i++){
		ret[i] = tolower(ret[i]);
	}
	return ret;
}