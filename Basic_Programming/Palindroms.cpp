#include <iostream>

#include <string>


using namespace std;



int main() {

	
		string ayush;
		
int count=0;

	cin>>ayush;

	int n=ayush.length();

	for (int i=0;i<n/2;i++){

	    if (ayush[i]!=ayush[n-1-i]){

	    count=1;    
	 
   break;}

	}
		
		if(count){

		    cout<<"NO"<<endl;

		}
	
	else {

		    cout<<"YES";

		}
		
return 0;

}
