/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:36:54 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/15 11:36:54 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain {

public:
	Brain();
	~Brain();
	Brain(Brain&);
	Brain	&operator=( Brain const & );

	std::string *getIdeas() const;
	void 		setIdeas(std::string *ideas);

private:
	std::string *_ideas;

};

#endif
