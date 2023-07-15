/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:54:36 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 09:54:36 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "dog constructor called\n";
	_brain = new Brain;
	setType("Dog");
}

Dog::~Dog() {
	std::cout << "dog destructor called\n";
	delete _brain;
}

void Dog::makeSound( void ) const{
	std::cout << "*woof woof*\n";
}
