#include<iostream>

using namespace std;

class information{

    private:
    	
    int car_id;
    char car_company_name[100];
    char car_color[100];
    int car_model;
    int car_release_year;

	 
	public:
	
	void setter(){
		
		cout<<"Enter id : ";
		cin>>car_id;
		
		cout<<"Enter company name : ";
		cin>>car_company_name;
		
		cout<<"Enter color : ";
		cin>>car_color;
		
		cout<<"Enter model : ";
		cin>>car_model;
		
		cout<<"Enter release_year : ";
		cin>>car_release_year;
		
	}     	
	
	void getter(){
		
		cout<<"Your value of id : "<<car_id<<endl;	
		cout<<"Your value of company name : "<<car_company_name<<endl;	
		cout<<"Your value of color : "<<car_color<<endl;	
		cout<<"Your value of model : "<<car_model<<endl;	
		cout<<"Your value of release year : "<<car_release_year<<endl;	
		 
	}
};

main(){
	
	information i;
	
	i.setter();
	i.getter();
	

		 	
}
