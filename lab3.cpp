/*
  Author: Xiaojie
  Course: {135,136}
  Instructor: Xiaojie Zhang
  Assignment: Lab 3
  This program is an example, to get the product of n!(read n factorial)= 1*2*3*4*...*n.
*/

#include <iostream>
using namespace std;

int calProduct(int n){
	int product = 1;
	cout << n << "!" << "=" << "1" ;
	for(int i=2;i<=n;i++){
		product = product * i;
		cout << "*" << i ;
	}
	return product;
}

int main(){
	/*
		example
	*/
	int n = 1;
	while(n != 0){
		cout << "enter the value of n ( n=0 , quit loop) :";
		cin >> n;
		if(n == 0){
			break;
		}
		int nProduct;
		nProduct = calProduct(n);
		cout << "=" << nProduct << endl;	
	}
	
	/* Lab 3 */
	
	
	/*  
	   PART 1 code
	   Implement a program that inputs n and k and then computes C(n,k) directly by first computing (n! / (k! * (n-k)!) the 3 factorials: n!, k!, and (n-k)!. 
	   You probably want to do this by writing one loop each, mostly cut/paste of the first loop. You should represent variables as ints. 
	   Q. What is the smallest value of n for which C(n,n-1) returns an incorrect result? Explain why the results are incorrect (you don't need to figure out the actual relevant bit patterns). 
	*/
	
	/*
   		put your test cases for part 1
	*/
	
	
	
	/*
		PART 2 code
		Using "long int" instead of "int"
	*/
	
	/*
   		put your test cases for part 2
	*/
	
	
	
	/*
		PART 3 code
		C(n,k) can be rewritten as n(n-1)(n-2)...(n-k+1)/k!. Implement a program that computes C(n,k) based on this formula, using ints. 
		Hint: the numerator is obviously an iteration, but what is the iteration variable?). Repeat the questions from above. 
		Q. This program is obviously better than 1 since it works on more input values, but how does it compare to 1 efficiency-wise? 
		An appropriate measure of efficiency here would be the number of multiplies. 
	*/

	/*
   		put your test cases for part 3
	*/
	
	
	
	/*
		PART 4 code
		Use property (P2) to make your solution to 3 more efficient (in some cases). 
	*/
	
	/*
   		put your test cases for part 4
	*/
	
	
	
	
	/*
		PART 5 code
		The formula for C(n,k) can be expressed as the product (1+(n-k)/1) (1+(n-k)/2) (1+(n-k)/3) ... (1+(n-k)/k). Write a program to implement this.  
		Note that the terms in the product may not be integers. You should be able to handle much larger values of n and k now. 
		Warning: a naive implementation that ignores the type casting needed to convert between ints and intermediate data types will result in incorrect results - you can compare the results from previous tasks and this.  
	*/
	
	/*
   		put your test cases for part 5
	*/
}





