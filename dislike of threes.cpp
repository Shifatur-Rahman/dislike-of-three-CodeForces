#include <iostream>
using namespace std;
int main(){

int i, j=1, arr[1001];

for(i=1; i<=1666; i++){

	if((i%3 !=0) && (i%10 !=3)){
		arr[j] = i;
		j++;
	}
}


int t,k;
cin>>t;
while(t--){
	cin>>k;
	cout<<arr[k]<<endl;
}




return 0;


}
