/*
  Author: <name>
  Course: {135,136}
  Instructor: Xiaojie Zhang
  Assignment: Lab 4

  This is an example of how to use nested loop. The output is 5*5  rectangle.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int w =5,h=5;
	
	for(int i=1 ; i<=h;i++){
		for(int j=1;j<=w;j++){
			cout << "*"; 
		}
		cout << endl;
	}
	
}

