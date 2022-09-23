#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("enter number of elementsn");
scanf("%d",&n);
printf("enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("enter value to findn");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high=mid-1;
mid=(low+high)/2;
}
if(low > high)
printf("not found! %d isn't present in the list.n", key);
return 0;
}
