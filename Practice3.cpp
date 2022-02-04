#include <iostream>
using namespace std;

// Put the person struct here
struct person{
  string firstName;
  string secondName;
  person();
  person(string frstName, string lastName);
};




person::person(){
  firstName = "unknown";
  secondName = "unknown";
}
int main() {
	// Create two instances of person here, and assign the names.
  person person1;
  cout << "Person 1 is " << person1.firstName << " " << person1.secondName << endl;

  person1.firstName = "Dorian";
  person1.secondName = "Gray";

  person person2("Linus", "Van Pelt");
    cout << "Person 2 is " << person2.firstName << " " << person2.secondName << endl;

  person2.firstName = "Charlie";
  person2.secondName = "Brown";


	// Add the prints here
  cout << "Person 1 is " << person1.firstName << " " << person1.secondName << endl;

  cout << "Person 2 is " << person2.firstName << " " << person2.secondName << endl;

	return 0;
}
