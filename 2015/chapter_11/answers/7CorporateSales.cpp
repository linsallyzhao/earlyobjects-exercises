#include <iostream>

class DivSales
{
    private:
        int sales[4];
        static int total;

    public:
        void setSales(int a, int b, int c, int d)
        {
            sales[0] = a;
            sales[1] = b;
            sales[2] = c;
            sales[3] = d;
            total += (a + b + c + d);
        }

        int getSale(int i)
        {
            while (i < 0 || i > 3)
            {
                std::cout << "Invalid subscript, enter again\n";
                std::cin >> i;
            }
            return sales[i];
        }
        void getTotal()
        {
            std::cout << "Total sale is " << total << std::endl;
        }
};

int DivSales::total = 0;

int main()
{
    DivSales corp[6];
    int q1, q2, q3, q4;
    for (int index = 0; index < 6; index++)
    {
        std::cout << "Please enter quater 1 sale for div " << index << std::endl;
        std::cin >> q1;
        std::cout << "Please enter quater 2 sale for div " << index << std::endl;
        std::cin >> q2;
        std::cout << "Please enter quater 3 sale for div " << index << std::endl;
        std::cin >> q3;
        std::cout << "Please enter quater 4 sale for div " << index << std::endl;
        std::cin >> q4;
        corp[index].setSales(q1, q2, q3, q4);
    }
    for (int index = 0; index < 6; index++)
    {
        std::cout << "Q1 sale for div " << index + 1 << " is " 
                  << corp[index].getSale(0) << std::endl;
        std::cout << "Q2 sale for div " << index + 1 << " is " 
                  << corp[index].getSale(1) << std::endl;
        std::cout << "Q3 sale for div " << index + 1 << " is " 
                  << corp[index].getSale(2) << std::endl;
        std::cout << "Q4 sale for div " << index + 1 << " is " 
                  << corp[index].getSale(3) << std::endl;
        std::cout << "\n\n";
    }
    corp[0].getTotal();

    return 0;
}


