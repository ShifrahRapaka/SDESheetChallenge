void sort012(int *arr, int n)
{
   //   Write your code here
    int lo=0,high=n-1,mid=0;
        while(mid<=high)
        {
            switch(arr[mid])
            {
                case 0:
                    swap(arr[lo++],arr[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[mid],arr[high--]);
                    break;
            }
        }
}