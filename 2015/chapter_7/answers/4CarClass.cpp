#include <iostream>
#include <string>

class Car
{
    private:
        int year;
        std::string make;
        int speed;

    public:
        Car(int y, std::string m)
        {
            year = y;
            make = m;
            speed = 0;
        }

        int getYear()
        {
            return year;
        }

        std::string getMake()
        {
            return make;
        }

        int getSpeed()
        {
            return speed;
        }

        void accelerate()
        {
            speed += 5;
        }

        void carBreake()
        {
            speed -= 5;
        }
};

int main()
{
    Car BMW(2014, "BMW");
    for (int i = 1; i <= 5; i++)
    {
        BMW.accelerate();
        std::cout << "Current speed is " << BMW.getSpeed() << std::endl;
    }
    
    for (int j = 1; j <= 5; j++)
    {
        BMW.carBreake();
        std::cout << "Current speed is " << BMW.getSpeed() << std::endl;
    }
    std::cout << "Year:  " << BMW.getYear() << std::endl;
    std::cout << "Make:  " << BMW.getMake() << std::endl;

    return 0;
}


