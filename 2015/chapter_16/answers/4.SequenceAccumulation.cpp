#include <iostream>
#include <vector>
#include <string>

template <class T>
T accum(std::vector<T> v)
{
    T total = T();
    if (v.empty())
        std::cout << "Empty vector\n";
    else
    {
        for (int count = 0; count < v.size(); count++)
            total += v[count];
    }
    return total;
}

int main()
{
    std::vector<int> iVect;
    std::vector<double> dVect;
    std::vector<std::string> sVect;

    for (int index = 0; index < 10; index++)
    {
        iVect.push_back(index);
        dVect.push_back(index * 1.5);
    }
    sVect.push_back("Friday ");
    sVect.push_back("is ");
    sVect.push_back("coming!");

    std::cout << "Integer total " << accum(iVect) << std::endl;
    std::cout << "Double total " << accum(dVect) << std::endl;
    std::cout << "String total " << accum(sVect) << std::endl;

    return 0;
}


    
