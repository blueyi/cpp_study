#include <set>
#include <string>


class Folder 
{
    friend class Message;
public:
    void addMsg(Message&);
    void remMsg(Message&);

private:

};

class Message 
{
    friend class Folder;
public:
    //explicit阻止构造函数的隐式转换
    explicit Message(const std::string str = "") : contents(str) {}
    Message(const Message&);             //拷贝构造函数
    Message& operator=(const Message&);  //拷贝复制运算符
    ~Message();                          //析构函数
    //从给定Folder集合中添加/删除本Message
    void save(Folder&);
    void remove(Folder&);

private:
    std::string contents;  //实际消息文本
    std::set<Folder*> folders; //包含本Message的Folder
    //拷贝构造函数、拷贝赋值运算符和析构函数所使用的工具函数
    //将本Message添加到指定参数的Folder中
    void add_to_Folders(const Message&);
    //从folders中的每个Folder中删除本Message
    void remove_from_Folders();
};

void Message::save(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}

int main()
{
    return 0;
}
