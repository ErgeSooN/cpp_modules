/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:15 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:15:15 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;
public:
    /* default constructor */
    Dog();

    /* copy constructor */
    Dog(Dog const& src);

    /* Copy assignment operator */
    Dog& operator=(Dog const& dog);

    /* destructor */
    virtual ~Dog();

    /* getter */
    std::string const& getIdea(int i) const;

    /* setter */
    virtual void setIdea(int i, std::string const& idea);

    /* public methods */
    virtual void makeSound() const;
    virtual void printIdeas() const;
};

#endif