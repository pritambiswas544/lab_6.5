#include <iostream>
using namespace std;

 
 
 			//funtion for calling normal sallery
 int shoe (int s){
 	cout <<"What is the approx. number of shoes that you sell in a week? "<<endl;
 	cin >>s;
  	}
 			//function for overall sallery
 int totalSal(int s){
 s=600;
}
 			//function for calling for hourly commisiion
 int hourComm ( int s){
 float sal=40*7+(225*10*s/100);
 }
 

			//function for calling for per piece earing salalry
 int pieceSal (int s){
 float sallery=(20*s)+(225*20*s/100);
}
			//driver function
 int main(){
 int m;
 int x=shoe(m);
			//first salary

 
 float e1=totalSal(x);
 cout<<" Your salary for first option is "<< e1 <<endl;

			//second salary
 float e2=hourComm(x);
 cout << "Your salary for the second option is "<< e2 <<endl;
			//third salary
 float e3=pieceSal(x);
 cout <<"yor salary for the third option is "<<e3<<endl;
			//condition for which one is better

 if (e1>e2 and e1>e3){
 cout<<"first option is better with sallary "<<e1<<endl;
}

 else if(e1<e2 and e2>e3){
 cout<<" second option is better with sallary "<<e2<<endl;
}
 else {
 cout<< " third option is better with salley "<<e3<<endl;
}
 
return 0;
}



			
