#include <iostream>
#include <iomanip>

class Mission
{
    private:
        int number;

    public:
        void getNum(int n)
        {
            number = n;
        }

        double calc()
        {
            return number / 10 / 16.0;
        }
};

Mission getInfo();

int main()
{
    Mission widget = getInfo();
    std::cout << "It will take " << std::fixed << std::showpoint 
              << std::setprecision(2) << widget.calc() << " days.\n";

    return 0;

}

Mission getInfo()
{
    int order;

    std::cout << "How many widgets did you ordered?\n";
    std::cin >> order;

    while (order <= 0 )
    {
        std::cout << "Invalid input! Re-enter: ";
        std::cin >> order;
    }
    Mission newOrder;
    newOrder.getNum(order);

    return newOrder;
}
