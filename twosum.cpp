#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int twosum(int nums[], int target) {
	for (int i = 0; i < 3; i++) {
		
		for(int j = i+1;i<3;i++){
		   if(nums[i]+nums[j] == target) {
			   cout << i << j << endl;
			   exit(0);
		   }
		}
	}
	return target;

}

int main() {
	int nums[3] = { 11,3,3 };
	int target = 6;
	int i, j;
	twosum(nums, target);
	
}
