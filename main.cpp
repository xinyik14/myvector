// main.cpp
//Tests all functionality of the My_vec class.

#include <iostream>
#include <stdexcept>
#include "My_vec.h"

int main() {
	try {

		My_vec vec_a;
		int i = 0;
		while (i < 13) {
			vec_a.insert_at_rank(i, 'A' + i);
			i++;
		}

		// define an object v of My_vec type
		// insert 'B' at the rank 0 into the vector v
		// use the overloaded operator << to display vector elements
		// display the vector v size

		// insert 'A' at the rank 0 into the vector v
		// use the overloaded operator << to display vector elements
		// display the vector v size

		// insert 'D' at the rank 10 into the vector v
		// use the overloaded operator << to display vector elements
		// display the vector v size

		// remove a character at the rank 2 from the vector v
		// use the overloaded operator << to display vector elements
		// display the vector v size

		// replace a character at the rank 2 by the character 'E'
		// use the overloaded operator << to display vector elements
		// display the vector v size

		// create a copy v1 of the vector v using a copy constructor
		// use the overloaded operator << to display the vector v1
		// replace a character at the rank 2 of the vector v1 with the character 'Y'
		// use the overloaded operator << to display vector v1 elements

		// define an object v2 of My_vec type
		// insert 'K' at the rank 0 into the vector v2
		// use the overloaded operator << to display vector elements
		// display the vector v2 size

		// test the assignment operator and copy the vector v1 to v2
		// use the overloaded operator << to display vector v2
		// display the vector v2 size

		// test the function find_max_index using v2
		// test the function sort_max using v2

		// replace in the vector v2 a character at the rank 14 with 'S'

	}

	catch (exception &error) {
		cerr << "Error: " << error.what() << endl;
	}
}
