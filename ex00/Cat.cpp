/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:54:39 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 09:54:39 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :  Animal() {
	setType("Cat");
	std::cout << "cat constructor called\n";
}

Cat::~Cat() {
	std::cout << "cat destructor called\n";
}

void Cat::makeSound( void ) const {
	std::cout << "*Meow Meow motherfucker!*\n";
}
