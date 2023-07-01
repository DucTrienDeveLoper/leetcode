// Yêu cầu gộp 2 mảng lại với nhau vào mảng cha
// Phải sắp xếp lại giá trị của mảng cha

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
void nhapmang(int nums[],int n){
	for(int i = 0 ; i<n;i++){
		cout<<"nhap mang: "<<endl;
		cin>>nums[i];
	}
}

void mergearr(int nums[],int n ,int arr[],int a,int merge[],int pre ){
	int i=0; int j=0; int k=0;
	while(i<n && j<a){
		if(nums[i]<= arr[j]){
			merge[k]=nums[i];
			i++;
		}
		else{
			merge[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<n){
		merge[k]=nums[i];
		i++;
		k++;
	}
	while(j<a){
		merge[k]=arr[j];
		j++;
		k++;
	}
}
void xuatmang(int merge[],int pre){
	for(int i=0;i<pre;i++){
		cout<<merge[i];
		i++;
	}
}

int main() {
	int n,a;
	int nums[4];
	int arr[4];
	
	nhapmang(nums,4);
	nhapmang(arr,4);
	int merge[8];
        mergearr(nums,4,arr,4,merge,8);
        xuatmang(merge,8);


}
