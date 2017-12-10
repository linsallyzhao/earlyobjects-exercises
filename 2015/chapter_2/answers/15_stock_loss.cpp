#include <iostream>

int main()
{
    float purchase_price = 21.77,
          sell_price = 16.44,
          shares = 600,
          total_paid,
          total_received,
          lost;

    total_paid = purchase_price * shares;
    total_received = sell_price * shares;
    lost = total_paid - total_received;

    std::cout << "The total amount paid for the stock is $" 
              << total_paid << std::endl
              << "The total amount received from selling the stock is $"
              << total_received << std::endl
              << "The total lost is $" << lost << std::endl;

    return 0;
}
