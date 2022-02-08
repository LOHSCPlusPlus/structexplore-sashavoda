#include <iostream>
using namespace std;

// Put the person struct here
struct person{
  string firstName;
  string secondName;
  person();
  person(string frstName, string lastName);
};

void changeLastName(person &personReference, string personLast){
  personReference.secondName = personLast;
}


person::person(){
  firstName = "unknown";
  secondName = "unknown";
}
void PrintPerson(person p){
   cout << "Person 1 is " << p.firstName << " " << p.secondName << endl;
}

int main() {
	// Create two instances of person here, and assign the names.
  person person1;
  PrintPerson(person1);

  person.firstName = "Dorian";
  person.secondName = "Gray";

  person person2("Linus", "Van Pelt");
    PrintPerson(person2);
  person2.firstName = "Charlie";
  person2.secondName = "Brown";


	// Add the prints here
 

  cout << "Person 2 is " << person2.firstName << " " << person2.secondName << endl;
  changeLastName(person2,"Torvalds");
  
    cout << "Person 2 is " << person2.firstName << " " << person2.secondName << endl;

	return 0;
}
