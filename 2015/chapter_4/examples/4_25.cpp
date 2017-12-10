#include <iostream>

int main()
{
    int modelNum;

    std::cout << "Our TVs come in three models: The 100, 200, and 300. \n";
    std::cout << "Which do you want? \n";
    std::cin >> modelNum;

    std::cout << "\nThat model has the following features: \n";

    switch (modelNum)
    {
        case 300: std::cout << "    Built-in DVR \n";
        case 200: std::cout << "    1080p high definition picture \n";
        case 100: std::cout << "    42\" LCD flat screen \n";
                  break;
        default : std::cout << "You can only thoose the existing model :P \n";
    }
    return 0;
}
