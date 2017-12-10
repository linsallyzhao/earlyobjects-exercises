#include <iostream>

class Rectangle
{
    private :
        double length;
        double width;

    public :
        void setLength(double len)
        {
            length = len;
        }

        void setWidth(double wid)
        {
            width = wid;
        }

        double getLength()
        {
            return length;
        }

        double getWidth()
        {
            return width;
        }

        double getArea()
        {
            return length * width;
        }

};

class Carpet
{
    private :
        double pricePerSqYd;
        Rectangle size;

    public :
        void setPricePerYd(double p)
        {
            pricePerSqYd = p;
        }

        void setDimensions(double len, double wid)
        {
            size.setLength(len / 3);
            size.setWidth(wid / 3);
        }

        double getTotalPrice()
        {
            return (size.getArea() * pricePerSqYd);
        }
};

int main()
{
    Carpet purchase;
    double pricePerYd;
    double length, width;

    std::cout << "Room length in feet: ";
    std::cin >> length;
    std::cout << "Room width in feet: ";
    std::cin >> width;
    std::cout << "Carpet price per sq. yard: ";
    std::cin >> pricePerYd;

    purchase.setDimensions(length, width);
    purchase.setPricePerYd(pricePerYd);

    std::cout << "\nThe total price of my new " << length << " X " << width
              << "\ncarpet is $" << purchase.getTotalPrice() << std::endl;
    return 0;
}

