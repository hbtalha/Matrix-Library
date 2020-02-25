# Matrix-Library
A matrix library that contains all the main properties of matrices.

# Prerequisites
The project is compiled in GCC 9.2.0 and Boost 1.71.0, from https://nuwen.net/mingw.html, environment, codeblocks on windows 10.

# Test Code

```
#include <iostream>
#include "Matrix.h"

using namespace std;
using namespace boost;

int main()
{
    const int m = 5, n = 5;
    Matrix a(m,n), b(3,4,3), c;

    a(0,0) = {-5};
    a(0,1) = {5};
    a(0,2) = {-6};
    a(0,3) = {-1};
    a(0,4) = {0};

    a(1,0) = {0};
    a(1,1) = {-5};
    a(1,2) = {10};
    a(1,3) = {-3};
    a(1,4) = {3};

    a(2,0) = {1};
    a(2,1) = {11};
    a(2,2) = {6};
    a(2,3) = {1};
    a(2,4) = {7};

    a(3,0) = {4};
    a(3,1) = {5};
    a(3,2) = {-9};
    a(3,3) = {9};
    a(3,4) = {-7};

    a(4,0) = {-5};
    a(4,1) = {10};
    a(4,2) = {0};
    a(4,3) = {-4};
    a(4,4) = {4};


    cout << "The Matrix A:" << endl;
    cout << a << endl;
    cout << "The Determinant of Matrix A: " << a.determinant() << endl;

    if(a.is_invertible())
    {
        cout << "The Inverse of Matrix A:" << endl;
        cout << a.inverse() << endl;
    }
    else
        cout << "The Matrix A is not Invertible" << endl;

    cout << "The Transpose of Matrix A:" << endl;
    cout << a.transpose() << endl;

    Matrix x(5,5,4);

    cout << "\nThe Matrx X:" << endl;
    cout << x;

    x *= a;

    cout << "\nThe Matrx X After Multiplication:" << endl;
    cout << x;

    c = x * 4;

    cout << "\nThe Matrx C:" << endl;
    cout << c;

   b(0,2) = {4};
   b(1,2) = {5};
   b(1,3) = {2};
   b(2,0) = {-8};
   b(2,3) = {9};
   b(0,0) = {1};
   b(0,1) = {2};


   cout << endl << "The Matrix B:" << endl;
   cout << b;

   cout << endl << "The Matrix After Being Applied the Gauss-Jordan Elimination:" << endl;
   cout << b.gaussJordanElimination() << endl;

   Matrix mx(4,4,4);

    cout << mx.determinant() << endl;

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
        {
            int x;
              cout << "Mx[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> x;

               a(i,j) = {x};
        }

        cout << "The Matrix A:" << endl;
    cout << a << endl;



    c = Matrix::IDENTITY(m);


    //  cout << a << endl;
    //  cout << a.transpose();

    //cout << a.transpose().determinant() << endl << endl;
    //  cout << a.determinant();

    //cout << c;

}
```
