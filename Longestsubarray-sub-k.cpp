#include <iostream>
using namespace std;

int arr[10] = {3, 4, 1, 4, 2, 2, 1, 1, 1, 1};

int longestSubarray()
{
    int k = 7;
    int maxlength = 0;

    for(int i = 0; i < 10; i++)
    {
        int sum = 0;

        for(int j = i; j < 10; j++)
        {
            sum += arr[j];

            if(sum == k)
            {
                int length = j - i + 1;

                if(length > maxlength)
                {
                    maxlength = length;
                }
            }
        }
    }

    return maxlength;
}

int main()
{
    cout << longestSubarray() << endl;

    return 0;
}