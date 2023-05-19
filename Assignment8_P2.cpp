#include<iostream>
using namespace std;
/*

filename: Assignment8_P2.cpp
Developer Name: Sejin Yoon
Date: May 15, 2023

*/

class Matrix
{
    private:
    int mat[10][10];
    int rows;
    int cols;
    public:
    void input()
    {
          cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> cols;

        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Enter element at position (" << i << ", " << j << "): ";
                cin >> mat[i][j];
            }
        }
    }
    void output()
    {
            cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }
    Matrix add(Matrix t)
    {
        Matrix result;
        result.rows = rows;
        result.cols = cols;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.mat[i][j] = mat[i][j] + t.mat[i][j];
            }
        }

        return result;
    }
    Matrix sub(Matrix t)
    {
        Matrix result;
        result.rows = rows;
        result.cols = cols;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.mat[i][j] = mat[i][j] - t.mat[i][j];
            }
        }

        return result;
    }
};

int main()
{
Matrix m1,m2,add_mat,sub_mat;
cout<<"*********Matrix m1*********"<<endl;
m1.input();
cout<<"*********Matrix m2*********"<<endl;
m2.input();
add_mat=m1.add(m2);
sub_mat=m1.sub(m2);
cout<<"Addition of two matrices is"<<endl;
add_mat.output();
cout<<"Subtraction of two matrices is"<<endl;
sub_mat.output();

}