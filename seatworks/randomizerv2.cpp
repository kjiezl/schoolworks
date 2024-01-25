#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

string randGenerate(int max, int min, int count){
int range = max-min +1;
vector <int>numbers;

int x;


for (int u=0;u<count;u++){
	bool confirm; 
	do{
		x = rand()% range + min;
		confirm=true;
		for(int a=0; a<u;a++){
			if(x==numbers[a]){
				confirm=false;
				break;
				}
		}
	}while(!confirm);
	numbers.push_back(x);
	cout<<x<<" ";
	}
	return "\n";
}

int main()
{
	loop: 
	
	int maxNum;
	int minNum;
	int countNum;
	srand(time(0));
	
	cout<<" max : ";
	cin>>maxNum;
	cout<<" min : ";
	cin>>minNum;
	cout<<" count : ";
	cin>>countNum;
	
	int range= maxNum - minNum + 1;
	
	cout<<randGenerate(maxNum, minNum, countNum);
	
	goto loop;
	
	

}