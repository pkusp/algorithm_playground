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
        A(const A &other){ // 传值参数，形参->实参 过程会自动调用拷贝构造函数
            value = other.value;
        }
        // 普通函数:
        void print(){
            cout<<"\nvalue is: "<<value << endl;
            cout<<endl;

        }
};


// Exercise 1 ------------------------ 赋值运算符函数
class CMyString{
    public:
        CMyString(char* pData = NULL);  // constructed function
        CMyString(const CMyString& str); // copy constructed function
        ~CMyString(void);  // destructor
    private:
        char* m_pData;
};

// 拷贝构造测试类
class CopyClass {
    private:
        int val;
        int flag = 0;
    public:
        CopyClass(int n){
            val = n;
        }
        CopyClass(const CopyClass &cc){
            val = cc.val;
            flag = 1;
        }
        ~CopyClass(){}
        void print_class(){
            cout<<"\nval is:"<<val<<endl;
            if(flag){
                cout<<"copy construct running"<<endl;
            }
        }
};

// 拷贝构造类测试函数
void test_copy_constructor(){
    A a = 10086;
    A b = a;
    b.print();
    CopyClass cc = 998;
    CopyClass bb = cc;
    cc.print_class();
    bb.print_class();
}

int main(int argc, char* argv[]){
    test_copy_constructor();
    return 0;
}

