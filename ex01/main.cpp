
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

	Animal* zoo[10];

	for (int x = 0; x < 10; x++) {
		if (x % 2) {
			zoo[x] = new Dog;
		}
		else {
			zoo[x] = new Cat;
		}
	}

	std::cout << "\n\n";

	for (int x = 0; x < 10; x++) {
		std::cout << x << " " << zoo[x]->getType() << " ";
		zoo[x]->makeSound();
	}

	std::cout << "\n\n";


	std::string*	ideas;
	ideas = zoo[0]->getBrain()->getIdeas();
	ideas[0] = "Thinking about other cats";

	std::cout << zoo[0]->getBrain()->getIdeas()[0] << "\n";

	std::cout << "\n\n";

	for (int x = 0; x < 10; x++) {
		delete zoo[x];
	}


	return 0;
}
