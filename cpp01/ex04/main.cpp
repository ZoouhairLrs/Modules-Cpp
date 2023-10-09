/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:45:18 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/28 02:06:18 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int main(int ac, char *av[]) {
    // Check for the correct number of command-line arguments
    if (ac != 4) {
        cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << endl;
        return 1;
    }

    // Extract the command-line arguments
    string filename = av[1];
    string s1 = av[2];
    string s2 = av[3];

    // Open the input file for reading
    ifstream inputFile(filename.c_str());
    if (!inputFile) {
        cerr << "Error: Cannot open file " << filename << " for reading" << endl;
        return 2;
    }

    // Create the output file with ".replace" appended to the filename
    string outputFilename = filename + ".replace";
    ofstream outputFile(outputFilename.c_str());
    if (!outputFile) {
        cerr << "Error: Cannot open file " << outputFilename << " for writing" << endl;
        return 3;
    }

    // Read and process the input file line by line
    string line;
    while (getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << '\n'; // Write the modified line to the output file
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    cout << "File replacement completed successfully. Output saved as " << outputFilename << endl;

    return 0;
}
