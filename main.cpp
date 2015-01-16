// main.cpp
//Tests all functionality of the My_vec class.

#include <iostream>
#include <stdexcept>
#include "My_vec.h"

int main() {
	try {

		My_vec v;
		// define an object v of My_vec type
		v.insert_at_rank(0,'B');
		// insert 'B' at the rank 0 into the vector v
		cout << v;
		cout<<"Supposed to print: [B ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v is: " << v.get_size() << endl;
		cout<<"Supposed to print: 1"<<endl;
		// display the vector v size
		v.insert_at_rank(0,'A');
		// insert 'A' at the rank 0 into the vector v
		cout << v;
		cout<<"Supposed to print: [A B ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v is: " << v.get_size() << endl;
		cout<<"Supposed to print: 2"<<endl;
		// display the vector v size

		int i = 0;
		while (i < 13) {
			v.insert_at_rank(i, 'C' + i);
			i++;
		}
		cout<<v;
		cout<<"Supposed to print: [C D E F G H I J K L M N O A B ]"<<endl;
		cout << "size of v is: " << v.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;


		v.insert_at_rank(10,'D');
		// insert 'D' at the rank 10 into the vector v
		cout<<v;
		cout<<"Supposed to print: [C D E F G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v is: " << v.get_size() << endl;
		cout<<"Supposed to print: 16"<<endl;
		// display the vector v size

		v.remove_at_rank(2);
		// remove a character at the rank 2 from the vector v
		cout<<v;
		cout<<"Supposed to print:[C D F G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v is: " << v.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// display the vector v size

		v.replace_at_rank(2,'E');
		// replace a character at the rank 2 by the character 'E'
		cout<<v;
		cout<<"Supposed to print:[C D E G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v is: " << v.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// display the vector v size

		My_vec v1(v);
		// create a copy v1 of the vector v using a copy constructor
		cout<<v1;
		cout<<"Supposed to print:[C D E G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display the vector v1
		v1.replace_at_rank(2,'Y');
		// replace a character at the rank 2 of the vector v1 with the character 'Y'
		cout<<v1;
		cout<<"Supposed to print:[C D Y G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display vector v1 elements

		My_vec v2;
		// define an object v2 of My_vec type
		v2.insert_at_rank(0,'K');
		// insert 'K' at the rank 0 into the vector v2
		cout<<v2;
		cout<<"Supposed to print:[K ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v2 is: " << v2.get_size() << endl;
		cout<<"Supposed to print: 1"<<endl;
		// display the vector v2 size

		v2 = v1;
		// test the assignment operator and copy the vector v1 to v2
		cout<<v2;
		cout<<"Supposed to print:[C D Y G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display vector v2
		cout << "size of v2 is: " << v2.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// display the vector v2 size

		cout<<"Max index is"<<find_max_index(v2, v2.get_size())<<endl;
		cout<<"Supposed to print: 2"<<endl;
		// test the function find_max_index using v2
		sort_max(v2);
		cout<<v2;
		cout<<"Supposed to print: [A B C D G H I J K L D M N O Y]"<<endl;
		// test the function sort_max using v2

		// replace in the vector v2 a character at the rank 14 with 'S'
	}

	catch (exception &error) {
		cerr << "Error: " << error.what() << endl;
	}
}
