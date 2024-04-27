#include <iostream>
using namespace std;

template <typename T, int Rows, int Cols>
class CMatrix {
public:
    CMatrix(){
        T startValue = 0;
        for (int i = 0; i < Rows; ++i) {
            for (int j = 0; j < Cols; ++j) {
                data[i][j] = startValue + i * Cols + j;
            }
        }
    }

    CMatrix(T startValue) {
        for (int i = 0; i < Rows; ++i) {
            for (int j = 0; j < Cols; ++j) {
                data[i][j] = startValue + i * Cols + j;
            }
        }
    }

    CMatrix& operator+=(const CMatrix& other) {
        for (int i = 0; i < Rows; ++i) {
            for (int j = 0; j < Cols; ++j) {
                data[i][j] += other.data[i][j];
            }
        }
        return *this;
    }

    friend CMatrix operator+(CMatrix lhs, const CMatrix& rhs) {
        lhs += rhs;
        return lhs;
    }

    void print() const {
        for (int i = 0; i < Rows; ++i) {
            for (int j = 0; j < Cols; ++j) {
                cout << data[i][j] << ' ';
            }
           cout << '\n';
        }
		cout<<endl;
    }

private:
    T data[Rows][Cols];
};



int main() {
    CMatrix<int, 2, 3> arr1(10), arr2(20), sum;

    arr1.print();
    arr2.print();
    sum = arr1 + arr2;
    sum.print();

    return 0;
}

