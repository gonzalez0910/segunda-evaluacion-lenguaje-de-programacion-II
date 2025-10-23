#include<iostream>
using namespace std;
int main(){
int mi,mf,ri,rf;

cin>>mi>>mf>>ri>>rf;

for(int i=mi;i<=mf;i++){
	for(int j=ri;j<=rf;j++)
	cout<<i<<"x"<<j<<"="<<i*j<<endl;
}
	
return 0;	
}


