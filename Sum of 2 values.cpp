#include <iostream>
#include <vector>
#include <map>
using std::cin;
using std::cout;
using namespace std;
 
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> vals;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (vals.count(x - v[i]))
        {
            cout << vals[x - v[i]] << " " << i + 1 << "\n";
            return 0;
        }
        vals[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE" << '\n';
}