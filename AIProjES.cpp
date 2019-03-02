#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;


int main(){
	string userResponse,result;
	int userResponse2;
	int laptopspecs[8];
	bool minimal = false, lightheavy = false, widescreen = false, applightheavy = false, prospeed = false, 
 	gameslightheavy = false, schooluse = false, avgsize = false, budget = false;//ex. lightheavy if yes then light, avgsize true is high,budget is false then low

	cout<<"Let me decide a laptop for you :)"<<"	"<<"Note: Please answer within the choices"<<endl<<endl<<endl;
	cout<<"What kind of laptop design you like?"<<endl;
	
	cout<<"Minimal? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	minimal = true;}
	else if(userResponse == "n"){ 
  	minimal = false;}
  	
  	cout<<"Thick? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	lightheavy = false;}
	else if(userResponse == "n"){ 
	lightheavy = true;}
	
	cout<<"Do you like it wide? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	widescreen = true;}
	else if(userResponse == "n"){ 
	widescreen = false;}
	
	cout<<"What applications do you usually use?"<<endl<<"[1]Photoshop"<<endl<<"[2]Chrome"<<endl<<"[3]Paint"<<endl<<"[4]iTunes"<<endl;cin>>userResponse2;
	if(userResponse2 == 1 || userResponse2 == 2){ 
  	applightheavy = false;}
	else if(userResponse2 == 3 || userResponse2 == 4){ 
	applightheavy = true;}
	
	cout<<"High processing speed makes your laptop faster, do you like it? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	prospeed = true;}
	else if(userResponse == "n"){ 
	prospeed = false;}
	
	cout<<"Do you play games a lot? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	cout<<"What kind of games do you play?"<<endl<<"[1]Tetris"<<endl<<"[2]Pinball"<<endl<<"[3]GTA"<<endl<<"[4]Halo"<<endl<<"[5]Dota"<<endl;
  	cin>>userResponse2;
 	if (userResponse2 == 1||userResponse2 == 2||userResponse2 == 3){
  	gameslightheavy = false;}
  	else if(userResponse2 == 4||userResponse2==5){
  	gameslightheavy = true;}}
	else if(userResponse == "n"){
	gameslightheavy = false;}
	
	cout<<"If you use it for school, do you use it for programming? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	schooluse = true;}
	else if(userResponse == "n"){ 
	prospeed = false;}
	
	cout<<"Are the files you usually store are movies/anime/kdrama? [y/n] ";cin>>userResponse;
	if(userResponse == "y"){ 
  	avgsize = true;}
	else if(userResponse == "n"){ 
	avgsize = false;}
	
	cout<<"Lastly, what is you budget for purchasing a lappy?"<<endl<<"[1]10-50k"<<endl<<"[2]50-100k"<<endl;cin>>userResponse2;
	if(userResponse2 == 1){ 
  	budget = false;}
	else if(userResponse2 == 2){ 
	budget = true;}

//laptopspecs = [minimal] [lightheavy] [widescreen] [applightheavy] [prospeed] [gameslightheavy] [schooluse] [avgsize] [budget]
	laptopspecs[0] = minimal;
	laptopspecs[1] = lightheavy;
	laptopspecs[2] = widescreen;
	laptopspecs[3] = applightheavy;
	laptopspecs[4] = prospeed;
	laptopspecs[5] = gameslightheavy;
	laptopspecs[6] = schooluse;
	laptopspecs[7] = avgsize;
	laptopspecs[8] = budget;
//convert int arr to string to compare lappys	
	stringstream strStream (stringstream::in | stringstream::out);
 	strStream << laptopspecs[0];
 	strStream << laptopspecs[1];
 	strStream << laptopspecs[5];
 	strStream << laptopspecs[8];
 result = strStream.str();
 
//output
system("CLS");

if(result == "1111"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Apple Macbook Air(2018)"<<endl;
		  if(widescreen == true){
		  numdata = 15;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "1001"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Lenovo Yoga C930"<<endl;
		  if(widescreen == true){
		  numdata = 15;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "1010"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"HP Spectre x360 13(late 2017)"<<endl;
		  if(widescreen == true){
		  numdata = 15.6;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "1110"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Apple Macbook(2016)"<<endl;
		  if(widescreen == true){
		  numdata = 15;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "1100"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Microsoft Surface Pro"<<endl;
		  if(widescreen == true){
		  numdata = 15;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "1011"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Acer Swift 7"<<endl;
		  if(widescreen == true){
		  numdata = 15;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "1101"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Lenovo Mix 720"<<endl;
		  if(widescreen == true){
		  numdata = 15;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 8;}
		  else if(applightheavy == true){
	   	  numdata = 4;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "0011"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Asus ROG Zephyrus S GX701"<<endl;
		  if(widescreen == true){
		  numdata = 17.3;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 24;}
		  else if(applightheavy == true){
	   	  numdata = 8;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "0111"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"MSI GS65 Stealth"<<endl;
		  if(widescreen == true){
		  numdata = 15.6;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 16;}
		  else if(applightheavy == true){
	   	  numdata = 8;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "0110"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Dell G3 15"<<endl;
		  if(widescreen == true){
		  numdata = 15.6;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 16;}
		  else if(applightheavy == true){
	   	  numdata = 8;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "0010"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"HP Pavilion"<<endl;
		  if(widescreen == true){
		  numdata = 15.6;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 16;}
		  else if(applightheavy == true){
	   	  numdata = 8;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else if(result == "0100"){//1111 minimal thin heavygaming high price
		  double numdata = 0;
		  cout<<"The laptop I've chosen for you is: ";
		  cout<<"Huawei MateBook X Pro"<<endl;
		  if(widescreen == true){
		  numdata = 15.6;}
		  else if(widescreen == false){
	   	  numdata = 12;}
		  cout<<numdata<<"-inch model"<<endl;
		  
		  if(avgsize == true){
		  numdata = 1;}
		  else if(avgsize == false){
		  numdata = 500;}
		  cout<<"with "<<numdata<<"tb storage"<<endl;
		  
		  if(applightheavy == false){
	   	  numdata = 16;}
		  else if(applightheavy == true){
	   	  numdata = 8;}
	   	  cout<<"having "<<numdata<<"Gb RAM"<<endl;
	   	  
		  if(prospeed == true){
	   	  numdata = 3.2;}
	   	  else if(prospeed == false){
	   	  numdata = 2.4;}
	   	  cout<<"blasting it with "<<numdata<<"Ghz!"<<endl;
}
else{
	 cout<<"I'm sorry, I can't seem to find a lappy good for you :( "<<endl;}
  	
getch();
return 0;
}


