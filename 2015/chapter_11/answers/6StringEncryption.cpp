#include <iostream>
#include <string>

class EncryptableString : public std::string
{
    private:
        std::string in;
    public:
        EncryptableString(std::string s)
        {
            in = s;
        }
        void encrypt()
        {
            std::string out = in;
            for (int index = 0; index < in.length(); index++)
            {
                if (in[index] == 'z')
                    out[index] = 'a';
                else if (in[index] == 'Z')
                    out[index] = 'A';
                else
                    out[index] = in[index] + 1;
            }
            std::cout << out << std::endl;
        }
};

int main()
{
    EncryptableString test("abcdzZAB");
    test.encrypt();

    return 0;
}

