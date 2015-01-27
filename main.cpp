// main.cpp
//Tests all functionality of the My_vec class.

#include <iostream>
#include <stdexcept>
#include "My_vec.h"

int main() {
	try {

		/* cout<<"First try, type: char"<<endl;

		My_vec<char> v;
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
		// insert 13 elements into the vector

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

		My_vec<char> v1(v);
		// create a copy v1 of the vector v using a copy constructor
		cout<<v1;
		cout<<"Supposed to print:[C D E G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display the vector v1
		v1.replace_at_rank(2,'Y');
		// replace a character at the rank 2 of the vector v1 with the character 'Y'
		cout<<v1;
		cout<<"Supposed to print:[C D Y G H I J K L D M N O A B ]"<<endl;
		// use the overloaded operator << to display vector v1 elements

		My_vec<char> v2;
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
		cout<<"Supposed to print: [A B C D D G H I J K L M N O Y]"<<endl;
		// test the function sort_max using v2

		v2.replace_at_rank(14, 'S');
		// replace in the vector v2 a character at the rank 14 with 'S'
		


*/









	cout<<"Second try, type: int"<<endl;

		My_vec<int> v_int;
		// define an object v_int of My_vec type
		v_int.insert_at_rank(0,2);
		// insert 2 at the rank 0 into the vector v_int
		cout << v_int;
		cout<<"Supposed to print: [2 ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v_int is: " << v_int.get_size() << endl;
		cout<<"Supposed to print: 1"<<endl;
		// display the vector v_int size
		v_int.insert_at_rank(0,1);
		// insert 1 at the rank 0 into the vector v_int
		cout << v_int;
		cout<<"Supposed to print: [1 2 ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v_int is: " << v_int.get_size() << endl;
		cout<<"Supposed to print: 2"<<endl;
		// display the vector v_int size

		int j = 0;
		while (j < 13) {
			v_int.insert_at_rank(j, 3 + j);
			cout<<"j:"<<j<<" elem:"<<3 + j<<endl;
			j++;
		}
		cout<<v_int;
		cout<<"Supposed to print: [3 4 5 6 7 8 9 10 11 12 13 14 15 1 2 ]"<<endl;
		cout << "size of v_int is: " << v_int.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// insert 13 elements into the vector

		v_int.insert_at_rank(10,4);
		// insert int 4 at the rank 10 into the vector v_int
		cout<<v_int;
		cout<<"Supposed to print: [3 4 5 6 7 8 9 10 11 12 4 13 14 15 1 2 ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v_int is: " << v_int.get_size() << endl;
		cout<<"Supposed to print: 16"<<endl;
		// display the vector v_int size

		v_int.remove_at_rank(2);
		// remove a character at the rank 2 from the vector v_int
		cout<<v_int;
		cout<<"Supposed to print:[3 5 6 7 8 9 10 11 12 4 13 14 15 1 2 ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v_int is: " << v_int.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// display the vector v_int size

		v_int.replace_at_rank(2,5);
		// replace a character at the rank 2 by the int 5
		cout<<v_int;
		cout<<"Supposed to print:[3 5 5 6 7 8 9 10 11 12 4 13 14 15 1 2]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v_int is: " << v_int.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// display the vector v_int size

		My_vec<int> v_int_1(v_int);
		// create a copy v_int_1 of the vector v_int using a copy constructor
		cout<<v_int_1;
		cout<<"Supposed to print:[3 5 5 6 7 8 9 10 11 12 4 13 14 15 1 2]"<<endl;
		// use the overloaded operator << to display the vector v_int_1
		v_int_1.replace_at_rank(2,25);
		// replace a character at the rank 2 of the vector v_int_1 with the int 25
		cout<<v_int_1;
		cout<<"Supposed to print:[3 25 5 6 7 8 9 10 11 12 4 13 14 15 1 2]"<<endl;
		// use the overloaded operator << to display vector v_int_1 elements

		My_vec<int> v_int_2;
		// define an object v_int_2 of My_vec type
		v_int_2.insert_at_rank(0,11);
		// insert 1 at the rank 0 into the vector v2
		cout<<v_int_2;
		cout<<"Supposed to print:[11 3 25 5 6 7 8 9 10 11 12 4 13 14 15 1 2 ]"<<endl;
		// use the overloaded operator << to display vector elements
		cout << "size of v_int_2 is: " << v_int_2.get_size() << endl;
		cout<<"Supposed to print: 1"<<endl;
		// display the vector v_int_2 size

		v_int_2 = v_int_1;
		// test the assignment operator and copy the vector v_int_1 to v_int_2
		cout<<v_int_2;
		cout<<"Supposed to print:[11 3 25 5 6 7 8 9 10 11 12 4 13 14 15 1 2]"<<endl;
		// use the overloaded operator << to display vector v_int_2
		cout << "size of v2 is: " << v_int_2.get_size() << endl;
		cout<<"Supposed to print: 15"<<endl;
		// display the vector v_int_2 size

		cout<<"Max index is"<<find_max_index(v_int_2, v_int_2.get_size())<<endl;
		cout<<"Supposed to print: 2"<<endl;
		// test the function find_max_index using v_int_2
		sort_max(v_int_2);
		cout<<v_int_2;
		cout<<"Supposed to print: [1 2 3 4 5 6 7 8 9 10 11 11 12 13 14 15 25]"<<endl;
		// test the function sort_max using v_int_2

		v_int_2.replace_at_rank(14, 19);
		// replace in the vector v_int_2 a character at the rank 14 with 19
	}

	catch (exception &error) {
		cerr << "Error: " << error.what() << endl;
	}
}