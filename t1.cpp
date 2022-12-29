#include<iostream>

using namespace std;

class data{

    private:
    	
    	char house_detail[100];
    	char room_detail[100];
    	
    public:
	
	 	void read(){
	 		
	 		cout<<"Enter house detail : ";
	 		cin>>house_detail;
	 		
	 		cout<<"Enter room detail : ";
	 		cin>>room_detail;
	 		
	 	}
	 		
	 	void print(){
	 		
	 		cout<<"Your text of house detail : "<<house_detail<<endl;
	 		cout<<"Your text of room detail : "<<room_detail<<endl;
	 		
		 }	
	 		
 };

main (){
	
	data h;
	
	h.read();
	h.print();
	
	h.read();
	h.print
	();
}
