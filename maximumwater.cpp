#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxWater(vector<int>& height)
{
    int maximumWater = 0;

    for(int i = 0; i < height.size(); i++)
    {
        for(int j = i + 1; j < height.size(); j++)
        {
            int shortHeight = min(height[i], height[j]);
            int width = j - i;

            int totalWater = shortHeight * width;

            maximumWater = max(maximumWater, totalWater);
        }
    }

    return maximumWater;
}

int main()
{
    vector<int> height = {1, 2, 1, 3};

    int result = maxWater(height);

    cout << result << endl;

    return 0;
}