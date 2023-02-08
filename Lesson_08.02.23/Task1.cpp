#include <iostream>
#include <string>
class Parent {
 private:
    std::string name;

 public:
    Parent() : Parent("Parent") {}

    Parent(const Parent &other) : Parent(other.name){}

    Parent(const std::string &name) {
        this->name = name;
        std::cout << "Hi! My name " << name << "\n";
    }

void sayName() {
    std::cout << "My name " << name << "\n";
}


    ~Parent() {
        std::cout << name << " Is gone ";
    }
};

class Child : Parent {
    private:
    std::string last_name;


    public:

    Child() : Child("Child") {}
    Child(const Child &other) : Child(other.last_name){}
    Child(const std::string &last_name) {
        this->last_name = last_name;
        std::cout << "Hi! My lastname " << last_name << "\n";

    }
        void sayMyName(const std::string &name) {
        std::cout << "Hi " << name << "!\n";
        }
};

int main() {
    Parent test("Stas");

    Child test_child("Jonny");
    test_child.sayMyName("Mike");


    test.sayName();
    return 0;
}