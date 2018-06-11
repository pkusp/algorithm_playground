/*
@auther: pkusp
@file: 剑指offer.chapter_2.cpp
@time: 2018.06.11
@location: PKU
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
        // 需修改为--> A(const A& other)  传参改为常量引用 
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

// ------------------------