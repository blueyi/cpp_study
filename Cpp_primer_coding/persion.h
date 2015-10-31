#include <string>

class Persion {
    public:
        std::string getName() const { return name; }
        std::string getAddress() const { return address; }

    private:
        std::string name;
        std::string address;
}
