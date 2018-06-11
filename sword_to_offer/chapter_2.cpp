/*
@auther: pkusp
@file: chapter_2.cpp
@time: 2018.06.11
@location: PKU
@attribute: notes
*/
#include<iostream>
using namespace std;
//  2018.06.11 -------------------- 拷贝构造函数
class A
{
    private:
        int value;

    public:
        // 构造函数：
        A(int n) {
            value = n;
        }
        // 拷贝构造函数:
        // 需修改为--> A(const A& other)  即:传参改为常量引用 
        // 否则会无休止的调用该拷贝构造函数 
        A(A other){ // 传值参数，形参->实参 过程会自动调用拷贝构造函数
            value = other.value;
        }
        // 普通函数:
        void print(){
            cout<< value << endl;
        }
}
int main(int argc, char* argv[]){
    A a = 10;
    A b = a;
    b.print();
    return 0;
}

// Exercise 1 ------------------------ 赋值运算符函数
class CMyString{
    public:
        CMyString(char* pData = NULL)    // constructed function
        CMystring(const CMyString& str) // copy constructed function
        ~CMyString(void)  // destructor
    private:
        char* m_pData;
};



 