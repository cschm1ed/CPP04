/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:17:25 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 11:17:25 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

wrongCat::wrongCat() :  wrongAnimal() {
	setType("Cat");
	std::cout << "wrongcat constructor called\n";
}

wrongCat::~wrongCat() {
	std::cout << "wrongcat destructor called\n";
}

void wrongCat::makeSound( void ) const {
	std::cout << "*wrong cat hisses*\n";
}
