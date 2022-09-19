#include <iostream>

using namespace std;

void print(const int *const a, const size_t size);
int* apply_all(const int *const a1, const size_t s1, const int *const a2, const size_t s2);

int main() {
    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};
    
    cout << "Array 1: ";
    print(array1,5);
    cout << "Array 2: ";
    print(array2,3);
    
    int *result = apply_all(array1,5,array2,3);
    constexpr size_t result_size = {5*3};
    print(result,result_size);
    
    delete [] result;
}

void print(const int *const a, size_t size) {
    for(int i = 0; i < size; i++) {
        cout << *(a+i) << " ";
    }
    cout << endl;
}

int* apply_all(const int *const a1, const size_t s1, const int *const a2, const size_t s2) {
    int counter {0};
    int *const result = new int[s1*s2];
    for(int i = 0; i < s2; i++) {
        int e2 = a2[i];
        for(int j = 0; j < s1; j++) {
            int e1 = a1[j];
            int r = e1*e2;
            result[counter++] = r;
        }
    }
    return result;
}