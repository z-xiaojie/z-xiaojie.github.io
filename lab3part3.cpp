/*
  Author: Xiaojie
  Course: {135,136}
  Instructor: Xiaojie Zhang
  Assignment: Lab 3
  This program is an example, to get the result of C(n,n-1) (read n choose n-1).
*/

#include <iostream>
#include <limits>

using namespace std;

int calProduct(int n){
	int product = 1;
	for(int i=1;i<=n;i++){
		product = product * i;
	}
	return product;
}

int main(){
	
	int n = 1,k;
	
	cout << "MAX_int = "<< numeric_limits<int>::max() << endl;
	cout << "MAX_long int = "<< numeric_limits<long int>::max() << endl;
	
	while(n != 0){
		
		cout << "enter the value of n ( n=0 , quit loop) :";
		cin >> n;
		if(n == 0){
			break;
		}
	
		int k =1;
		cout << "enter the value of k ( k < n) :";
        cin >> k;
		
	    //n(n-1)(n-2)...(n-k+1)/k!
        int nkProduct = 1;
        for(int i=n;i>=n-k+1;i--){
		     nkProduct = nkProduct * i;
        }		
        int kProduct = calProduct(k);
		cout << "C(" << n << "," << k <<")=" << nkProduct / kProduct << endl;	
	}
}
