
#include<iostream>
using namespace std;
//main function
int main(){
      cout<<"The various combinations of fruits that can be bought are:"<<endl;
      //maximum number of apples,actually maximum number can be anything
      for (int apple=0;apple<=100;apple++){
          //maximum number of mangoes,actually maximum number can be anything			/*THE PRINTING CONDITION IS GIVEN BELOW,SO THE MAX NUMBER OF*/
												  /*FRUITS DOES NOT MATTER,BUT IT MUST BE ABOVE OR EQUAL TO 100*/
          for (int mango=0;mango<=100;mango++){
               //maximum number of bananas,actually maximum number can be anything
               for (int banana=0;banana<=100;banana++){
                    //checking the total number of fruits and thier total cost
                    if (apple+mango+banana==100 && apple*1+mango*3+banana*0.5==100){
                         cout<<"Apples="<<apple<<", "<<"Mangoes="<<mango<<", "<<"Bananas="<<banana<<endl;}
                    }}}
     return 0;
}
