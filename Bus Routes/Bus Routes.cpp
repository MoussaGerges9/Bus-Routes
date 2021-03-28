#include <iostream>
using namespace std;

int main()
{
    int t;
    int n;
    int d;
    int arr[1000];

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int max = 0;
        cin >> n;
        cin >> d;
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }

        for (int y = (n - 1); y >= 0; y--)
        {
            cout << "the modules: " << (d % arr[y]) << endl;
            d -= (d % arr[y]);
            cout << "the d: " << d << endl;
        }
        cout << "Case #" << i + 1 << ": " << d << endl;
    }
}