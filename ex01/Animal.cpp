/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:54:29 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 09:54:29 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("meta animal") {
	std::cout << "animal constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const {
	return _type;
}

void Animal::setType(const std::string &type) {
	_type = type;
}

Animal	&Animal::operator=(const Animal &other) {
	_type = other._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "*meta animal sound*\n";
}

Brain*	Animal::getBrain( void ) {
	return _brain;
}
