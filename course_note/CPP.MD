# C++ note

## TicketMachine class
```CPP
class TicketMachine{

}

```
## 头文件
- header = interface
```CPP
// declaration--> .h 只能有声明，不能有定义
// definition --> .cpp

```
- #include
    - declarations vs definitions
```CPP
// declaration + definition -> preprocess(include)
// ld: linker
// C++ 编译时会给变量加下划线
// definition(定义)->declaration(声明) 
extern global; // <>.h 声明 declaration
int global; // <>.cpp 定义 definition

// g++ a.cpp b.cpp --save-temps -Wall
// more a.cpp
```
```CPP
#include"**.h" //当前目录
/usr/
#include<**.h> //系统目录
#include<**>
```
- standard header structure
> 解决多个文件include同一个.h多次定义的问题
```CPP
// .h文件
#ifndef TICKET_MACHINE //条件编译
#define TICKET_MACHINE
//若有TICKET_MACHINE,则pass #define和#endif之间的语句
#endif
```

## clock display  
- abstract  
> 代码规范：每个cpp文件对应一个.h文件，main.cpp函数单独一个文件
```CPP
// 11:03 -> 11 03
class NumberDisplay{
    private:
        limit:int;
        value:int;
    public:
        increase():boolean
}; // 11 03
class ClockDisplay{
    private:
        hours:NumberDisplay;
        minutes:NumberDisplay;
    public:

};

int main(){
    minute.increase();
    hour.increase();
}

```

# 成员变量
- fields, parameters,local variables
> 成员变量类的作用域，在每个对象里，只要对象在就在  
> 局部变量只在函数内  
> 
```CPP
extern int gl; // there is a 'gl' somewhere
class A {
     public:
            /* 对象里只有成员变量*/ 
            int i;  // there is a 'i' somewhere in object，每个对象有一个i.
            /* f()公用，f()知道对哪个对象操作，例如使用f(&a)把对象a的地址传进f()即可 */
            void f(); // 函数属于class不属于对象，f()只有一个，所有对象共用
         
 }


```
- call functions in a class  
```
    Point a;  
    a.print()
```
> this : hidden parameter  (like self)
```CPP
class A{
    public:
        int i;
        void f();
}
void A::f(){
    this->i = 10; // i = 10
}
```

# 构造与析构
> 初始化问题 constructor
```CPP
class Point{
    public:
        void init(int x,int y);
        void print() const;
        void move(int dx,int dy);
    private:
        int x;
        int y;
}

Point a;
a.init(1,2);
a.move(2,2);
a.print();
// 0xcd 0xcd -> 烫 VSstudio内存未初始化
```
- 构造函数：
```cpp
class X{
    private:
        int i;
    public:
        X(); //对象创建时自动调用，无任何返回类型,可以有参数
}

X::X(){
    i = 0;
    cout<<'constructor'<<endl;
}
```
- 析构函数

```CPP
class Y{
    public:
        Y();
        ~Y(); //没有返回类型，没有参数，对象被消灭之前调用
}

```
# storage allocation
- 
```cpp
// goto 还可以用
void f(int i){
    if(i<10){
        goto junp1;
    }
X x1;
jump1:
    swtitch(i){
        case 1:
            //
        case 2:
            //
        
    }
}

```
- default constructor
> 没有参数的构造函数

## new & delete
- dynamic memory allocation
> new
> delete
```CPP
// new 

new int;
new Stash;
new int[10];
// delete
delete p;
delete[] p; // 方括号的作用是调用多次析构函数，对空间收回无影响

```

# C++ access
> 同一个类的不同对象可以互相访问private的内容

- protected
    - 类自己和子孙可以访问
- private 
    - 类的内部可以访问
- public
    - 都可以访问


- Friends
    - 声明别人为友元之后别人可以访问自己的private变量
    - 编译时检查授权

```CPP
struct X; //前向声明
struct Y{
    void f(X*); // 必须是指针
};
struct X{
    private:
        int i;
    public:
        void initialize();
        friend void g(X*,int); //global friend
        friend void Y::f(X*); //struct member friend 
        friend struct Z; //entire struct is a friend
        friend void h();
};
 
void X::initialize(){
    i=0;
}



```

- class 缺省为private
- struct 缺省为public


## 初始化列表(Initializer list)
- initialization vs assignment  
> 学会用初始化列表初始化构造函数内容

```CPP
class X{
public:
        X():p(0) {} //先初始化再走构造函数
    <~> X() {p=0;} //在构造函数内部
}
```

## 对象组合（composition）    
- a method of software reusing
    > 用已有的对象组合出新的对象
- 对象可以是别人的变量(在initializer list里面进行其他类的初始化)
    * Fully
    * By Reference(pointer)

## 继承(还没看)

