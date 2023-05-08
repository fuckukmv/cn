#include<iostream>
#include<cstdlib>
#include<ctime>
#include<unistd.h>
using namespace std;

int main()
{
    int num_packets;
    cout<<"Enter the number of packets to be transmitted: ";
    cin>>num_packets;
    int ack = 1;
    int seq_num = 1;
    int i;
    int num;
    srand(time(0));
    while(ack < num_packets+1)
    {
    for (i = 0; i < 1; i++) {
        num = (rand() %
        (3 - 1 + 1)) + 1;
    }

    cout<<"Sending packet with sequence number="<<seq_num<<endl;
        switch(num)
        {
        	case 1:
        		cout<<"Recieved packet with sequence number="<<seq_num<<endl;
            	cout<<"Acknowledgement lost, sequence number = "<<seq_num<<endl;
            	sleep(2);
            	cout<<"Timeout\n";
            	cout<<"Again ";
            	break;
            case 2:
            	cout<<"Recieved packet with sequence number="<<seq_num<<endl;
        		cout<<"Acknowledgement received for sequence number = "<<seq_num<<endl<<endl;
        		ack++;
        		seq_num++;
        		break;
        	case 3:
        		cout<<"Recieved packet with sequence number="<<seq_num<<endl;
        		
        		cout<<"Wrong Acknowledgement recieved : "<<seq_num-1<<endl;
        		cout<<"Again ";
        		break;
        
  		}
	}
    cout<<"All packets transmitted successfully"<<endl;
    return 0;
}
