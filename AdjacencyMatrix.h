/*
 * AdjacencyMatrix.h
 *
 *  Created on: 5Sep.,2016
 *      Author: c3165020
 */


#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

namespace logan_matrix{
	class AdjacencyMatrix {
		private:
			int vertexCount;
			bool **adj;
		public:
			AdjacencyMatrix();

			AdjacencyMatrix(const std::string filename);

			void add_edge(int i, int j);

			void remove_edge(int i, int j);

			void display();

			virtual ~AdjacencyMatrix();
	};
}
