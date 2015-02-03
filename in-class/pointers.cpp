#include <iostream>

using namespace std;
// g++ -g pointers.cpp -o pointers.exe
// gdb pointers.exe

int main(){
	// declaring a variable allocates space in memory for that variable
	// that memory is in the stack
	int variable;
	// lets initialize it. this just sets the value_comp
	variable = 500;
	int* pointer;
	// initialize the pointer to where variable happens to be
	pointer = &variable;
	// *pointer de-references the pointer (we get what it's pointing at)
	cout << *pointer << endl;
	
	
	
	
	return 0;
	// so the compiler won't complain
	
	
	// set breakpoints tells the debugger where to stop
	// break main // sets a breakpoint on main
	// run[cmdline arguments] // run program with command line
}