/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:35 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:15:35 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

// Copy constructor
AAnimal::AAnimal(AAnimal const& src)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator
AAnimal& AAnimal::operator=(AAnimal const& animal)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    _type = animal.getType();
    return *this;
}

// Destructor
AAnimal::~AAnimal() { std::cout << "AAnimal destructor called" << std::endl; }

// Getter
std::string const& AAnimal::getType() const { return _type; }


