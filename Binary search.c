//Binary search:- In a sorted array find mid value and check number is smaller or bigger than target value,
//then if value is smaller go left,bigger go right and perform same thing again and again
 
#include<stdio.h>
int main(){
	int target = 95;
	int arr[10]={1,2,5,7,9,16,75,95,115,745};
	int low = 0,mid,high=9;
	while(low <=high){
		mid = (low +high)/2;
		if (target==arr[mid]){
			printf("value at index %d",mid);
			break;
		}
		else if(target>arr[mid]){
			low = mid +1;
		}
		else if (target<arr[mid]){
			high=mid-1;
		}
	}
	return 0;
}
