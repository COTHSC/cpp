/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:54:44 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 15:52:37 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     fileName;
    std::string     thatyMyLine;
    std::string     ogString;
    std::string     newString;
	size_t				pos;

    if (argc != 4)
    {
        std::cout << "Error, wrong number of arguments!" << std::endl;
        return 1;
    }
    fileName = argv[1];
    ogString = argv[2];
    newString = argv[3];
    infile.open(&fileName[0]);
    if (infile.good() == false)
    {
        std::cout << "Error, that file aint quite right." << std::endl;
        return 1;
    }
    outfile.open(&(fileName + ".replace")[0]);
    if (outfile.good() == false)
    {
        std::cout << "Error, that file aint quite right." << std::endl;
        return 1;
    }
    while(getline(infile, thatyMyLine))
    {
        while((pos = thatyMyLine.find(ogString)) != std::string::npos)
        {
            outfile << thatyMyLine.substr(0, pos);
			thatyMyLine = thatyMyLine.substr(pos + ogString.size(), std::string::npos);
			outfile << newString;
        }
		outfile << thatyMyLine << std::endl;
    }
    outfile.close();
    infile.close();
    return 0;
}
