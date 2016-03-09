#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

	int a;

	cout <<"Please enter an integer!"<< endl;
	cin >> a;

	for(;;){

	   cout << a <<" ";
	
		if(a == 1){
			cout << endl;
			exit(1);	
		}else if( (a%2) == 1){
			a = 3*a+1;
		}else{
			a = a/2;
		}
	
	}
		
	return 0;
}
