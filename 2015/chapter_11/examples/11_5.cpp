#include <iostream>

class  Rectangle
{
    private:
        double width, length;

    public:
        Rectangle(double width, double length)
        {
            this->width = width;
            this->length = length;
        }
        double getWidth() const { return width; }
        double getLength() const { return length; }
        void output() const
        {
            std::cout << "Width is " << width << ", "
                      << "Length is " << length << std::endl;
        }

};

int main()
{
    Rectangle box1(10, 20), box2(5, 10);

    std::cout << "Before the assignment: \n"
              << "Box 1 data:\t";
    box1.output();
    std::cout << "Box 2 data:\t";
    box2.output();

    box2 = box1;

    std::cout << "\nAfter the assignment:\n"
              << "Box 1 data:\t";
    box1.output();
    std::cout << "Box 2 data:\t";
    box2.output();

    return 0;
}
