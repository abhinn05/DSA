pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low = 0;
	int high = n-1;
	int floor = -1;
	while(low<=high)
	{
		int mid = low + (high-low) / 2;
		if(x == a[mid])
		{
			floor = a[mid];
			break;
		}
		else if(x < a[mid])
		{
			high = mid - 1;
		}
		else if(x > a[mid])
		{
			floor = a[mid];
			low = mid + 1;
		}
	}

	int low1 = 0;
	int high1 = n-1;
	int ceil = -1;
	while(low1<=high1)
	{
		int mid = low1 + (high1-low1) / 2;
		if(x == a[mid])
		{
			ceil = a[mid];
			break;
		}
		else if(x < a[mid])
		{
			ceil = a[mid];
			high1 = mid - 1;
		}
		else if(x > a[mid])
		{
			low1 = mid + 1;
		}
	}
	pair<int,int> result;
	result.first = floor;
	result.second = ceil;
	return result;;


}