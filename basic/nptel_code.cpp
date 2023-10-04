#include <iostream>
using namespace std;

void ps(int S[], bool selected[], int i, int n){
	if(i == n){
		cout << "Selected elements: ";
		for(int j=0; j<n; j++)
			if(selected[j]) cout<<S[j]<<' ';
		cout << endl;
		return;
	}
	selected[i] = false;
	ps(S,selected,i+1,n);
	selected[i] = true;
	ps(S,selected,i+1,n);
	return;
}

int main(){
	int S[]={1,4,7,9};
	bool selected[4];
	ps(S,selected,0,4);
}