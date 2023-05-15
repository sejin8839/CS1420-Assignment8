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
         //Students Todos
    }
    void output()
    {
         //Students Todos
    }
    Matrix add(Matrix t)
    {
         //Students Todos
    }
    Matrix sub(Matrix t)
    {

        //Students Todos
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