#include <iostream>
#include <fstream>
#include <string>


int main()
{
    std::fstream file("intlist.dat", std::ios::out |std::ios::binary);
    int list[10] = {4, 13, 26, 30, 47, 55, 61, 75, 89, 98};
    file.write(reinterpret_cast<char *>(list), sizeof(list));
    file.close();

    file.open("intlist.dat",
               std::ios::out | std::ios::in | std::ios::binary);
    std::cout << "Here is my list\n";
    int ints[10] = {0};
    file.read(reinterpret_cast<char *>(ints), sizeof(ints));
    for (int index = 0; index < 10; index++)
        std::cout << ints[index] << "    ";

    int insert;
    std::cout << "\nEnter the integer you want to insert\n";
    std::cin >> insert;
    long unit = sizeof(int);
    int com = -1;

    for (int index = 9; index >= 0; index--)
    {
        file.clear();
        file.seekg(unit * index, std::ios::beg);
        file.read(reinterpret_cast<char *>(&com), sizeof(int));

        if (com <= insert)
        {
            int *after= new int[9 - index];
            file.clear();
            file.seekp(unit * (1+index), std::ios::beg);
            file.read(reinterpret_cast<char *>(after), (9 - index) * unit);

            int *before = new int[index + 1];
            file.clear();
            file.seekp(0L, std::ios::beg);
            file.read(reinterpret_cast<char *>(before), (1 + index) * unit);

            int temp[11];
            for (int count = 0; count <= index; count++)
                temp[count] = before[count];
            temp[index+1] = insert;
            for (int count = (index + 2); count < 11; count++)
                temp[count] = after[count - 2 - index];

            file.clear();
            file.seekp(0L, std::ios::beg);
            file.write(reinterpret_cast<char *>(temp), 11 * unit);

            delete []after;
            delete []before;

            std::cout << "This is the new list\n";
            int newlist[11] = {0};
            file.clear();
            file.seekg(0L, std::ios::beg);
            file.read(reinterpret_cast<char *>(newlist), sizeof(newlist));
            for (int index = 0; index < 11; index++)
                std::cout << newlist[index] << "    ";
            file.close();
            return 0;
        }
    }
    int temp[11] = {insert};
    for (int count = 1; count < 11; count++)
        temp[count] = ints[count-1];

    file.clear();
    file.seekp(0L, std::ios::beg);
    file.write(reinterpret_cast<char *>(temp), 11 * unit);

    std::cout << "This is the new list\n";
    int newlist[11] = {0};
    file.clear();
    file.seekg(0L, std::ios::beg);
    file.read(reinterpret_cast<char *>(newlist), sizeof(newlist));
    for (int index = 0; index < 11; index++)
        std::cout << newlist[index] << "    ";
    file.close();
    return 0;

}




