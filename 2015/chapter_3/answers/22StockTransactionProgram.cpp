#include <iostream>

int main()
{
    double purPrice = 32.87,
           sellPrice = 33.92,
           shares = 100,
           commissionRate = 0.02,
           purPay,
           sellGross,
           purCommi,
           sellCommi,
           profit;

    purPay = purPrice * shares;
    purCommi = purPay * commissionRate;
    sellGross = sellPrice * shares;
    sellCommi = sellGross * commissionRate;
    profit = sellGross - purPay - sellCommi - purCommi;

    std::cout << "Joe paid " << purPay << " dollars for the stock. \n"
              << purCommi << " dollars for the purchase commission. \n"
              << "He recieved " << sellGross << " dollars from selling the stock. \n"
              << "And paid " << sellCommi << " dollars for sell commission. \n"
              << "His final profit is " << profit << " dollars. \n";

    return 0;
}
