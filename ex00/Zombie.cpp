/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:44:31 by skwon2            #+#    #+#             */
/*   Updated: 2024/12/03 20:58:45 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

    std::cout << "Zombie has created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie has destroyed" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {

    std::cout << _name << "Zombie has created" << std::endl;
}


void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}