#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		cout << arr[0] + arr[1] << "\n";
	}
	return 0;
}
