/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:33:59 by skwon2            #+#    #+#             */
/*   Updated: 2024/12/03 20:46:24 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;
    
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Address of \"str\" : " << &str << std::endl;
    std::cout << "Address of \"strPTR\" pointed at: " << ptr << std::endl; //address held by stringPTR which in value
    std::cout << "Address of \"strPTR\" : " << &ptr << std::endl; //address stringPTR itself
    std::cout << "Address of \"strREF\" : " << &ref << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Value of \"str\" : " << str << std::endl;
    std::cout << "Value of \"strPTR\" pointed at: " << *ptr << std::endl; // value pointed to stringPTR
    std::cout << "Value of \"strPTR\" : " << ptr << std::endl; // value pointed to stringPTR
    std::cout << "Value of \"strREF\" : " << ref << std::endl;
    std::cout << "--------------------------------" << std::endl;
    return 0;
}