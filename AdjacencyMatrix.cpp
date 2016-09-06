/*
 * AdjacencyMatrix.cpp
 *
 *  Created on: 5Sep.,2016
 *      Author: c3165020
 */

#include "AdjacencyMatrix.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
using namespace logan_matrix;

namespace logan_matrix{

		AdjacencyMatrix::AdjacencyMatrix() {
			vertexCount = 0;
			adj = new bool* [vertexCount];
			for(int i = 0; i<vertexCount; i++){
				adj[i] = new bool[vertexCount];
				for(int j = 0; j<vertexCount; j++){
					adj[i][j] = false;
				}
			}
		}

		AdjacencyMatrix::AdjacencyMatrix(const std::string filename) {
			string line = "";
			vector<string> tokens;
			ifstream myfile(filename.c_str());
			cout<<"File opened.\n";
			getline(myfile, line);
			string str1 = line;
			cout << str1 << "\n";
			vertexCount = atoi(str1.c_str());
			adj = new bool* [vertexCount];
			for(int i = 0; i<vertexCount; i++){
				adj[i] = new bool[vertexCount];
				for(int j = 0; j<vertexCount; j++){
					adj[i][j] = false;
				}
			}
			cout << "A matrix of " << vertexCount << "*" << vertexCount << " has been created.\n";
			int row = 1;
			while (!myfile.eof()){
				int edge = 0;
				getline(myfile, line);
				istringstream iss(line);
				copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(tokens));
				for(int i=0; i<tokens.size(); i++){	
					if(tokens[i].compare("1")==0){
						this->add_vertex(row,i+1);
					}
				}
				tokens.clear();
				cout << endl;
				row++;				
			}
			this->display();				
		}

		void AdjacencyMatrix::add_vertex(int i, int j) {
			if( i > vertexCount || j > vertexCount || i < 0 || j < 0){
				cout<<"Invalid edge!\n";
			}else{
				adj[i - 1][j - 1] = true;
				cout << "Edge created between vertex "<< i << " & " << j << endl;
			}
		}

		void AdjacencyMatrix::remove_vertex(int i, int j) {

		}

		void AdjacencyMatrix::display() {
			int i,j;
			for(i = 0; i < vertexCount; i++){
				for(j = 0; j < vertexCount; j++){
					cout << adj[i][j] << "  ";
				}
				cout << endl;
			}
		}

		AdjacencyMatrix::~AdjacencyMatrix() {

		}
}

