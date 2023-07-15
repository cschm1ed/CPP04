
#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n\n";

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n\n";

	delete j;
	delete i;
	delete meta;
	std::cout << "\n\n";

	Animal	bestia;
	Cat		Tom;
	Cat		Jerry;
	Dog		Pitbull;
	std::cout << "\n\n";

	Tom.makeSound();
	Pitbull.makeSound();
	bestia.makeSound();

	Jerry.setType("mauzer");
	Tom = Jerry;

	std::cout << Tom.getType() << "\n";
	Tom.makeSound();

	std::cout << "\n\n";

	const wrongAnimal* wrongmeta = new wrongAnimal();
	const wrongAnimal* wrong = new wrongCat();
	std::cout << "\n\n";

	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound(); //will output the cat sound!
	wrongmeta->makeSound();
	std::cout << "\n\n";

	delete wrong;
	delete wrongmeta;

	return 0;
}
