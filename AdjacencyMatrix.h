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

			void add_vertex(int i, int j);

			void remove_vertex(int i, int j);

			bool adjacent (int i, int j) const;

			void display();

			virtual ~AdjacencyMatrix();
	};
}
