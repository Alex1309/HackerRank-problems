#include <iostream>
using namespace std;

int main() {
	int n =5;
	int itemCount[]={1,2,3,2,1};
	int target = 4;
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=itemCount[i];
		if(sum>=target){
			break;
		}
	}
	if(target>sum)
		return target-sum;

	return sum-target;

}
