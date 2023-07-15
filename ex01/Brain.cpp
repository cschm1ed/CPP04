/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:36:50 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 11:36:50 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called\n";
	_ideas = new std::string[100];
}

Brain::Brain(Brain& other){
	for (int i = 0; i < 100; i ++)
		_ideas[i] = other._ideas[i];
}

Brain	&Brain::operator=(Brain const &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i ++) {
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
	delete[] _ideas;
}

std::string *Brain::getIdeas() const {
	return _ideas;
}

void Brain::setIdeas(std::string *ideas) {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = ideas[i];
	}
}
