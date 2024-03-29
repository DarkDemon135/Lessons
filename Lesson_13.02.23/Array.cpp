#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Array{
    private:
    T *array;
    int size;
    int cap;

    public:
    Array() : Array(0, 0) {}

    Array(const Array &other) {}

    Array(const T* begin, const T* end) {
        this->size = 0;
        for (const T* i = begin; i != end; ++i) {
            this->size += 1;
        }
        this->array = new T[this->size];

        int i_arr = 0;
        for (const T* i = begin; i != end; ++i) {
            array[i_arr] = *i;
            ++i_arr;
        }
        this->cap = this->size;
    }

    Array(int size, T val) {
        this->array = new T[size];
        this->size = size;
        this->cap = size;

        for (int i = 0; i < size; ++i) {
            this->array[i] = val;
        }
    }

    ~Array() {
        delete [] this->array;
    }
        void recap(int new_cap) {
        if (new_cap <= this->cap) {
            std::cout << "Capasity > new capasity\n";
        } else {
            T* tmp_arr = this->array;
            this->array = new T[new_cap];
            this->cap = new_cap;
 
            for (int i = 0; i < this->size; ++i) {
                this->array[i] = tmp_arr[i];
            }
            delete [] tmp_arr;
        }
    }

    void add_end(const T &val) {
        if (this->cap < this->size + 1) {
            recap(size * 2);
        }
        this->array[this->size] = val;
        this->size++;
    }

    int getSize() { return this->size; }
};

int main() {
        int pointer_array[5] {1,2,3,4,5};

    Array<int> my_array(&(pointer_array[0]), &(pointer_array[5]));
    for (int i = 0; i < my_array.getSize(); ++i) {
        std::cout << my_array[i] << " ";
    }
    std::cout << "\n";
    my_array.add_end(6);
    for (int i = 0; i < my_array.getSize(); ++i) {
        std::cout << my_array[i] << " ";
    }
    return 0;
}