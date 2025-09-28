// #include <vector>
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// const int N = 1000;
// int main()
// {
//     vector<long> x, y;

//     for (int i = 0; i < N; i++)
//     {
//         long a, b;
//         cin >> a >> b;
//         x.push_back(a);
//         y.push_back(b);
//     }
//     sort(x.begin(), x.end());
//     sort(y.begin(), y.end());

//     long long sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         sum += abs(x[i] - y[i]);
//         cout << "Distance between " << x[i] << " " << y[i] << " = " << sum << endl;
//     }
//     cout << "Total Distance : " << sum << endl;
// }

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> a, b;
  int x, y;

  while (cin >> x >> y)
  {
    a.push_back(x);
    b.push_back(y);
  }
  // sort(b.begin(), b.end());
  // sort(a.begin(), a.end());

  long long sum = 0;

  for (int i = 0; i < a.size(); i++)
  {
    int count = 0;
    for (int j = 0; j < a.size(); j++)
    {
      if (a[i] == b[j])
      {
        count++;
      }
    }
    sum += a[i] * count;
  }

  cout << sum << "\n";

  return 0;
}