/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:17:17 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 11:17:17 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

wrongAnimal::wrongAnimal() : _type("wrong animal") {
	std::cout << "wrong animal constructor called\n";
}

wrongAnimal::~wrongAnimal() {
	std::cout << "wrong Animal destructor called\n";
}

std::string wrongAnimal::getType() const {
	return _type;
}

void wrongAnimal::setType(const std::string &type) {
	_type = type;
}

wrongAnimal	&wrongAnimal::operator=(const wrongAnimal &other) {
	_type = other._type;
	return *this;
}

void wrongAnimal::makeSound() const {
	std::cout << "*wrong animal sound*\n";
}
