#include "My_vec.h"

const int default_capacity = 10;

My_vec::My_vec() {
	size = 0;
	capacity = default_capacity;
	ptr = new char[capacity];
}

My_vec::My_vec(const My_vec& vec) {

	this->size = vec.size;
	this->capacity = vec.capacity;
	ptr = new char[capacity];
	memcpy(ptr, vec.ptr, vec.size);

}

My_vec::~My_vec() {
	delete ptr;
}

My_vec& My_vec::operator=(const My_vec& vec) {
	if (this != &vec) {
		delete ptr;
		this->size = vec.size;
		this->capacity = vec.capacity;
		ptr = new char[capacity];
		memcpy(ptr, vec.ptr, vec.size);
	}
	return *this;

}

int My_vec::get_size() const {
	return size;
}

int My_vec::get_capacity() const {
	return capacity;
}

// bool My_vec::is_empty() const {
// return (size == 0);
// }
//
// char& My_vec::operator[](int i) const {
// if (i<size && i>0){
// return ptr[i];
// }
// throw" invalid rank.";
// }
//
// char& My_vec::operator[](int i){
// if (i<size && i>0) {
// return ptr[i];
// }
// throw"invalid rank.";
// }
//
// bool My_vec::is_empty() const{
//	 return (size==0);
// }
//
// char& My_vec::elem_at_rank(int r) const{
//
// }

void My_vec::insert_at_rank(int r, const char& elem) {
	if (r > size || r < 0) {
		throw "invalid rank.";
	}

	if (size == capacity) {
		capacity = 2 * capacity;
		char* temp = new char[capacity];
		memcpy(temp, ptr, size);
		delete ptr;
		ptr = temp;
	}

	int i = size;
	while (i > r) {
		ptr[i] = ptr[i - 1];
		i--;
	}
	ptr[r] = elem;
	++size;
}

