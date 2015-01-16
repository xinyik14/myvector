#include "My_vec.h"

const int default_capacity = 10;

My_vec::My_vec() {
	size = 0;
	capacity = default_capacity;
	ptr	 = new char[capacity];
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

bool My_vec::is_empty() const {
	return (size == 0);
}

char& My_vec::operator[](int i) const {
	if (i<size && i>=0){
		return ptr[i];
	}
	throw" invalid rank.";
}

char& My_vec::operator[](int i){
	if (i<size && i>=0) {
		return ptr[i];
	}
	throw"invalid rank.";
}

char& My_vec::elem_at_rank(int r) const{
	if(r>=0 && r<size){
		return ptr[r];
	}
	throw"invalid rank.";

}

void My_vec::insert_at_rank(int r, const char& elem) {
	if (r > size || r < 0) {
		throw"invalid rank.";
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

void My_vec::replace_at_rank(int r, const char& elem){
	if (r>=0 && r<size){
		ptr[r] = elem;
	}
	else {
		throw"invalid rank.";
	}
}

void My_vec::remove_at_rank(int r){
	if (r>=0 && r<size){
		while(r+1<size){
			ptr[r] = ptr[r+1];
			r++;
		}
		--size;
	}
	else {
		throw"invalid rank.";
	}
}

ostream& operator<<(ostream& out, const My_vec& vec){
	out<<"[";
	int size = vec.get_size();
	for(int i = 0; i<size; i++){
		out<< vec[i] <<" ";
	}
	out<<"]"<<endl;
	return out;
}

int find_max_index(const My_vec& v,int size){
	int v_size = v.get_size();

	if(size>v_size){
		throw"invalid rank.";
	}

	else if (size==1){
		return 0;
	}

	else {
		int prev = 0;
		int next = 1;
		while(next<size){
			if(v[prev]<v[next]){
				prev = next;
			}
			next ++;
		}
		return prev;
	}
}

void sort_max(My_vec& vec){
	int size = vec.get_size();
	My_vec temp;
	while(size>0){
		int max = find_max_index(vec, size);
		temp.insert_at_rank(0, vec[max]);
		vec.remove_at_rank(max);
		--size;
	}
	vec = temp;	
}