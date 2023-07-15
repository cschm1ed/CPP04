/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:51:27 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 09:51:27 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string _type;

public:

	Animal();
	virtual ~Animal();

	Animal	&operator=( Animal const &other );

	std::string getType( void ) const;
	void 		setType( const std::string &type );

	virtual void makeSound( void ) const ;

};

#endif
