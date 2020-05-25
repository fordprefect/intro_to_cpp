#include <iostream>
#include <string>

int main() {


    // Prog 1.1 User input

//    std::cout << "Please enter your name: ";
//    std::string name; //define name
//    std::cin >> name;
//    std::cout << "Hello, " << name << "!" << std::endl;

    // Prog 1.2 Bordered output from user input
//    std::cout << "Please enter your name: ";
//    std::string name; //define name
//    std::cin >> name;
//    std::cout << "Hello, " << name << "!" << std::endl;
//
//    const std::string greeting = "Hello, " + name + "!";
//
//    const std::string spaces(greeting.size(), ' ');
//    const std::string shallow_border = "* " + spaces + " *";
//    const std::string solid_border(shallow_border.size(), '*');
//
//    std::cout << solid_border << std::endl;
//    std::cout << shallow_border << std::endl;
//    std::cout << "* " << greeting << " *" << std::endl;
//    std::cout << shallow_border << std::endl;
//    std::cout << solid_border << std::endl;
    {
        const std::string t = "a t string";
        const std::string s = "an s string";
        std::cout << t << std::endl;
        {
//            // BAD: assigning t will fail. It may assume it's attempting to assign to the same
//            // memory location that it's reading from because of the variable name.
//            const std::string t = t + ", " + s + " and another string";

            const std::string z = t + ", " + s + " and another string";
            std::cout << z << std::endl;
        }
    }


    return 0;
}
