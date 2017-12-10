#include <cmath>
#include <iostream>

class Rational
{
    private:
        int nume, deno;
        void reduce(int up, int down);

    public:
        Rational(int a, int b)
        {
            reduce(a, b);
        }
        int getNume() const {return nume;}
        int getDeno() const {return deno;}
        friend std::ostream & operator<< ( std::ostream & out, Rational a);
};
void Rational::reduce(int up, int down)
{
    bool negative = false;
    if (up < 0 || down < 0)
    {
        negative = true;
        up = std::abs(up);
        down = std::abs(down);
    }
    int index = 2;
    if (up > down)
    {
        while (index <= down)
        {
            if ((up % index == 0) && (down % index == 0))
            {
                up /= index;
                down /= index;
                index = 1;
            }
            index++;
        }
    }
    else
    {
        while (index < up)
        {
            if ((up % index == 0) && (down % index == 0))
            {
                up /= index;
                down /= index;
                index =  1;
            }
            index++;
        }
    }
    if (negative)
        nume = -1 * up;
    else
        nume = up;
    deno = down;
}

std::ostream & operator<< ( std::ostream & out, Rational a)
{
    out << a.getNume() << "/" << a.getDeno() << std::endl;
    return out;
}
int main()
{
    Rational test(12, -4);
    std::cout << test << std::endl;
    Rational test1(-3, 18);
    std::cout << test1 << std::endl;
    Rational test2(1904, 3352);
    std::cout << test2 << std::endl;



    return 0;
}

