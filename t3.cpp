#include<iostream>
using namespace std;

class data{
private:

       int emp_id;
       char emp_name[100];
	   char emp_role[100]; 
       int emp_age;
       int emp_salary;
       int emp_experience;
       char emp_city[100];
       char emp_comapany_name[100];
       
public:
  
       void setter(){
       	
       	cout<<"Enter id : ";	
       	cin>>emp_id;
       	
       	cout<<"Enter Name : ";	
       	cin>>emp_name;
       	
       	cout<<"Enter Role : ";	
       	cin>>emp_role;
       	
       	cout<<"Enter Age : ";	
       	cin>>emp_age;
       	
       	cout<<"Enter Salary : ";	
       	cin>>emp_salary;
       	
       	cout<<"Enter Experince : ";	
       	cin>>emp_experience;
       	
       	cout<<"Enter City Name : ";
       	cin>>emp_city;
       	
       	cout<<"Enter Comapany Name : ";	
       	cin>>emp_comapany_name;
       	
		   
}
	 void getter(){
	 	
	 	cout<<"your Value of ID : "<<emp_id<<endl;
	 	cout<<"your Value of ID : "<<emp_name<<endl;
	 	cout<<"your Value of ID : "<<emp_role<<endl;
	 	cout<<"your Value of ID : "<<emp_age<<endl;
	 	cout<<"your Value of ID : "<<emp_salary<<endl;
	 	cout<<"your Value of ID : "<<emp_experience<<endl;
	 	cout<<"your Value of ID : "<<emp_city<<endl;
	 	cout<<"your Value of ID : "<<emp_comapany_name<<endl;
}	      
};
       
main(){
	
	data a,b,c,d,e;
	
	a.setter();
	a.getter();
	b.setter();
	b.getter();
	c.setter();
	c.getter();
	d.setter();
	d.setter();
	e.getter();
	e.setter();
	

}
