#pragma once
#include "Animal.h"
#include <vector>
class Zoo
{
	vector<Animal*> animals;

public:
	Zoo() {};
	//Функция, которая клонирует животное
	void addAnimal(Animal* newAnimal) {
		animals.push_back(newAnimal->clone());
	}
	void walk() {
		cout << "An animal walks through the zoo" << endl;
		for (auto i : animals)
			cout << i->say() << " " << i->move() << endl;
	}
	~Zoo() {
		for (auto i : animals)
			delete i;
	}
};

