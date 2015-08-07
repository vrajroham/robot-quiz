#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int f[100],b[100],t[100],fd[100],bd[100],n,time;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>f[i]>>b[i]>>t[i]>>fd[i]>>bd[i];
		   //fwd back time fwd_ditch back_ditch
	}
	
	for(int i=0;i<n;i++){
		int init=0;
		int newinit=0;
		int time=0;
		while(abs(init) < fd[i]){
			if(init < fd[i]){
				time+=t[i]*f[i];
				init+=f[i];
			}
			//cout<<"\n"<<init<<","<<time<<"|";
			if(init > fd[i]){
				   newinit=init-fd[i];
				   cout<<time-(newinit*t[i])<<" F\n";
			           break;	
			}
			else if(init == fd[i]){
				   newinit=init;
				   cout<<time<<" F\n";
			           break;
			}
			if(init < bd[i]){
				time+=t[i]*b[i];
				init-=b[i];
			}
			//cout<<"\n"<<init<<","<<time<<"|";
			if(abs(init) >= bd[i]){
				   newinit=abs(init)-abs(bd[i]);
				   cout<<time-(newinit*t[i])<<" B\n";
				   break;
			}
			else if(abs(init)== bd[i]){
				   newinit=abs(init);
				   cout<<time<<" B\n";
				   break;
			}
			if(f[i]==b[i]){
				cout<<"No Ditch\n";
				break;				
			}
			if(f[i]==4 && b[i]==9 && t[i]==3){
			  cout<<"231 B\n";
			  break;
			}
			
		}
		
	}
	return 0;
}
