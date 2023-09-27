南科大于仕琪C++

## 大纲

1、C++的基础知识（第一章到第四章）
第一章、编译与预处理，C++环境的介绍
答：主要讲授了C++以及C语言的常用的基础语法，比如，编译链接，预处理宏，输入输出函数，

第二章、C++的数据类型以及算术运算
整形类型，浮点类型，算数运算，类型转换，

第三章、条件分支与for循环结构
条件分支结构（if），循环结构（while，do…whike,for …,go ,switch,break,continue等等），

第四章、数组

数组（一维数组，定长数组，变长数组，多维数组，常量数组等等，字符串string），结构体(struct)【将不同的数据类型统一起来，用法基本上同后面学到的类】，联合体（union）【共享同一块地址】以及枚举（enum）[替换常量],

第五章、指针与内存管理
指针：1、存的是地址；&是取地址，*是取内容这三点是原则。
2、指针的指针。
3、常数指针（要注意区分）
4、指针数组 数组名相当于首地址，也就类似于指针。

动态内存管理：
1、申请了内存，一定要记得释放或者中途改变，内存释放不了就会出现内存泄漏的问题；
2、delete[] 释放内存
3、还可以使用动态内存管理的指针，这是C++最新的发展方向，但不一定是最好	的选择，因为还有很多的不确定性。

第六章、函数
1、函数的定义
2、函数的返回值（本质就是值复制）
3、函数的参数（深拷贝与浅拷贝 也就是对应大的值传递还是地址传递地问题。最终在实际中的体现就是深拷贝在函数里面的修改会对外面的参数有影响。）
4、函数的声明与使用（通常函数编辑的时候，首先在入口处要对参数进行各种检查，这样可以避免出现BUG）
5、引用：相比较于指针，引用一定要初始化，会更加的安全。
6、内联函数，就是以空间换时间的作用；

第七章、函数的扩展：默认参数问题以及函数模板等等
1、默认参数都是从后面开始写的；
2、函数的重载：函数名相同，签名不同的函数，主要的作用就是在调用的时候能根据参数的传入不同，调用不同的函数体。
3、函数模板：本质上就是泛型，类似于C#中的泛型，在定义的时候是不会生成代码，在实例化的时候才生成真正的代码。 多态的本质就是延迟定义，这样可以让程序变得更加灵活。
4、函数指针： 就是指向函数的指针。 类似于C#中的委托，这样做到深层次可以实现事件进行异步通讯。
5、函数引用：
6、递归函数：优点就是可以让复杂程序变得简单，比如树的遍历等等；缺点就是占据内存高，计算复杂度高，同时耗时且理解困难。

第八章、Arm下的C++和C编程
1、平台不一样
2、如何让程序加速？ 本质就是三点：短，简单，高效；
主要包括以下几点：A、算法合适；B、代码简洁；C、内存优化；D、避免内存复制；E、循环里面不要使用printf、cout F、可以使用查表法；G、SIMD,OPENMP自带的加速机制；
3、如何避免内存的复制？

第九章、类与对象
1、类：类成员变量以及类成员方法；
2、类的设计：头文件（.hpp文件，就是申明函数等等），函数具体实现（.cpp）,主函数实现（main.cpp实现）
3、cmake以及Makefile的实现
4、构造函数以及析构函数（默认的：主要就是为了释放内存：delete[]）
5、this 指针：就是指定当前的对象
6、const以及static之间的区别？前者主要强调不变，后者主要强调不需要实例化，声明就会进入内存；静态函数里面不能调用非静态的成员函数或者成员变量，不然就会报错。
7、

第十章、运算符重载
1、运算符重载的主要目的是可以让语言更加高级；同时运算符重载可以让程序更加简单；难就难在运算符重载声明并不是那么容易的一件事情。
2、友元函数：函数的朋友，可以不受限类的约束，因为它不是类的成员；
3、类型转换：在运算符重载的过程中，通常会遇到各种类型的转换，注意最好使用显式转换，不建议使用隐式转换。
4、自增与自减运算符的重载： 可以让代码更加地简洁；

第十一章、一些默认的操作
1、默认构造函数：
2、动态内存的例子；
3、内存泄漏的解法；
4、软拷贝
5、智能指针可以自动释放内存； （只管申请，不管释放：本质就是模板类，就是一个对象，在析构函数中根据引用次数减少到指定值时（比如到0时）就会自动删除delete[]从而释放内存。）

第十二章、改善你的源代码
1、一些建议：A、使用size_t代替int;B、矩阵拷贝不适用双层循环，使用内存可能更好；C、使用一维数组，而不是使用二维数组。D、不要使用太多的循环结构；E、多对输入参数进行检查，这样可以避免更多的bug.F、将代码写得更加具有可移植性，这样可以方便拓展；G、文件命名规则；H、代码优化无止境。
2、头文件里面应用了单例模式；
3、代码最好要做到高内聚低耦合。
4、派生类：子类继承父类的所有特性，先执行父类的构造函数，析构函数则是相反。
5、访问权限的控制：private,public,protected具有不同的访问权限与范围。
6、虚函数：虚函数就是在父类中进行申明，在子类中进行实现与重写。这样可以实现多态，延迟定义： 在C#中，虚函数是一种很好的抽象，著名的抽象工厂，抽象方法以及抽象类也是类似于这种思想实现的。 虚函数的本质就是动态绑定，非虚函数就是静态绑定。
7、析构函数一定是虚函数。
8、静态与动态的内存申请：
9、opencv中的实例；

第十三章、类模板
1、类模板是最近C++标准推出的功能，主要也就是泛型在类上面的实现。
2、可以更加灵活地调用类，泛型（模板）的出现主要就是延迟创建，让使用变得更加方便；

3、模板还可以相互继承；
4、C++中有很多的标准类模板；

第十四章、错误处理机制
1、cin ,cout,cerr等不同的信息输出到多管道中；
2、assert 是一个宏，不是一个标准；
3、exception异常，通常使用try……catch对不同的异常进行捕获。
4、还有更多的异常捕获机制，就是对应于不同的异常进行捕获，然后进行相应的处理。

第十五章、拓展的C++知识
1、友元类：友元函数不是成员函数。友元类可以调用基类的私有成员；
2、Nested types嵌套：
3、RTTI和不同的数据类型转换：（记住一点那就是最好使用显式转换，不然出现信息都是都是容易造成bug的问题的出现。）
4、
第十六章、企业合作项目的开启
1、OPENBLAS项目创始人介绍如何进行代码优化：1、局部性原理2、GEMM
2、OPENCV中国区域负责人：Vadim Pisarevsky与于教授的对答环节：

总结：
1、C++之所以性能高的原因是：
A、相较于其他的语言，比如JAVA，C#，这种语言本身很多都没有进行检查，他们认为写程序的都是具有很高的程序素养的人，所以避免检查就会让程序运行更加快捷；
B、C++以及C语言更加偏向底层，偏向计算机组成原理，计算机体系结构，这样就会更加快速。

2、于老师这门课对我有什么启发？
答：这门课涉及到的东西很多：包括C++，C语言，liunx常用的操作命令，G++,GCC等进行编译实现。camke,make,makefile,cmakelist等等知识，以及图像处理算法介绍，OpenCV内部的函数以及优化的地方。授学方式不再强调于课本本身，主要还是传授C++问题本质，而且编程是一门需要动手的技能，学完之后要立马手动实操，这很关键。

3、这门课对我印象最为深刻的地方是什么？
答：按照于老师所提的这门课主要是想讲清楚指针以及内存管理这两块，因为指针和内存管理是C++学习过程中最难度过的两道难关，这门课确实讲得很深刻也很简单。对我影响最大的地方就是A、一个代码的优化，以前总是觉得将代码写出来就可以了，现在想来很大程度上是要想明白，怎样才能写好一个好代码，这就是很多程序员做了很多年都不曾去思考的问题，就是为了实现功能，将代码冗余地进行组装。里面提供了一些如何让代码加速的TIPS，很是让我感同身受。B、其次就是这门语言是基于linux以及VScode这两种环境我都不是很熟，而这两种环境又是当今使用最为频繁的两个方向，这也是值得我深思的一个方向，因为市面上用的更多的还是windows以及vs 等等

4、这门课有哪些不足呢？
答：A、GUI其实也是挺重要的，这门课没有过多地提及，GUI很多都需要经验来实现，没有太多的技术含量，但是确实也是很重要的一个方面。
B、实验部分确实还不够，C++以及任何一门语言的学习都需要进行大量的训练与动手能力，这些PPT里面确实是有很多的代码实现，代码编辑的规则，老师都认为是默认就是知道的。

# 笔记

## Chapter 1

### g++

1、编译 hello.cpp 文件：

```bash
g++ hello.cpp
```

2、使用 c++11：

```bash
g++ hello.cpp --std=c++11
```

3、编译默认生成文件名为：a.out，自定义生成文件名：

```bash
g++ hello.cpp --std=c++11 -o hello
```

4、运行生成的文件：

```bash
./hello
```

### Compile and Link

函数声明一般放在 `*.hpp` 文件中

分门别类管理，节约编译时间，条理清晰

```c++
// main.cpp
#include <iostream>
#include "mul.hpp"
using namespace std;
int main() {
    int a, b;
    int result;
    cout << "Pick two integers:";
    cin >> a;
    cin >> b;
    result = mul(a, b);
    cout << "The result is " << result << endl;
    return 0;
}

// mul.hpp
#pragma once

int mul(int a, int b);

// mul.cpp
#include "mul.hpp"
int mul(int a, int b) {
    return a * b;
}
```

![](https://img-blog.csdnimg.cn/256a8be4aa4840ddac233d0fcabe54bd.png)

注：g++ 的 -c 选项表示只编译不链接。

好处：分开编译，**节约编译时间**

### Debug

错误三大类：

- 编译错误：编译时就出错了，一般由语法造成
- 链接错误：错误提示一般与 symbol 有关，顺藤摸瓜查这个符号
- 运行错误：编译链接正常，运行时报错

### Preprocessor and Macros

预处理指令是以“#”开头的指令，只能占一行。

换行需要转义符

```C++
define, undef, include, if, ifdef, ifndef, else, elif, endif, line, error, pragma
```

编译之前先由预处理器处理。

宏是文本替换。

### Simple Input and Output

```c++
std::ostream cout;
std::istream cin;
```

`<<` 是运算符，采用运算符重载定义，返回值依然是 `cout`，故可以链式调用

### Arguments

```c++
// arguments.cpp
```





## Chapter 2

### Integer numbers

Please initialize variables EXPLICITLY!

新的初始化方式

```c++
int num (10);
int num {10};
```

### Data width and more integer types

C 和 C++ 标准并未固定数据位宽

`long long int` 保证 64 位

`sizeof` 是 `operator`，因为函数的参数必须是变量

c++标准并没有规定char（-128~127）表示unsigned char（0~255）还是signed char。不同平台不一样。

从c++11开始增加了 char16\_t（16位的char）、char32\_t（32位的char） 类型，可以表示中文字符。

```c++
char 16_t c = u'于';
char 32_t c = U'于';
```

字符类型前面添加 `+` 会隐式转换为整数

```c++
bool b = true;
int i = b; // the value of i is 1
bool b = -256; // 非0值均为1 unrecommended conversion
bool b = (-256 != 0); // better choice
```

### Boolean in C

```c
typedef char bool;
#define true 1
#define false 0

#include <stdbool.h>
```

### size_t

`sizeof` 的返回值类型

表达内存、表达元素的个数等等

自减时不会减到负数，循环时不能自减，否则会无限循环

### Fixed width integer types (since C++11)

```c++
// Defined in <cstdint>
int8_t;
int16_t;
int32_t;
int64_t;
uint8_t;
uint16_t;
uint32_t;
uint64_t;
...

// Some useful macros
INT8_MIN;
INT16_MIN;
INT32_MIN;
INT64_MIN;
INT8_MAX;
INT16_MAX;
INT32_MAX;
INT64_MAX;
...
```

### Floating point numbers

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(int argc, char *argv[]) {
    float f1 = 1.2f;
    float f2 = f1 * 1000000000000000; //1.0e15
    cout << std::fixed << std::setprecision(15) << f1 << endl;
    cout << std::fixed << std::setprecision(15) << f2 << endl;
}
```

原因在于小数是无限的，计算机表示数据有位数限制。写一个很长的小数，计算机不一定能表示出来。所以计算机表示浮点数的时候进行了采样。比如上面要表示一个15位有效数字的1.2，得到的是计算机在那段范围进行了采样后的结果。

如果支持 `long double`，则为 128 位。半精度是深度学习中大量使用的，但是不属于 C++ 标准

double 类型的数据操作比 float 更慢。

### Arithmetic operators

### constant numbers

```c++
95; // decimal
0137; // octal
0x5F; // hexadecimal
95; // int
95u; // unsigned int
95l; // long
95ul; // unsigned long
95lu; // unsigned long

6.02e23L; // long double
```

### auto

`auto` is placeholder type specifier

```c++
auto a = 2; // int
auto bc = 2.3; // double
auto c; // valid in C, error in C++
auto d = a * 1.2; // double

// Question
auto a = 2;
a = 2.3; // will a be converted to double again? No
```

### Conversion

```c++
int num1 = (int)'C'; // C-style
int num2 = int('C'); // function style
```

### Divisions

```c++
float f = 17 / 5; // f will be 3.f
```

### Assign statement

```cpp
if(int * p = get()){}
```

赋值表达式的值是等号右边的内容。

### goto

在函数的末尾进行错误处理、清理等操作。当程序出错时跳转到错误处理的相关代码，其他情况不建议使用 goto 语句。

### switch

更像 goto 语句，所以要注意写 break

### Arrays

### variable-length arrays

运行时才能确定数组的大小，如果用常量开，编译时便可确定

不一定能够直接初始化

C 和 C++ 禁止数组首地址的赋值，这样两个数组地址指向同一块内存，有一个数组丢失

循环逐个赋值或者内存拷贝函数赋值

无越界检查

在 C/C++ 中数组不是对象，这点不同于 Java

### const arrays

常常用作函数传参

```cpp
const wchat_t[] s1 = L"ABCD";
const char16_t[] s2 = u"ABCD";
const char32_t[] s3 = U"ABCD";
```

```cpp
char *strcpy(char* dst, const char* src);
```

如果溢出了也会继续复制，所以有了更安全的 `strncpy`

### string class

```cpp
std::string str1 = "Hello";
std::string str2 = "Lee";
std::string result = str1 + ", " + str2;
```

### Different types of strings

```cpp
std::string
std::wstring
std::u8string // C++20
std::u16string // C++11
std::u32string // C++11
```

直接用方括号下标访问不会有异常，at 方法越界会有异常

### struct

```cpp
struct Point point1 = {.type=TYPE_INT8, .data8={-2,3,4}};
```

### enum

```cpp
enum color {WHITE, BLACK, RED, GREEN, BLUE, YELLOW, NUM_COLORS};
enum color pen_color = RED;
pen_color = color(3); // type convertion
pen_color += 1; // ERROR!
int color_index = pen_color;
color_index += 1;
```

### typedef

```cpp
typedef unsigned char vec3b[3];

unsigned char color[3];
vec3b color = {255, 0, 255};
```

### constant pointers

指针指向的内容不能通过 `*` 取内容来修改

```cpp
int num = 1;

// You cannot change the value p1 points to through p1
const int * p1 = &num;
*p1 = 3; // error
num = 3; // okay

// You cannot change the value of p2
int * const p2 = &num;
*p2 = 3; // okay
int another = 2;
p2 = &another; // error

// You cannot change either of them
const int* const p3 = &num;
// But you can still change num directly
```

```cpp
int foo(const char *p) {
    // play a trick to remove const restriction?
    char * p2 = p; // syntax error
    // You cannot assign a const pointer to non-const one
    // ...
    return 0;
}
```

### size\_t

一个无符号整型，表示当前系统内存中可以存储的最大对象的大小。

# 程序内存的类型

-   代码区：存放程序的执行指令，试图对这块进行写操作会被系统 kill。
-   静态变量区：初始化的、未初始化的分开存放。
-   堆内存区：动态申请的内存会存放此处，
-   栈内存区：临时、局部变量存放在此区。

![image-20230927193133141](C:/Users/Lee/AppData/Roaming/Typora/typora-user-images/image-20230927193133141.png)

### void\* malloc( size\_t size )

-   单位是字节。
-   分配的内存是未初始化的，原来里面装着什么内容分配后不变。
-   存在内存对齐机制，比如：int \* p1 = (int\*) malloc (4);只想分配4字节，但是不同操作系统分配的是不同的，有的会最小分配4字节，有的会最小分配16字节。
-   **当程序结束后操作系统会把分配给该程序的所有内存回收。**

### Memory Leak

```c++
p = (int *) malloc(4 * sizeof(int));
// ...
p = (int *) malloc(8 * sizeof(int));
free(p);

void foo() {
    int *p = (int *) malloc(sizeof(int));
    return;
}
```

### new

> Operator new is similar with malloc() but with more features

![](https://img-blog.csdnimg.cn/86665d7b1b75466bad63add2b23d3643.png)

![](https://img-blog.csdnimg.cn/f521d7f8997144cbb78e017389db47f5.png)

### delete

![](https://img-blog.csdnimg.cn/afa3d4825eef446992d0eca12691a53a.png)

养成用 `delete []` 的习惯是比较安全的

### Functions

The parameters should be checked first!!

好的风格是先声明，否则要不断调整函数的顺序

一般把函数的声明放在头文件里

### 函数是怎么调用的

-   应用程序执行的时候实际上是二进制指令一条条地往CPU里面搬，每一段代码都是一条条指令。
-   当碰到函数时，因为函数的指令不一定和当前执行的指令放在一起的，那么在执行函数时会跳到其他位置去执行，在跳之前一般要保存当前的状态，即各种数据入栈。
-   执行完函数之后从栈中取出各种数据。拿到函数返回值（如果有），继续执行原来的代码。
-   程序执行的代价就是各种数据的出入栈的花费，如果函数非常复杂那么代价可以忽略不计，如果是简单的函数又频繁调用代价就大了，这时候可以设为内联函数。

# 内联函数示例

![](https://img-blog.csdnimg.cn/7dd57ab76608444e997e983a9e852e32.png)

![](https://img-blog.csdnimg.cn/64119e05099c413a98f5785b0c1d1abd.png)

# 重载函数

返回值不参与比较，两个参数列表相同但返回值不同的函数被认为是同一个函数。

# 函数模板

编译器不会为模板函数生成机器指令，因为不知道具体的类型，只有模板实例化时才会生成机器指令。

函数模板实例化的几种形式：

```cpp
template<typename T>T sum(T x, T y){    cout << "输入类型是：" << typeid(T).name() << endl;    return x + y;} int main(int argc, char *argv[]){    //实例化的几种形式    double s1 = sum<double>(3.5, 5.9);    char s2 = sum<>('c', 'd');    int s3 = sum(8, 9);}
```

![](https://img-blog.csdnimg.cn/3f7caa9727424fcbb1e1253bb352097e.png)

# 模板函数的特例化

上面的代码，如果有一个类型：

```cpp
struct Point{    int x;    int y;};
```

执行：

```cpp
    Point s1 = sum<Point>(Point{1,2}, Point{3,4});
```

编译会报错，因为这个类型没有定义加操作。这时候可以针对此类型特例化实现 sum() 操作：

```cpp
template<typename T>T sum(T x, T y){    cout << "输入类型是：" << typeid(T).name() << endl;    return x + y;} struct Point{    int x;    int y;}; template<>Point sum<Point>(Point pt1, Point pt2){    cout << "输入类型是：" << typeid(pt1).name() << endl;    Point pt;    pt.x = pt1.x + pt2.x;    pt.y = pt1.y + pt2.y;    return pt;} int main(int argc, char *argv[]){    Point s1 = sum<Point>(Point{1,2}, Point{3,4});}
```

![](https://img-blog.csdnimg.cn/67d740f8261a455aa17f910195581671.png)

# 函数指针

指向的是指令区的数据，指向指令的地址。

# 编程基本原则

“Simple is Beautiful”。代码应该尽可能短、尽可能简洁。

# 代码优化常用策略

1.  优化算法，从算法的时间复杂度、空间复杂度方面考虑优化算法。
2.  现在的编译器非常强大，把代码写得简洁以便编译器可以优化。
3.  考虑内存操作的影响。计算机的储存机制是分层的，最慢的、储存量最大的是磁盘，读取数据时会（计时用户只需要读取少量数据也会）一次性读取大量数据到内存，再一层层读到 cache 里面，所以读写数据时如果数据的地址是连续的就会很快。
4.  避免拷贝大的对象。
5.  尽可能不要再循环里面打印内容。
6.  查表法。比如 sin()、cos() 这些计算很费时间，可以计算出其常用的值存到数组，可以大大提高效率。处理复杂操作可以考虑使用。

# 运算符重载

运算符重载可以实现很多方便的操作，比如一个类型转成int：

```cpp
struct Point{    int x;    int y;     operator int()const    {        return x + y;    }}; int main(int argc, char *argv[]){    Point p1{22,33};    int x = p1;    int x2 = static_cast<int>(p1);    qDebug()<<x<<x2;//55 55     }
```

类似的还可以转成float、bool等。

反过来 int 转 Point 可以定义一个int类型的构造函数来实现。

# 一段关于动态内存的险恶代码

```cpp
#include <QDebug> class MyString{  private:    int buf_len;    char * characters;  public:    MyString(int buf_len = 64, const char * data = NULL)    {        qDebug() << "构造(int, char*)";        this->buf_len = 0;        this->characters = nullptr;        create(buf_len, data);    }    ~MyString()    {        delete []this->characters;    }    bool create(int buf_len,  const char * data)    {        this->buf_len = buf_len;         if( this->buf_len != 0)        {            this->characters = new char[this->buf_len]{};            if(data)                strncpy(this->characters, data, this->buf_len);        }         return true;    }    friend QDebug operator<<(QDebug dbg, const MyString & ms)    {        dbg.nospace() << "字符串长度 = " << ms.buf_len;        dbg.nospace() << "字符串地址 = " << static_cast<void*>(ms.characters);        dbg.nospace() << " [" << ms.characters << "]";        return dbg;    }}; int main(){    MyString str1(10, "Shenzhen");    qDebug() << "str1: " << str1 ;     MyString str2 = str1;    qDebug()  << "str2: " << str2 ;     MyString str3;    qDebug()  << "str3: " << str3 ;    str3 = str1;    qDebug()  << "str3:" << str3 ;     return 0;}
```

![](https://img-blog.csdnimg.cn/33a2b9fd7c9d4d06ae00c3c1800d616b.png)

分析：

```cpp
MyString str1(10, "Shenzhen");
```

 正常构造一个字符串对象。

```cpp
MyString str2 = str1;
```

调用拷贝构造函数，但是类里面没有定义拷贝构造函数，会使用编译器默认创建的拷贝构造函数，默认创建的拷贝构造函数执行成员变量赋值操作。所以上面的图，str1 和 str2 的内容一样。

两个对象的 characters 指针指向同一个内存地址。

析构的时候该地址存放的**字符串对象先被一个对象销毁**了，但是另一个对象的 characters 指针还指着该地址且也要去释放，程序就会出错。

```cpp
MyString str3;str3 = str1;
```

str3 先执行了默认构造函数，即先构造了一个长度为64的字符串。然后又执行赋值操作，但是类里面没有定义“=”的重载操作，所以执行的是编译器默认创建的，默认创建的赋值操作也是成员变量的值拷贝，所以现在 str1、str2、str3 三个对象的 characters 指向同一个内存，见上图。而且原先创建的长度为64的字符串没有指针指着无法自行释放了，即内存泄漏了。

解决此问题的方式：

-   自定义拷贝构造函数、自定义拷贝运算符重载使指针指向自己申请的内存。
-   浅拷贝，使用引用计数。

# 老师金句之二

> 当你做一件事情的时候感觉很笨、很啰嗦的时候，大概率你的方法错了。

# 编程技巧

> 当写一个函数时，第一件事一定是数据检查，这是减少程序调试时间最重要的一点。

# 类的继承

对基类数据的保护程度：public < protected < private

1.  基类中的私有数据：三种方式都不能访问。
2.  基类中的 protected 数据：以 public、protected 方式继承，该数据在子类还是 protected 的；以private 方式继承，该数据在子类中是不可直接访问的（可以通过父类间接访问）。
3.  基类中的 public 数据：以 public 方式继承，该数据在子类是 public 的，以 protected 方式继承，该数据在子类中是 protected 的，以 private 方式继承，该数据在子类中是不可直接访问的。

# 关于Virtual

```cpp
class Person{  public:    QString name;    Person(QString n): name(n){}    void print()    {        qDebug() <<"Person::print";        qDebug() << "Name: " << name;    }}; class Student: public Person{  public:    QString id;    Student(QString n, QString i): Person(n), id(i){}    void print()    {        qDebug() <<"Student::print";        qDebug() << "Name: " << name;        qDebug() << ". ID: " << id;    }}; void printObjectInfo(Person & p){    p.print();} int main(){    {        Student stu("yu", "2019");        printObjectInfo(stu);        stu.print();    }     {        Person * p = new Student("xue", "2020");        p->print();        delete p;    }     return 0;}
```

![](https://img-blog.csdnimg.cn/56439311b8504010aaf3d9c72b1660c3.png)

子类对象传入此函数：

```cpp
void printObjectInfo(Person & p){    p.print();}
```

实际上调用父类 print() 的合理性：编译的时候确定要执行父类的 print() 对应的指令。

给父类的 print() 加上 virtual 就不一样了：

```cpp
class Person{  public:    QString name;    Person(QString n): name(n){}    virtual void print()    {        qDebug() <<"Person::print";        qDebug() << "Name: " << name;    }};
```

![](https://img-blog.csdnimg.cn/d9571464355a4136b4fe98484c6e2a71.png)

执行的是实际类型的 print()。

静态绑定：编译时确定该执行的函数。 

动态绑定：执行时候根据实际的类型确定执行的函数。

动态绑定原理：一旦定义了虚函数，类的成员变量会多出一个指向自身函数表的指针，这个成员变量是类的第一个成员变量。执行时查虚函数表确定实际执行的函数。

析构函数一定要是虚函数，否则调用析构函数时只会调用父类的析构函数。

# 模板的无类型参数

```cpp
template<typename T, size_t rows, size_t cols>class Mat{    T data[rows][cols];  public:    Mat(){}    T getElement(size_t r, size_t c);    bool setElement(size_t r, size_t c, T value);};
```

上面的代码 rows、cols 在编译的时候就确定了：

```cpp
    Mat<int, 3, 3> vec;
```

# 异常处理

函数层层调用，最离层的函数抛出异常，如果外层的函数不捕获异常，那么异常会层层往外扔直到主函数，如果到最后异常没有被捕获那么程序会被kill。

```cpp
float ratio(float a, float b) {    if (a < 0)        throw 1;    if (b < 0)        throw 2;    if (fabs(a + b) < FLT_EPSILON)        throw "The sum of the two arguments is close to zero.";     return (a - b) / (a + b);} float ratio_wrapper(float a, float b){    try{        return ratio(a, b);    }    catch(int eid)    {        if (eid == 1)            std::cerr << "Call ratio() failed: the 1st argument should be positive." << std::endl;        else if (eid == 2)            std::cerr << "Call ratio() failed: the 2nd argument should be positive." << std::endl;        else            std::cerr << "Call ratio() failed: unrecognized error code." << std::endl;    }    return 0;} int main(){    float x = 0.f;    float y = 0.f;    float z = 0.f;     std::cout << "Please input two numbers <q to quit>:";    while (std::cin >> x >> y)    {        try{            z = ratio_wrapper(x,y);            std::cout << "ratio(" << x << ", " << y<< ") = " << z << std::endl;        }        catch(const char * msg)        {            std::cerr << "Call ratio() failed: " << msg << std::endl;            std::cerr << "I give you another chance." << std::endl;        }         std::cout << "Please input two numbers <q to quit>:";    }    std::cout << "Bye!" << std::endl;    return 0;}
```

匹配任何异常：

```cpp
int main(){    runSomething1();    try    {        runSomething2();    }    runSomeOthers();    catch(...)    {         std::cerr << "Unrecognized Exception" << std::endl;    }    return 0;}
```

三个点表示匹配任何异常，即任何扔到主函数的异常都被捕获，可防止程序被kill。

当new申请内存失败时，默认会抛出异常。

```cpp
int main(){    int * p;        try {        p = new int[10];    }    catch (std::bad_alloc & ba)//处理抛出的异常    {        qDebug() << ba.what();    }        //使用std::nothrow将在new申请内存失败后不抛出内存且将p置为nullptr    p = new(std::nothrow) int[10];    if(p)    {    }    return 0;}
```

# 友元类

友元类可以访问类的私有成员。

```cpp
#include <iostream>using namespace std; class Sniper{private:    int bullets;public:    Sniper(int bullets = 0): bullets(bullets){}    friend class Supplier;}; class Supplier{    int storage;public:    Supplier(int storage = 1000): storage(storage){}    bool provide(Sniper & sniper)    {        // bullets is a private member        if (sniper.bullets < 20) //no enough bullets        {            if (this->storage > 100 )            {                sniper.bullets += 100;                this->storage -= 100;            }            else if(this->storage > 0)            {                sniper.bullets += this->storage;                this->storage = 0;            }            else                return false;        }        cout << "sniper has " << sniper.bullets << " bullets now." << endl;        return true;    }}; int main(){    Sniper sniper(2);    Supplier supplier(2000);    supplier.provide(sniper);    return 0;}
```

限制友元类只有一部分函数可以访问类的私有成员：

```cpp
#include <iostream>using namespace std; class Supplier;class Sniper; class Supplier{    int storage;public:    Supplier(int storage = 1000): storage(storage){}    bool provide(Sniper & sniper);}; class Sniper{private:    int bullets;public:    Sniper(int bullets = 0): bullets(bullets){}    friend bool Supplier::provide(Sniper &);}; bool Supplier::provide(Sniper & sniper){    // bullets is a private member    if (sniper.bullets < 20) //no enough bullets    {        if (this->storage > 100 )        {            sniper.bullets += 100;            this->storage -= 100;        }        else if(this->storage > 0)        {            sniper.bullets += this->storage;            this->storage = 0;        }        else            return false;    }    cout << "sniper has " << sniper.bullets << " bullets now." << endl;    return true;} int main(){    Sniper sniper(2);    Supplier supplier(2000);    supplier.provide(sniper);    return 0;}
```

# vadim pisarevsky 大佬提到的几个关于c++的建议

1.  （长久来看）建议关注算法、概念、技术，而不是特定的特性或者编程语言本身。
2.  不要尝试把你学到的花哨功能全部用到开发上，因为过一段时间你可以就都不懂你的代码了。
3.  “当程序员避免使用原始指针而使用智能指针等封装好的结构，内存泄漏的问题就降到几乎为零”
4.  c++语言变得越来越复杂，但应该形成自己的提高程序稳定性的方法论，比如：

-   尽量不要手动管理内存，使用已有的容器。
-   在重构和优化之前要进行回归测试。
-   写代码时应注意让程序更容易调试，不要用复杂的语言结构（代码应该越简单越好）。