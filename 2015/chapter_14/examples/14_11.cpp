#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>

int prefixExpr(std::istream &exprStream);

int main()
{
    std::string input;
    std::cout << "Enter prefix expressions to evaluate.\n"
              << "Press enter after each expression,\n"
              << "and press enter on a blank line to quit.\n";
    std::cout << "Enter a prefix expression to evaluate: \n";
    std::getline(std::cin, input);
    while (input.size() != 0)
    {
        std::istringstream exprStream(input);
        std::cout << prefixExpr(exprStream) << std::endl;
        std::cout << "Enter a prefix expression to evaluate:\n";
        std::getline(std::cin, input);
    }
    return 0;
}

int prefixExpr(std::istream &exprStream)
{
    char ch = exprStream.peek();
    while (isspace(ch))
    {
        ch = exprStream.get();
        ch = exprStream.peek();
    }

    if (isdigit(ch))
    {
        int number;
        exprStream >> number;
        return number;
    }

    else
    {
        ch = exprStream.get();
        int value1 = prefixExpr(exprStream);
        int value2 = prefixExpr(exprStream);
        switch (ch)
        {
            case '+': return value1 + value2;
            case '*': return value1 * value2;
            case '-': return value1 - value2;
            case '/': return value1 / value2;
            default: std::cout << "Bad input expression\n";
                     exit(1);
        }
    }
}



