// For question list , See the DEVbot v1.0 Questions file , they are case sensetive so please be careful
// Made with love by Saksham Saxena 
# include <iostream>
using namespace std; 
#include <windows.h>
#include <ctime>
void timer(){ // timer
	Loop:
  for (int a = 0; a < 61; a++)
   {
          if (a == 61)
        {
            a = a - 60;
           
		 }
		 system ("cls");
        cout << "Seconds:" <<a;
        Sleep(1000);
        system ("cls");
        
     }
     cout << " 60 seconds are done \n";
   cin.get();
}
void time(){ // current time
	time_t currentTime;

  time ( &currentTime );
  printf ( "The current local time is: %s", ctime(&currentTime) );
  
}
WORD GetConsoleTextAttribute (HANDLE hCon) // coloured font
{
  CONSOLE_SCREEN_BUFFER_INFO con_info;
  GetConsoleScreenBufferInfo(hCon, &con_info);
  return con_info.wAttributes;
}

void date(){ //curent date
	time_t t = time(0);
struct tm * now = localtime( & t );
cout << (now->tm_year + 1900)<<'-'<<(now->tm_mon + 1) <<'-'<< now->tm_mday<<"\n";
}
void calculator(){ // calculator
   int a , b , c , sum , sub , div , mult , ave , per;
    cout <<"	   			    CALCULATOR					";
    cout <<"Enter two numbers; \n";
    cin >> a;
    cin >> b;
    sum = a + b;
    sub = a - b;
    div = a / b;
    mult = a * b;
    ave = sum / 2;
    per = div * 100;
    cout <<"Press 1 for Addition \n 2 for substraction \n 3 for division \n 4 for muliplication \n 5 for average \n 6 for percentage\n";
    cin >> c;
cout << " You pressed = "<< c<<"\n";
if (c == 1){
 cout << "Addition = " << sum<<"\n";
    }
 if (c == 2){
    cout << "Substraction = " << sub<<"\n";
    }
   if (c == 3){
    cout << "Division =" << div<<"\n";
    }
if (c == 4){
    cout << "Multiplication =" << mult<<"\n";
    }
if (c == 5){
    cout << "Average =" << ave<<"\n";
    }
if (c == 6){
    cout << "Percentage =" << per<<"\n";
    }
if (c >= 7){
    cout << "You have pressed a invalid number \n";
    }
    	}	
void print () { // intro
 	cout << "Hi i am DEV.Please tell me your name: ";
 }

int main (void)
{
	int a=10, b=0, c=10; // indian flag
    char* bits ="TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
    a = bits[b];
    while (a != 0) {
        a = bits[b];
        b++;
        while (a > 64) {
            a--;
            if (++c == 'Z') {
                c /= 9;
                putchar(c);
            } else {
                putchar(33 ^ (b & 0x01));
            }
        }
	}
    
   
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // coloured dev large
  const int saved_colors = GetConsoleTextAttribute(hConsole);

  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
  
  cout << "	 		DDDDD      EEEEEE   V     V \n 			D    D     E        V     V \n 			D    D     E        V     V\n 			D    D     EEEEEE   V     V  \n 			D    D     E        V     V \n 			D    D     E         V   V \n 			DDDDD      EEEEEE      V  \n\n  		 THE INDIAN ARTIFICIAL INTELEGENCE\n \n";
  SetConsoleTextAttribute(hConsole, saved_colors);
system ("pause");
system ("cls");
string name ;
string f =" hi guys";
string how ="";
char dic;	
 print();
 cin >> name;
start:
 cout << " hi " << name <<" ! how can i help you? ";
cin.ignore();
 getline(cin,how,'\n');
// questions starts
 if (how ==  "Who proggramed you" || how == "who proggramed you"){
 	cout << "My best friend Saksham saxena \n";
 }

 else if (how ==  "Hi" || how =="hello"){
 	cout << "Hey there\n";
 }
 else if (how ==  "why dont you speak" || how =="speak something"){
 	cout << " my speaking skills are horrible . People even faint after listening it and \n i don't want to increase your medical bill\n";
 }
else if (how ==  "close your eyes" || how =="sleep"){
 	goto close ;
 }
 else if (how ==  "i am bored" || how == "I am bored"){
 	cout << "Hey "<< name <<" i know that i am not so funny But here is a joke \n Harry : I got a 100 in my test \n Hari: in what subject do you got a 100 \n Harry: a 40 in maths and 60 in english \n";
 }
 else if (how ==  "Tell me a joke" || how == "tell me a joke"){
 	cout << "What will father fire fly will say to mother fire fly? \n";
 	cout << " I`snt our kid bright for his future";
 }
 	
 else if ( how == "Tell me the Prime Minister of India " || how == "tell me the prime minister of india"){
 	cout << " Mr. Narender modi \n";
 }
 
  else if ( how == "Tell me about yourself" || how == "tell me about yourself"){
 	cout << " Hi ! i am Dave . I am a AITRB which means Artficially Intelegent Text \n Recognizing Bot. I am programmed by my friend Saksham Saxena \n";
 }
  else if (how ==  "Divide 0 by 0" || how == "divide 0 by 0"){
 	cout << "Lets visualize it . Suppose you have 0 cookies and you have to distribute them\n among 0 friends This makes no sense and The cookie monster is unhappy because\n he has no cookies  and you are unhappy as you have no friends\n";
 }
 

  else if (how ==  "Open calculator" || how == "open calculator"){
calculator();
}
 else if (how ==  "Open Windows Explorer" || how == "open windows explorer"){
system ("explorer.exe ");
}

else if (how ==  "Tell me the date" || how == "tell me the date"){
date();
}
else if (how ==  "set a timer" || how == "Set a timer"){
timer();
}
else if (how ==  "Tell me the time" || how == "tell me the time"){
time();
}
 else if (how ==  "what`s your name" || how == "Whats your name"){
 	cout << "DEV . it`s just DEV.\n";
 }
  else if (how ==  "Open notepad" || how == "open notepad"){
 	system ("notepad.exe  ");
}
 else if (how ==  "Open Sticky notes" || how == "open sticky notes"){
 	system ("StikyNot.exe ");
}
 else if (how ==  "you are awesome" || how == "You are awesome"){
 	cout << "Same as you.\n";
 }
 else if (how ==  "Open Paint" || how == "open paint"){
 		system ("mspaint.exe ");
 }
  else if (how ==  "Open Sound Recorder" || how == "open sound recorder"){
 		system ("SoundRecorder.exe ");
 }
  else if (how ==  "open google" || how == "Open Google"){
 	char* linkChar="http://www.google.com";
ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
cout << " wait a minute ......\n";
 }
else if (how ==  "thanks" || how == "thank you"){
 	cout << "no need of it\n";
 }
 else {
 	cout <<" This thing is not in my database ,as i am still learning i didnt know it \n i will improve it in my next update . \n\nSuggest your questions at Email : soniasaxena110679@gmail.com \n";
 }
 dic:	
cout << " do you want to exit . \n Press Y or N \n";
cin >> dic;
if ( dic ==  'Y'|| dic =='y'){ // quit menu
close:
system ("cls");
cout << " This AI is made by Saksham Saxena  \n\n\n\ THANKS FOR USING THIS PRODUCT \n\n "; // end

system ("pause");
	goto end;
}
else { 
goto start;
}
	 goto start;
	 end:
	 return 0;
}
