#include <iostream>
#include <vector>
using namespace std;

vector<int> twosum(vector<int> &num, int target)
{
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i + 1; j < num.size(); j++)
        {
            int sum = num[i] + num[j];
            if (sum == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main()
{
    vector<int> num(5);
    cout << "enter the values of array->";
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }
    int target;
    cout << "enter the target->";
    cin >> target;
    vector<int> result = twosum(num, target);
    if (result[0] != -1)
    {
        cout << "Indexes: " << result[0] << " and " << result[1];
    }
    else
    {
        cout << "No solution found";
    }

    return 0;
}