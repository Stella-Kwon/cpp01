/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:01:14 by skwon2            #+#    #+#             */
/*   Updated: 2024/12/03 23:55:04 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon{
    private:
        std::string _type; // even it gets const value it is able to fix cause it has its own address (it is not &)
    public:
        Weapon(const std::string& type); // better to put const in order to clear out the type will not get fixed while calling the function.
        ~Weapon();
        const std::string& getType() const; // read only that is why const :: using setType you can modify
        void setType(const std::string& new_type);
};

#endif