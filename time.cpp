#include<iostream>
using namespace std;

	class time{
	
		int m,h;
		
		public:
		void gettime(int , int );
		void puttime(void);
		void sum(time , time);
		void display();
		};
		
	void time :: gettime(int x , int y){
		h=x;
		m=y;
		
		}
		
	void time :: puttime(void){
		cout<<"Enter Hours"<<h<<endl;
		
		cout<<"Enter Minutes"<<m<<endl;
		
		}
		
	void time :: sum(time t1 , time t2){
		m = t1.m + t2.m;
		h = m/60;
		m = m%60;
		h = h + t1.h + t2.h;
		}
	void time:: display(){
		cout<<"Total time is "<<h<<" "<< "Hours"<<m<<" "<<"Minutes"<<endl;
		}	
	
	
		
	int main()
	{
	class time t1,t2,t3;
		t1.gettime(3,40);
		t2.gettime(4,35);
		t3.sum(t1,t2);
		t1.puttime();
		t2.puttime();
		t3.display();
	
		 return 0;
		 }
		
		
		
		
		
		
		
		
		
