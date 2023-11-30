#include "Animal.h"
#include "Zoo.h"

int main() {
	{
		cout << "Part 1" << endl;
		Animal* d1 = new Dragon("Balerion",10000);
		cout << d1->say() << endl;
		delete d1;

	}
	{
		cout << "Part 2" << endl;
		Animal* d1 = new Dragon("Balerion", 234);
		Animal* f1 = new Fox("Polina", 19);
		Animal* c1 = new Crow("Crow", 23);
		Zoo* z1 = new Zoo();
		z1->addAnimal(d1);
		z1->addAnimal(f1);
		z1->addAnimal(c1);
		z1->walk();
	}
	/* {
		cout << "Part 3" << endl;
		Animal* d1 = new Dragon("Balerion", 234);
		d1->print();
		delete d1;
	}*/
}