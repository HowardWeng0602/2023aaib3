///week12-1.cpp
#include <iostream>
using namespace std;

///struct Node {}; ///都有分號結尾 C語言的結構
///class Cat{}; ///之前幾週,都教過,C++更強大
struct Node{
        int val;
};
class Cat{
public:
     string name;
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
