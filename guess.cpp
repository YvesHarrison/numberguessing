//文件名 guess.cpp
//猜数游戏 

 
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int main() 
{	char choice;int create1,create2,create3,input1,input2,input3,win,lose,t,rightposition,rightnumber;
		
		cout<<"do you want to play this game?y or n?"<<endl;
		cin>>choice;
		win=0;
		lose=0;
		
		while (choice=='y'){
		    choice=0;
		    
			srand(time(NULL));                   //initialize random number's seed 
		
			create1=rand()*10/(RAND_MAX+1);      //create three different number 
			create2=rand()*10/(RAND_MAX+1);
			while (create2==create1){
				create2=rand()*10/(RAND_MAX+1);
			}
			create3=rand()*10/(RAND_MAX+1);
			while (create3==create1||create3==create2){
				create3=rand()*10/(RAND_MAX+1);
			}
			
			t=0;
			rightposition=0;
			rightnumber=0;
			
			while(t<7){
				
				cout<<"enter number1"<<endl;
				cin>>input1;
				cout<<"enter number2"<<endl;
				cin>>input2;
				cout<<"enter number3"<<endl;
				cin>>input3;                      //guess the number
				
				if (input1==create1){
				    ++rightposition;	}
				else if (input1==create2||input1==create3){
				    ++rightnumber;	}
				    
				if (input2==create2){
				    ++rightposition;	}
				else if (input2==create1||input2==create3){
				    ++rightnumber;	}
				
				if (input3==create3){
				    ++rightposition;	}
				else if (input3==create2||input3==create1){
				    ++rightnumber;	}              //calculate A,B
				
				if (rightposition==3&&rightnumber==0){
					++win;
					cout<<"you win"<<endl;
					cout<<"win"<<win<<"lose"<<lose<<endl;
					t=8;
					}
				else {
					cout<<rightposition<<"A"<<rightnumber<<"B"<<endl;
					rightposition=0;
					rightnumber=0;
					++t;
					}}
			
			if(t=7){
				++lose;
				cout<<"win"<<win<<"lose"<<lose<<endl;
				cout<<"sorry you lose.do you want play again?"<<endl;
				cin>>choice;}
			
			cout<<"do you want play again?"<<endl;
			cin>>choice;
			}
	return 0;
}

