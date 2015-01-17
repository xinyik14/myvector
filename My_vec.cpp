#include "My_vec.h"

template <class CType>
SafeArray<CType>::SafeArray(int len) {
    length = len;
    _array = new CType[length];
}

// 測試是否超出陣列長度
template <class CType>
bool SafeArray<CType>::isSafe(int i) {
    // 
    if(i >= length || i < 0) {
        return false;
    } 
    else {
        return true;
    }
}

// 取得陣列元素值
template <class CType>
CType SafeArray<CType>::get(int i) {
    if(isSafe(i)) {
        return _array[i]; 
    }
    else {
        // 存取超過陣列長度，丟出例外 
        throw ""; 
    }
}

// 設定陣列元素值
template <class CType>
void SafeArray<CType>::set(int i, CType value) {
    if(isSafe(i)) {
        _array[i] = value;
    }
    else {
        // 存取超過陣列長度，丟出例外
        throw ""; 
    }
}

// 刪除動態配置的資源
template <class CType>
SafeArray<CType>::~SafeArray() {
    delete [] _array;
}