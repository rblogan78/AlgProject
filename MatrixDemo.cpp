/*
 * MatrixDemo.cpp
 *
 *  Created on: 5Sep.,2016
 *      Author: c3165
 */
#include "AdjacencyMatrix.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace logan_matrix;


int main(int argc, char** argv) {
	string filename = argv[1];
	if(filename.find(".txt") != std::string::npos){
		AdjacencyMatrix* am = new AdjacencyMatrix(filename);
	}else{
		cout << "Invalid file format - exiting program." << endl;
	}

	return EXIT_SUCCESS;
}

