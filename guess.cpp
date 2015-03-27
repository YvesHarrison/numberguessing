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
		    
			srand(time(NULL));
		
			create1=rand()*10/(RAND_MAX+1);
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
			
			while(t<8){
				
				cout<<"enter number1"<<endl;
				cin>>input1;
				cout<<"enter number2"<<endl;
				cin>>input2;
				cout<<"enter number3"<<endl;
				cin>>input3;
				
				if (input1==create1){
				    ++rightposition;	}
				if (input1==create2){
				    ++rightnumber;	}
				if (input1==create3){
				    ++rightnumber;	}
				    
				if (input2==create2){
				    ++rightposition;	}
				if (input2==create1){
				    ++rightnumber;	}
				if (input2==create3){
				    ++rightnumber;	}
				
				if (input3==create3){
				    ++rightposition;	}
				if (input3==create2){
				    ++rightnumber;	}
				if (input3==create1){
				    ++rightnumber;	}
				
				if (rightposition==3&&rightnumber==0){
					++win;
					cout<<"you win"<<endl;
					cout<<"win"<<win<<"lose"<<lose<<endl;
					cout<<"do you want play again?"<<endl;
					cin>>choice;
					}
				else {
					cout<<rightposition<<"A"<<rightnumber<<"B"<<endl;
					++t;
					rightposition=0;
					rightnumber=0;
					}}
			
			if(t=8){
				++lose;
				cout<<"win"<<win<<"lose"<<lose<<endl;
				cout<<"sorry you lose.do you want play again?"<<endl;
				cin>>choice;}
			
			}
	return 0;
}

