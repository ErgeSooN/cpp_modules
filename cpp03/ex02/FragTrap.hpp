/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:56:02 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/05 14:56:02 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string const& name);
    FragTrap(FragTrap const& src);

    FragTrap& operator=(FragTrap const& frag);

    ~FragTrap();
    void highFiveGuys() const;
    void attack(std::string const& enemy);
};

#endif