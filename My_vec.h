/*My_vec.h
Xinyi Zhang 
Header file for a vector data structure.
*/
#ifndef MY_VEC_H_
#define MY_VEC_H_
#include <ostream>
#include <cstring>

using namespace std;
	

template <class CType>
class My_vec{
	
	//member variables
	int size, capacity;
	CType *ptr;
	
public:	
	//member functions
	My_vec();
	~My_vec();
	My_vec(const My_vec<CType>& vec);
	My_vec<CType>& operator=(const My_vec<CType>& vec);
	int get_size() const;
	int get_capacity() const;
	CType& operator[](int i) const;
	CType& operator[](int i);
	bool is_empty() const;
	CType& elem_at_rank(int r) const;
	void insert_at_rank(int r, const CType& elem);
	void replace_at_rank(int r, const CType& elem);
	void remove_at_rank(int r);
	
};
	
	template <class CType>
	ostream& operator<<(ostream& out, const My_vec<CType>& vec);
	template <class CType>
	int find_max_index(const My_vec<CType>& v,int size);
	template <class CType>
	void sort_max(My_vec<CType>& vec);

#endif

const int default_capacity = 10;

template <class CType>
My_vec<CType>::My_vec() {
	size = 0;
	capacity = default_capacity;
	ptr	 = new CType[capacity];
}

template <class CType>
My_vec<CType>::My_vec(const My_vec<CType>& vec) {
	this->size = vec.size;
	this->capacity = vec.capacity;
	ptr = new CType[capacity];
	memcpy(ptr, vec.ptr, vec.size*sizeof(CType));
}

template <class CType>
My_vec<CType>::~My_vec() {
	delete[] ptr;
}

template <class CType>
My_vec<CType>& My_vec<CType>::operator=(const My_vec<CType>& vec) {
	if (this != &vec) {
		delete ptr;
		this->size = vec.size;
		this->capacity = vec.capacity;
		ptr = new CType[capacity];
		memcpy(ptr, vec.ptr, vec.size*sizeof(CType));
	}
	return *this;

}

template <class CType>
int My_vec<CType>::get_size() const {
	return size;
}

template <class CType>
int My_vec<CType>::get_capacity() const {
	return capacity;
}

template <class CType>
bool My_vec<CType>::is_empty() const {
	return (size == 0);
}

template <class CType>
CType& My_vec<CType>::operator[](int i) const {
	if (i<size && i>=0){
		return ptr[i];
	}
	throw"invalid rank.";
}

template <class CType>
CType& My_vec<CType>::operator[](int i){
	if (i<size && i>=0) {
		return ptr[i];
	}
	throw"invalid rank.";
}

template <class CType>
CType& My_vec<CType>::elem_at_rank(int r) const{
	if(r>=0 && r<size){
		return ptr[r];
	}
	throw"invalid rank.";

}

template <class CType>
void My_vec<CType>::insert_at_rank(int r, const CType& elem) {
	if (r > size || r < 0) {
		throw "invalid rank.";
	}

	if (size == capacity) {
		capacity = 2 * capacity;
		CType* temp = new CType[capacity];
		memcpy(temp, ptr, size*sizeof(CType));
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

template <class CType>
void My_vec<CType>::replace_at_rank(int r, const CType& elem){
	if (r>=0 && r<size){
		ptr[r] = elem;
	}
	else {
		throw"invalid rank.";
	}
}

template <class CType>
void My_vec<CType>::remove_at_rank(int r){
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

template <class CType>
ostream& operator<<(ostream& out, const My_vec<CType>& vec){
	out<<"[";
	int size = vec.get_size();
	for(int i = 0; i<size; i++){
		out<< vec[i] <<" ";
	}
	out<<"]"<<endl;
	return out;
}

template <class CType>
int find_max_index(const My_vec<CType>& v,int size){
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

template <class CType>
void sort_max(My_vec<CType>& vec){
	int size = vec.get_size();
	My_vec<CType> temp;
	while(size>0){
		int max = find_max_index(vec, size);
		temp.insert_at_rank(0, vec[max]);
		vec.remove_at_rank(max);
		--size;
	}
	vec = temp;	
}