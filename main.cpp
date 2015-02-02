// main.cpp
//Tests all functionality of the My_vec class.

#include <iostream>
#include <stdexcept>
#include "My_vec.h"
#include "mineral.h"


int main() {
	try {

		Mineral Talc("Talc", 1);
		Mineral Gypsum("Gypsum", 2);
		Mineral Calcite("Calcite", 3);
		Mineral Fluorite("Fluorite", 4);
		Mineral Apatite("Apatite", 5);
		Mineral Orthoclase("Orthoclase", 6);
		Mineral Quartz("Quartz", 7);
		Mineral Topaz("Topaz", 8);
		Mineral Corundum("Corundum", 9);
		Mineral Diamond("Diamond", 10);

		My_vec<Mineral> min;
		// define an object of Mineral class 'min' of My_vec type
		min.insert_at_rank(0,Talc);
		// insert 'Talc' at the rank 0 into the vector 'min'
		cout<<min;
		cout<<"supposed to be [Talc H: 1]"<<endl;
		// use the overloaded operator << to display vector elements

		cout << "size of min is: " << min.get_size() << endl;
		cout<<"Supposed to print: 1"<<endl;
		// display the vector min size


		min.insert_at_rank(0,Gypsum);
		// insert 'Gypsum' at the rank 0 into the vector min
		cout << min;
		cout<<"Supposed to print: [Gypsum H: 2 Talc H: 1]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of min is: " << min.get_size() << endl;
		cout<<"Supposed to print: 2"<<endl;
		// display the vector min size

		min.insert_at_rank(2,Calcite);
		min.insert_at_rank(3,Fluorite);
		min.insert_at_rank(4,Apatite);
		min.insert_at_rank(5,Orthoclase);
		min.insert_at_rank(6,Quartz);
		min.insert_at_rank(7,Topaz);
		min.insert_at_rank(8,Corundum);
		min.insert_at_rank(9,Diamond);
		// insert 10 elements into the vector

		
		cout<<min;
		cout<<"Supposed to print: [ Gypsum H: 2 Talc H: 1 Calcite H: 3 Fluorite H: 4 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of min is: " << min.get_size() << endl;
		cout<<"Supposed to print: 10"<<endl;
		// display the vector min size

		min.remove_at_rank(2);
		// remove a character at the rank 2 from the vector min
		cout<<min;
		cout<<"Supposed to print:[ Gypsum H: 2 Calcite H: 3 Fluorite H: 4 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of min is: " << min.get_size() << endl;
		cout<<"Supposed to print: 9"<<endl;
		// display the vector min size

		min.replace_at_rank(2, Talc);
		// replace a character at the rank 2 by the Talc
		cout<<min;
		cout<<"Supposed to print:[Gypsum H: 2 Calcite H: 3 Talc H: 1 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of min is: " << min.get_size() << endl;
		cout<<"Supposed to print: 9"<<endl;
		// display the vector min size

		My_vec<Mineral> min1(min);
		// create a copy min1 of the vector min using a copy constructor
		cout<<min1;
		cout<<"Supposed to print:[Gypsum H: 2 Calcite H: 3 Talc H: 1 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// use the overloaded operator << to display the vector min1
		min1.replace_at_rank(0,Fluorite);
		// replace a character at the rank 0 of the vector min with the Fluorite
		cout<<min1;
		cout<<"Supposed to print:[Fluorite H: 4 Calcite H: 3 Talc H: 1 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// use the overloaded operator << to display vector min1 elements

		My_vec<Mineral> min2;
		// define an object min2 of My_vec type
		min2.insert_at_rank(0,Gypsum);
		// insert Gypsum at the rank 0 into the vector min2
		cout<<min2;
		cout<<"Supposed to print:[Gypsum H: 2]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of min2 is: " << min2.get_size() << endl;
		cout<<"Supposed to print: 1"<<endl;
		// display the vector min2 size

		min2 = min1;
		// test the assignment operator and copy the vector min1 to min2
		cout<<min2;
		cout<<"Supposed to print:[Fluorite H: 4 Calcite H: 3 Talc H: 1 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// use the overloaded operator << to display vector v2
		cout << "size of min2 is: " << min2.get_size() << endl;
		cout<<"Supposed to print: 9"<<endl;
		// display the vector min2 size

		cout<<"Max index is"<<find_max_index(min2, min2.get_size())<<endl;
		cout<<"Supposed to print: 8"<<endl;
		// test the function find_max_index using min2
		sort_max(min2);
		cout<<min2;
		cout<<"Supposed to print: [Talc H: 1 Calcite H: 3 Fluorite H: 4 Apatite H: 5 Orthoclase H: 6 Quartz H: 7 Topaz H: 8 Corundum H: 9 Diamond H: 10]"<<endl;
		// test the function sort_max using min2

		
	}

	catch (exception &error) {
		cerr << "Error: " << error.what() << endl;
	}
}