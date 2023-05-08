#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void slidingwindow(int tf, int n){
	
	srand(time(NULL));
	int i=0;
	double ran;
	while(i<tf){ 
		for(int j=i;j<i+n && j<tf;j++){
			cout<<"Sending frame"<<j<<"\n";
		}
		for(int j=i;j<i+n && j<tf;j++){
			ran = rand()/double(RAND_MAX);
		
			if(ran>=0.5){
				cout<<"Acknowledgement"<<i<<" received \n";
				i++;
			}
			else{
				cout<<"Acknowledgement"<<i<<" not received !!!\n";
				break;
			}
		}
	}
}

int main(){
	int total_frame,n;
	cout<<"Enter the total number of frames: ";
	cin>>total_frame;
	cout<<"enter the size of the frame: ";
	cin>>n;
	slidingwindow(total_frame,n);
	return 0;
}
