/*
  Author: Xiaojie
  Course: {135,136}
  Instructor: Xiaojie Zhang
  Assignment: Lab 2

  This program is an example, to get the sum of 1+2+3+....+n.
*/

//You have to explain the point of each code block as comment.

#include <iostream>
using namespace std;

int main(){
     //1. Declare variables at the beginning line.
     int sum = 0; 
     int n = -1;   
     //2.Identify inputs and outputs of the problem (including datatypes).
     while(n < 0){
	cout << "please enter the max value (n must be a positive number):";
	cin >> n;   
     }
     //3.Understand the problem well. In this case, we calculate 1+2+...+n.
     /*
	lab2 : p(n+1) = (1+g-h)*p(n) - g*p(n)*p(n)/M.
	user prompt : 0 < g , 0 < h < 1 ,  0 < M
	datatype:  g and h is "double", M is "int" 
     */
     for( int i=1 ; i <= n ; i++){
	 sum = sum + i;
     }
     cout << "get the result, sum=" << sum << endl;
}

/*
    Put your test case here.
    lab2 : p(0) = 10 , M = 100 , h = 0.20 , g = 1.25 or 2.50 or 3.00 or ..
*/

/*
    Put your analysis for part 2 here.
*/
