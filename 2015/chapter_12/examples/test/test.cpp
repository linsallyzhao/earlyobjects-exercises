#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::cout << *("C++ is fun" + 5) << std::endl;
    std::cout << std::string("fantastic").size() << std::endl;
    std::cout << strcmp("a", "b") << std::endl;
    if ("a" == "a") 
        std::cout << "equal " << std::endl;
    std::string s(5, 'a');
    s.append(3, 'b');
    s.insert(6, "xyz");
    std::cout << s << std::endl;
    char name[20] = "12345678987654321";
    strcpy(name+4, "sion");
    std::cout << name << std::endl;
    *name = '\0';
    strcat(name, "Smith");
    std::cout << name << std::endl;
    return 0;
}

