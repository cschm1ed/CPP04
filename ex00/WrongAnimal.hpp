/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:17:20 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 11:17:20 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class wrongAnimal {

protected:
	std::string _type;

public:

	wrongAnimal();
	~wrongAnimal();

	wrongAnimal	&operator=( wrongAnimal const &other );

	std::string getType( void ) const;
	void 		setType( const std::string &type );

	void makeSound( void ) const ;

};

#endif
