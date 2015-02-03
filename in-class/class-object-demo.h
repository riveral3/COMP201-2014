#include <iostream>

using namespace std;

class Animal {
	
};

int main(){
public:
	// This is the default constructor
	Animal(string thing){
		greeting = thing;
	}
	void speak() {
		cout << greeting;
	}
private:
	string greeting
	
};
int main(){
	// If classes are the cookie cutter, and the objects are the cookies
	// then by analogy the cookie dough is memory
	// these animals live on the stack
	Animal lion("roar"); // this calls the default constructor
	Animal cat("wuff");
	Animal elephant("meow");
	lion.speak();
	cat.speak();
	elephant.speak();
	
	// these animals live on the heapcheck
	Animal * tiger = new Animal("roar, as well");
	Animal * liger = new Animal("LOL");
	Animal * person = new Animal("Don't eat me");
	
	
}
	
	
	
	
	
}


