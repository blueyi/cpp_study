#include <string>

class HasPtr {
public:
    //构造函数分配新的string和新的计数器，将计数器置为1
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
    //拷贝构造函数拷贝所有三个数据成员，并递增计数器
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) {++*use;}
    HasPtr& operator=(const HasPtr&);
    ~HasPtr();
private:
    std::string *ps;
    int i;
    std::size_t *use;
};

HasPtr::~HasPtr()
{
    if (--*use == 0) {  //如果引用计数变为0
        delete ps;      //释放string内存
        delete use;     //释放计数器内存
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use; //递增右侧运算对象的引用计数
    if (--*use == 0) {  //然后递减本对象的引用计数
        delete ps; //如果没有其他用户
        delete use;  //释放本对象分配的成员
    }
    ps = rhs.ps; //将数据从rhs拷贝到本对象
    i = rhs.i;
    use = rhs.use;
    return *this;  //返回本对象
}

int main()
{
    return 0;
}
