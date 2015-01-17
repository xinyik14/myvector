/*My_vec.h
Xinyi Zhang 
Header file for a vector data structure.
*/

//#ifndef _MY_VEC_H_
#define _MY_VEC_H_
#include <ostream>
#include <cstring>

using namespace std;
	

template <class CType>
class SafeArray { 
public: 
    // 建構函式 
    SafeArray(int); 
    // 解構函式 
    ~SafeArray();
 
    CType get(int); 
    void set(int, CType);
 
    int length;
private:
    CType *_array; 

    bool isSafe(int i); 
};

// 動態配置陣列
