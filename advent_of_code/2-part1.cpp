// #include <iostream>
// #include <vector>

// using namespace std;

// const int N = 6;
// int main()
// {
//     vector<vector<int>> reports;

//     for (int i = 0; i < N; i++)
//     {
//         vector<int> temp;
//         int x1, x2, x3, x4, x5;
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> x1 >> x2 >> x3 >> x4 >> x5;
//             temp.push_back(x1);
//             temp.push_back(x2);
//             temp.push_back(x3);
//             temp.push_back(x4);
//             temp.push_back(x5);
//         }
//         reports.push_back(temp);
//     }

//     cout << "Reports:\n";
//     for (int i = 0; i < reports.size(); i++)
//     {
//         for (int j = 0; j < reports[i].size(); j++)
//         {
//             cout << reports[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    vector<vector<int>> reports;
    string line;

    // Read until EOF (end of file)
    while (getline(cin, line))
    {
        if (line.empty())
            continue; // skip empty lines

        stringstream ss(line);
        vector<int> temp;
        int num;

        // extract numbers from the line
        while (ss >> num)
        {
            temp.push_back(num);
        }

        reports.push_back(temp);
    }

    // Print the reports
    cout << "Reports:\n";
    for (int i = 0; i < reports.size(); i++)
    {
        for (int j = 0; j < reports[i].size(); j++)
        {
            cout << reports[i][j] << " ";
        }
        cout << endl;
    }

    // for(int i = 0; i< )

    return 0;
}
