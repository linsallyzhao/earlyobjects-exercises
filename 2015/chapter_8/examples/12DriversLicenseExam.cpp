#include <iostream>
#include <sstream>
#include <string>

class TestGrader
{
    private:
        char key[20];

    public:
        void setKey(char enter[20])
        {
            for (int index = 0; index < 20; index++)
            {
                key[index] = enter[index];
            }
        }

        std::string grade(char answer[20]);
};

std::string TestGrader::grade(char answer[20])
{
    int count = 0;
    std::string wrong = "";
    for (int index = 0; index < 20; index++)
    {
        if (key[index] == answer[index])
            count++;
        else
        {
            wrong = wrong.append(" ");
            std::ostringstream temp;
            temp << index;
            std::string num = temp.str();
            wrong = wrong.append(num);
        }
    }
    std::string mess1;
    if (count >= 15)
        mess1 = "Pass! ";
    else
        mess1 = "Fail! ";

    std::string mess2 = "Correct number is ";
    std::ostringstream change;
    change << count;
    std::string out = change.str();
    mess2 = mess2.append(out);

    std::string mess3 = "\nWrong list: ";
    mess3 = mess3.append(wrong);

    std::string message = mess1.append(mess2);
    message = message.append(mess3);
    return message;
}

int main()
{
    char right[20];
    char user[20];
    int choice = 1;
    while (choice != -1)
    {
        std::cout << "Please enter the right answers: ";
        for (int i = 0; i < 20; i++)
        {
            std::cin >> right[i];
        }
        std::cout << "Please enter the user answers: ";
        for (int i = 0; i < 20; i++)
        {
            std::cin >> user[i];
        }
        TestGrader test;
        test.setKey(right);
        std::cout << test.grade(user) << std::endl;
        std::cout << "Another? \n";
        std::cin >> choice;
    }
    return 0;
}
