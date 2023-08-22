#include <iostream>
#include <string>

int main()
{
    unsigned long long int a;
    std::cin >> a;
    std::string s = std::to_string(a);
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            if (s[i] >= '5' && s[i] != '9')
            {
                a = s[i] - '0';
                a = 9 - a;
                std::string b = std::to_string(a);
                s.replace(i, 1, b);
            }
        }
        else if (s[i] >= '5')
        {
            a = s[i] - '0';
            a = 9 - a;
            std::string b = std::to_string(a);
            s.replace(i, 1, b);
        }
    }
    std::cout << s;
    return 0;
}