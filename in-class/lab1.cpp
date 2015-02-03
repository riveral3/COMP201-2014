#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]){		//argc = counter for the number of arguments and argv = whatever you put into the command line
	ifstream input;
	ofstream output;
	output.open("output.txt"); //opens output.txt and allows "output" to replace "cout" and "output" writes to output.txt instead of "cout" writing to the command line

	input.open(argv[1]);

	if (input.fail()){		//this is the code for when there is an error
		cout << "Hey! Pass a file in!" << endl;
		return 1;
	}

	int val;
	int sum = 0;
	output << "x\tx^2\tCurrent Sum" << endl << "=\t===\t===========" << endl; // this is the header for the actual input.txt file
	while (input >> val){
		sum = sum + val; // this is the equation to find the current sum
		cout << val << "\t" << pow(val, 2) << "\t" << sum << endl; // this is the code that prints out the values under "x" and "x^2", respectively
	}
	input.close(); //closes the input file
	output.close(); // closes the output file
	return 0;
}