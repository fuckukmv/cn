#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

void slidingwindow(int tf, int n){
	srand(time(NULL));
	vector<int> arr ,temp;
	double ran;
	for(int i = 0; i < tf; i++){
		arr.push_back(i);
	}
	reverse(arr.begin(),arr.end());
	while(!arr.empty()||!(temp.empty())){
		while(!temp.empty()){
			arr.push_back(temp[temp.size()-1]);
			temp.pop_back();
		}
		for(int i = 0; i < n && i < arr.size(); i++){
			cout << "sending frame " << arr[arr.size()-1-i] << "\n";
		}
		for(int i = 0; i < n && !(arr.empty()); i++){
			int j = 0;
			ran=rand()/double(RAND_MAX);
			if(ran >= 0.5){
				cout << "Acknowlegdement " << /*i%n*/ arr[arr.size()-1] << " recevied\n";
				arr.pop_back();
			}
			else{
				cout << "Acknowledgement " << /*i%n*/ arr[arr.size()-1] << " not recevied\n";
				temp.push_back(arr[arr.size()-1]);
				arr.pop_back();
			}
		}
	}
}
int main(){
	int total_frame, n;
	cout << "Enter the number of total frames : ";
	cin >> total_frame;
	cout << "Enter the size of the window : ";
	cin >> n;
	slidingwindow(total_frame,n);
	return 0;
}
