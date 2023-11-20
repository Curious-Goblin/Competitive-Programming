#include <iostream>
#include <vector>
using namespace std;

void solve(int n, vector<string> ticket)
{
    vector<int> hash(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ticket[i].size(); j++)
        {
            hash[i] += (ticket[i][j] - '0');
        }
    }
    vector<string> tickets;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string a;
        for (int j = i + 1; j < n; j++)
        {
            if ((ticket[i].size() % 2 == 0 && ticket[j].size() % 2 == 0) ||
                (ticket[i].size() % 2 != 0 && ticket[j].size() % 2 != 0))
            {
                if (ticket[i].size() == ticket[j].size())
                {
                    if (hash[i] == hash[j])
                    {
                        count = count + 2;
                    }
                }
                else
                {
                    a = ticket[i] + ticket[j];
                    tickets.push_back(a);
                    a = ticket[j] + ticket[i];
                    tickets.push_back(a);
                }
            }
        }
    }
    for (unsigned int i = 0; i < tickets.size(); i++)
    {
        int sum1 = 0, sum2 = 0;
        for (unsigned int j = 0; j < (tickets[i].size() / 2); j++)
        {
            sum1 = sum1 + (tickets[i][j] - '0');
        }
        for (int k = (tickets[i].size() / 2); k < tickets[i].size(); k++)
        {
            sum2 = sum2 + (tickets[i][k] - '0');
        }
        if (sum1 == sum2)
        {
            count++;
        }
    }
    if (n % 2 == 0)
    {
        cout << count + n;
    }
    else
    {
        cout << count + n;
    }
}

int main()
{
    int n;
    cin >> n;
    string s;
    vector<string> ticket;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ticket.push_back(s);
    }
    solve(n, ticket);
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int count_string(string a)
// {
//     int sum1 = 0, sum2 = 0;
//     for (unsigned int j = 0; j < (a.size() / 2); j++)
//     {
//         sum1 = sum1 + (a[j] - '0');
//     }
//     for (int k = (a.size() / 2); k < a.size(); k++)
//     {
//         sum2 = sum2 + (a[k] - '0');
//     }
//     if (sum1 == sum2)
//     {
//         return 1;
//     }
//     return 0;
// }

// void solve(int n, vector<string> ticket)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         string a;
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((ticket[i].size() % 2 == 0 && ticket[j].size() % 2 == 0) || (ticket[i].size() % 2 != 0 && ticket[j].size() % 2 != 0))
//             {
//                 a = ticket[i] + ticket[j];
//                 count +=count_string(a);
//                 a = ticket[j] + ticket[i];
//                 count+=count_string(a);
//             }
//         }
//     }
//     cout<<count+n;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     vector<string> ticket;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         ticket.push_back(s);
//     }
//     solve(n, ticket);
//     return 0;
// }