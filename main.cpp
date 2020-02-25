
#include <iostream>
#include <math.h>
#include "Matrix.h"
#include "LA_Vector.h"

using namespace std;

int main()
{
    int m = 5, n = 5;
    Matrix b(3,4,3);
    Matrix c{5,5,3};

    Matrix a = {{-5, 5, -6, 1, 0}, {0, -5, 10, -3, 3}, {1, 11, 6, 1, 7}, {4, 5, -9, 9, -7}, {-5, 10, 0, -4, 4}};
    Matrix d = {{1, 0, 2}, {2, 3, 7}};//, {-2, 2, 1, 7}, {-2, 3, 4, 1} };
    Matrix e = {{4, 0}, {-2, -2} };
    Matrix g = {{1, -1}, {2, 3} };
    Matrix h = {{0, 2}, {1, 4} };
    Matrix i = {{-1, 5}, {7, 1 } };

    Matrix f = { {1, 4, 5, 0}, {2, 9, 5, 0}, {2, 9, 9, 0}, {-1, -4, -5, 0} };

    //  cout << f.gaussJordanElimination();

    b(0,2) = 4;
    b(1,2) = 5;
    b(1,3) = 2;
    b(2,0) = -8;
    b(2,3) = 9;
    b(0,0) = 1;
    b(0,1) = 2;

    //  cout << b.gaussElimination();
    LA_Vector lav1 = {1, 2, -1};
    LA_Vector lav2 = {6, 4, 2};
    LA_Vector lav = {4, -1, 8};


    /*

    LA_Vector lav1 = {1, 2, -1};
    LA_Vector lav2 = {6, 4, 2};
    LA_Vector lav = {9, 2, 7};

    LA_Vector lav1 = {1, 5, 3};
    LA_Vector lav2 = {5, 6, -1};
    LA_Vector lav = {3, 2, 1};
    LA_Vector lav3 = {3, 2, 1};
    */


    try
    {
        cout << is_linear_combination({ e, g, h }, i);
    }
    catch(exception& e)
    {
        cout << e.what();
    }
//cout << lav2 * (lav ->* lav1);

}
