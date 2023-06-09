/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:39 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:15:39 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called " << std::endl;
}

Brain::Brain(Brain const& src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const& brain)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = brain.getIdea(i);
    }
    return *this;
}

/* Getter */
std::string const& Brain::getIdea(int index) const { return _ideas[index]; }

/* Setter */
void Brain::setIdea(int index, std::string const& idea) { _ideas[index] = idea; }
