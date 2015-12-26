#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person;
std::istream& read(std::istream &is, Person &one);

class Person {
    friend std::istream& read(std::istream&, Person&);
    friend std::ostream& print(std::ostream&, Person&);
    
    public:
    Person() = default;
    Person(const std::string &n, const std::string &a): name(n), address(a) {}
    Person(std::istream &is) { read(is, *this) }

    std::string const& getName() const { return name; }
    std::string const& getAddress() const { return address; }

    private:
    std::string name;
    std::string address;
}

std::istream& read(std::istream &is, Person &one)
{
    is >> one.name >> one.address;
    return &is;
}
std::ostream& print(std::ostream &os, Person &one)
{
    os << one.getName << " " << one.address;
    return &os;
}

#endif
