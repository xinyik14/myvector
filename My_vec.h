/*My_vec.h
Xinyi Zhang 
Header file for a vector data structure.
*/
#ifndef _MY_VEC_H_
#define _MY_VEC_H_
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
