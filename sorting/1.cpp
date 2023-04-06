#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl cout<<"\n"

int32_t main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int odd = (n % 2);

    if (odd)
    {
        int flag = -1;
        int mid = (n / 2 + 1);
        for (int i = 1; i <= n / 2; i++)
        {
            if (arr[mid - i] < arr[mid + i])
            {
                flag = 1;
                break;
            }
            if (arr[mid - i] > arr[mid + i])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            for (int i = 1; i <= n / 2; i++)
                arr[mid + i] = arr[mid - i];
        else
        {
            int temp = mid;
            while (temp >= 0)
            {
                if (arr[temp] == 9)
                    arr[temp] = 0;
                else
                {
                    arr[temp] += 1;
                    break;
                }
                temp--;
            }
            for (int i = 1; i <= n / 2; i++)
                arr[mid + i] = arr[mid - i];
        }

        if (arr[0] == 0)
            for (int i = 1; i <= n; i++)
                cout << arr[i] << " ";
        else
        {
            arr[n] = 1;
            for (int i = 0; i <= n; i++)
                cout << arr[i] << " ";
        }

        endl;
    }

    
    else
    {
        int flag = -1;
        int mid = (n / 2);
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[mid - i] < arr[mid + i + 1])
            {
                flag = 1;
                break;
            }

            if (arr[mid - i] > arr[mid + i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            for (int i = 0; i < n / 2; i++)
                arr[mid + i + 1] = arr[mid - i];

        else
        {
            int temp = mid;
            while (temp >= 0)
            {
                if (arr[temp] == 9)
                    arr[temp] = 0;
                else
                {
                    arr[temp] += 1;
                    break;
                }
                temp--;
            }
            for (int i = 0; i < n / 2; i++)
                arr[mid + i + 1] = arr[mid - i];
        }

        if (arr[0] == 0)
            for (int i = 1; i <= n; i++)
                cout << arr[i] << " ";
        else
        {
            arr[n] = 1;
            for (int i = 0; i <= n; i++)
                cout << arr[i] << " ";
        }

        endl;
    }
    return 0;
}