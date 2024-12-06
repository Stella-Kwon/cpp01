/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skwon2 <skwon2@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:33:59 by skwon2            #+#    #+#             */
/*   Updated: 2024/12/06 14:29:24 by skwon2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string Replace::replaceStr(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string res = line;
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) !=  std::string::npos)
    {
        res = res.substr(0, pos) + s2 + res.substr(pos + s1.length());
        pos += s2.length();
    }
    return (res);
}

void Replace::replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
        return ;
    // inputFile(filename) opens the file named filename for reading.
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        std::cout << "Inputfile:" << filename << " is not opened." << std::endl;
        return;
    }
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open())
    {
        std::cout << "outputfile: " << filename << ".replace is not opened." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        outputFile << replaceStr(line, s1, s2) << std::endl;
    }
    inputFile.close();
    outputFile.close();
}
        

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage : \"" << argv[0] << " filename s1 s1\" is the right syntax.\n";
        return 1;
    }
    Replace::replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}