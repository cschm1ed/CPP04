
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n\n";
	delete j;
	delete i;

	std::cout << "\n\n";

//	const Animal* abstract = new Animal();
//
//	abstract->makeSound();
//
//	delete abstract;

	return 0;
}
