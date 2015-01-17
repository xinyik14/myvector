// main.cpp
//Tests all functionality of the My_vec class.

#include <iostream>
#include <stdexcept>
#include "My_vec.h"

using namespace std; 

int main() {
    SafeArray<int> safeArray1(10);
    SafeArray<double> safeArray2(10);
 

        for(int i = 0; i < safeArray1.length; i++) {
            safeArray1.set(i, (i + 1) * 10);
        }
 
        for(int i = 0; i < safeArray1.length; i++) {
            cout << safeArray1.get(i) << " ";
        }

        cout << endl;

        for(int i = 0; i < safeArray2.length; i++) {
            safeArray2.set(i, (i + 1) * 0.1);
        }
 
        for(int i = 0; i < safeArray2.length; i++) {
            cout << safeArray2.get(i) << " ";
        }
 
        cout << endl;
 
    
 
    return 0; 
} 