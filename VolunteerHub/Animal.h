#pragma once
#include <iostream>
#include <string>

using namespace std;
class Animal
{
public:
	virtual string say() const = 0;
	virtual string move() = 0;
	virtual Animal* clone() const = 0;
	//virtual string getName() const = 0;
	//virtual int getAge() const = 0;
	virtual ~Animal()
	{
		cout << "- the animal died" << endl;
	}
	//virtual void print() {
		//cout << getName() << " " << getAge << endl;
	//}
};
class Mammal: public Animal {};

class Bird:public Animal {};

class Reptile: public Animal {};
template<typename T>
class Creature : public T {
	string name;
	int age;
public:
	string getName() const { return name; }
	int getAge() const { return age; }
	Creature(const string& newName, int newAge) : name(newName), age(newAge) {}
};

class Fox : public Creature<Mammal>
{
public: 
	Fox(const string& name, int age) : Creature<Mammal>(name, age) {
		cout << "Fox is ready to hunt" << endl;
	}
	string say() const override { return "Yow - wow - wow"; }
	string move() override { return "Moves on paws"; }
	Fox* clone() const override { return new Fox(*this); }
};

class Crow : public  Creature<Bird>
{
public:
	Crow(const string& name, int age) : Creature<Bird>(name, age) {
		cout << "Crow is ready to go" << endl;
	}
	string say() const override { return "Karrr "; }
	string move() override { return "Flies"; }
	Crow* clone() const override { return new Crow(*this); }
};

class Dragon : public Creature<Reptile>
{
public:
	Dragon(const string& name, int age) : Creature<Reptile>(name, age) {
		cout << "The dragon has risen and seeks revenge" << endl;
	}
	string say() const override { return "GrrrrrAArgagrg"; }
	string move() override { return "Flies and moves on the ground"; }
	Dragon* clone() const override { return new Dragon(*this); }
	virtual ~Dragon()
	{
		cout << "It's impossible to kill a dragon, but you did it((( " << endl;
	}

};
