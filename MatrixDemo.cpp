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
	AdjacencyMatrix* am = new AdjacencyMatrix("graph1.txt");
	return EXIT_SUCCESS;
}

