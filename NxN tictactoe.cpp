#include <iostream>
#include <fstream>
using namespace std;



int main()
{
	cout << "\t\t\tNxN TIC TAC TOE\n\n";
	char actual[8]={'h','u','s','s','a','m','\0'};
	int password, pass=12345;
	cout << "Please login to continue to your game\n\n\t\t\t\t\t\t\tHint!\n\t\t\t\t\t\t\tusername: hussam\n\t\t\t\t\t\t\tpass: 12345\n";
	
	login:
	cout << "Username: ";
	string username;
	cin >> username;
	
	cout << "Password: ";
	cin >> password;
	if(username==actual && password==pass)
	{
		system("cls");		//to clear the screen
		int playerx=0, playero=0;
		cout << "\t\t\tWelcome " << username << "\n\nSelect an option to continue\n";
		
		main:
		cout << "\na.  New game\nb.  Total victories of Player X\n";
		cout << "c.  Total victories of Player O\nd.  Reset highscores\ne.  Exit\n\n";
		
		//////////////////  The game  /////////////////////////////
		
		char select;
		cin >> select;
		if(select=='a')
	{
	system("cls");			
	int s;
		play:
	cout << "\n\tEnter the Dimensions of the game:\t";
	cin >> s;
	int arr[s][s];
	char move[s][s];
	int count=0;
	for (int i=0; i<s; i++)
	{
		for (int j=0; j<s; j++)
		{
			count++;
			arr[i][j]=count;
			move[i][j]=' ';
			
		}
	}
	system("cls");
	
	cout <<"\t\t\t     " << s << " x " << s << " TIC TAC TOE GAME\n\n\n";
	cout << "How To play:\n\n1. You will need to enter a valid number to have a certain move.\n";
	cout << "2. There are 8 conditions for winning a game:\n\n";
	cout << "a. Top row has same symbol\n";
	cout << "b. Middle row has same symbol\n";
	cout << "c. Bottom row has same symbol\n";
	cout << "d. Left column has same symbol\n";
	cout << "e. Middle column has same symbol\n";
	cout << "f. Right column has same symbol\n";
	cout << "g. Diagonal from top left to bottom right has same symbol\n";
	cout << "h. Diagonal from top right to bottom left has same symbol\n\n";
	cout << "2. You can not overwrite a same location, \n   if done the game will not function properly.\n\n\n ";
	
	
	//table having values stored in them
	int c=0;
	
		for(int q=0;q<s;q++)
			{
				cout << "\t\t\t";
			for(int w=0;w<s;w++)
			{
				c++;
				if(c<=9)
				{
					cout<<"  "<<arr[q][w]<<"  ";
				}
			   else if(c>9 && c<100)
				{
					cout<<"  "<<arr[q][w]<<" ";
				}
				
				else
				{
					cout<<" "<<arr[q][w]<<" ";
				} 
			
			if(w<s-1)
			
			cout<<"|";
			}
			cout<<endl;
			{
				cout << "\t\t\t";
			for(int p=1;p<=s;p++)
				{
				
				if(q<s-1)
				cout<<"------";
				}
			}
			cout<<endl;
			}	
			
			cout << "\n\nTo proceed the game\n";
			system("pause");
			system("cls");
			
			
	//The turns made by the player, the visual table, the winning checks, every thing is inside it ==>THE BIG WHILE LOOP...
	
	char turn;
	int counter=0;
	char symbol='x';
	int  r=0;
	while (r<(s*s))
	{
				c=0;
	cout << "\n\n::USE THIS AS A REFERENCE\n\n";
		for(int q=0;q<s;q++)
			{
				cout << "\t\t\t";
			for(int w=0;w<s;w++)
			{
				c++;
				if(c<=9)
				{
					cout<<"  "<<arr[q][w]<<"  ";
				}
			   else if(c>9 && c<100)
				{
					cout<<"  "<<arr[q][w]<<" ";
				}
				
				else
				{
					cout<<" "<<arr[q][w]<<" ";
				} 
			
			if(w<s-1)
			
			cout<<"|";
			}
			cout<<endl;
			{
				cout << "\t\t\t";
			for(int p=1;p<=s;p++)
				{
				
				if(q<s-1)
				cout<<"------";
				}
			}
			cout<<endl;
			}	
	
	
	if(counter%2==0) 		//shifting players turns i.e player X and player Y
		turn='X';
	else
		turn='O';
		
		
	int m;
	
	cout<<"\nPlayer "<<turn<<endl;
	cout<<"Enter a number to have valid move:\t";
	cin>>m;
	cout<<"\n";
	
	
		/*	 if(symbol=='x')
    symbol='o';
	else
	symbol='x';
	*/
	{
			if(r%2==0)
			{
				symbol='x';
			}
			else
			{
				symbol='O';
			}
		 } 
		again:
		for (int i=0; i<s; i++)
		{
			for (int j=0; j<s; j++)
			{
				if(arr[i][j]==m)
				{
					if(move[i][j]==symbol)
					goto again;
						if(arr[i][j]==0)
						{
							cout<<" ";
						}
						else
						{  
							
							move[i][j]=symbol;
							arr[i][j]=0;
						}
						
				}
			}
		}
		
				system("cls");
				cout << "\n\n";
				cout <<"\t\t\t     " << s << " x " << s << " TIC TAC TOE GAME\n\n";
			cout << "::THE ACTUAL GAMEPLAY\n\n";	
			for(int q=0;q<s;q++)
			{	
				cout << "\t\t\t";
			for(int w=0;w<s;w++)
			{
			
					cout<<"  "<<move[q][w]<<"  ";
			 
			
			if(w<s-1)
			
			cout<<"|";
			}
			cout<<endl;
			{
				
			cout << "\t\t\t";
			for(int p=1;p<=s;p++)
				{
				
				if(q<s-1)
				cout<<"------";
				}
			}
			cout<<endl;
		}	
		
		
		//checks for winning , rows, columns, diagonals
		char t;
				int counter2=0;
				for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='x')
		           	{
		           		t=move[q][w];						//For rows ==> if rows=='X'...player X
		           		for( int e=0; e<s; e++)
		           		{
		           			if(t==move[q][e])
		           			{
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player X Wins"<<"\n\n";
						   	
						   	playerx=playerx+1;
						   	ofstream p1("scoreX.txt");
							int g=playerx;
							p1 << g << endl;
							p1.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
			}

			for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='O')
		           	{
		           		t=move[q][w];
		           		for( int e=0; e<s; e++)
		           		{
		           			if(t==move[q][e])			//For rows ==> if rows=='O'... player y
		           			{
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player O Wins\n\n";
						   	
						   	playero=playero+1;
						   	ofstream p2("scoreY.txt");			//filing
							int h=playero;
							p2 << h << endl;
							p2.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   		break;
						   }
						   t=0;
						   counter2=0;
					   }
				}
			}
				
				for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='x')
		           	{
		           		t=move[q][w];						//For columns ==> if columns=='X'...player X
		           		for( int e=0; e<s; e++)
		           		{
		           			if(t==move[e][q])
		           			{
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player X Wins"<<"\n\n";
						   	
						   	playerx=playerx+1;
						   	ofstream p3("scoreX.txt");
							int g1=playerx;
							p3 << g1 << endl;
							p3.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
			}
				
				for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='O')
		           	{
		           		t=move[q][w];						//For columns ==> if columns=='O'...player Y
		           		for( int e=0; e<s; e++)
		           		{
		           			if(t==move[e][w])
		           			{
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player O Wins"<<"\n\n";
						   	
						   	playero=playero+1;
						   	ofstream p4("scoreY.txt");			//filing
							int h1=playero;
							p4 << h1 << endl;
							p4.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
			}
			
			
					for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='x')
		           	{
		           		t=move[q][w];						//For diagonals(left to right) ==> if diagonal=='X'...player X
		           		for( int e=0; e<s; e++)
		           		{
		           			if(q==w)
		           			{
		           				if(t==move[q+e][w+e])
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player X Wins"<<"\n\n";
						   	
						   	playerx=playerx+1;
						   	ofstream p5("scoreX.txt");
							int g2=playerx;
							p5 << g2 << endl;
							p5.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
			}
				
				for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='O')
		           	{
		           		t=move[q][w];						//For diagonals(left to right) ==> if diagonal=='O'...player Y
		           		for( int e=0; e<s; e++)
		           		{	if(q==w)
		           			{
		           				if(t==move[q+e][w+e])
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player O Wins"<<"\n\n";
						   	
						   	playero=playero+1;
						   	ofstream p6("scoreY.txt");			//filing
							int h2=playero;
							p6 << h2 << endl;
							p6.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
			}
			
			
					for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='x')
		           	{
		           		t=move[q][w];
						   						//For diagonals(right to left) ==> if diagonal=='X'...player X
		           				int h;
		           		for(  int e=0,h=s-1; e<s,h>=0; e++,h--)
		           			{
		           				if(t==move[e][h])
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player X Wins"<<"\n\n";
						   	
						   	playerx=playerx+1;
						   	ofstream p7("scoreX.txt");
							int g3=playerx;
							p7 << g3 << endl;
							p7.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
			
				
				for(int q=0; q<s; q++)
               	{
	            	for(int w=0; w<s; w++)
	              	{
		            	
		           	if(move[q][w]=='O')
		           	{
		           		t=move[q][w];			
						   			//For diagonals(right to left) ==> if diagonal=='O'...player Y
		           			int h;
		           		for(  int e=0,h=s-1; e<s,h>=0; e++,h--)
		           			{
		           				if(t==move[e][h])
		           				counter2++;
							   }
						   }
						   if(counter2==s)
						   {
						   	cout<<" Player O Wins"<<"\n\n";
						   	
						   	playero=playero+1;
						   	ofstream p8("scoreY.txt");			//filing
							int h3=playero;
							p8 << h3 << endl;
							p8.close() ;
							
						   	cout << "To play again\n";
						   	system("pause");
						   	system("cls");
						   	goto out;
						   break;					
							   }
						   t=0;
						   counter2=0;
					   }
				}
		if(r==(s*s))
		{
		cout << "\nDRAW";
		goto out;
		}

						
	counter++;
		r++;
	}
	system("pause");
	
	out:
		{
			goto main;
		}
}


		if(select=='b')
		{
		system("cls");
			ifstream g1("scoreX.txt");		//read the file	
			int h;
			while(!g1.eof())		//end of function
		{
			g1 >> h;
			cout<< "Total victories of Player X: "  << h << "\n\n";
			break;
		}
			g1.close();
			system("pause");
			system("cls");
			goto main;
		}
		
		/////////////////////  Total Victories Of player O  /////////////////////////
		if(select=='c')
		{
			
			system("cls");
			ifstream b1("scoreY.txt");		//read the file	
			int d;
			while(!b1.eof())		//end of function
		{
			b1 >> d;
			cout<< "Total victories of Player O: "  << d << "\n\n";
			break;
		}
			b1.close();
			system("pause");
			system("cls");
			goto main;
			
		}
		
		//////////////////////  Exit  //////////////////////////////////////////
		
		if(select=='e')
		{
			system("cls");
			cout << "Are you sure to exit the game? (y/n)\t";
			retry:
			cin >> select;
			if(select=='y')
			{
				return 0;
			}
			else if(select=='n')
			{ cout << "\n";
				system("cls");
				goto main;
			}
			else 
			{
				cout << "Select an option (y/n): " ;
				goto retry;
			}
			}
			
		if(select=='d')
		{
			char reset;
		  res:
			cout << "Are you sure to reset the HIGHSCORES?? y/n\t";
			cin >> reset;
			if(reset=='y')
			{
				ofstream p9("scoreX.txt");
		int g4=0;
		p9 << g4 << endl;
		p9.close() ;
		
		ofstream p10("scoreY.txt");			//filing
		int h4=0;
		p10 << h4 << endl;
		p10.close() ;
		
		system("pause");
		system("cls");
		goto main;
			}
			else if(reset=='n')
			{
				system("cls");
				goto main;
			}
			else
			{
				system("cls");
				goto res;
			}
		}
	
			else if(select!='a' || select!='b' || select!='c' || select!='d')   //CONNECTED TO THE MAIN-MENU
			{
				cout << "\nInvalid Entry!\n";
				system("pause");
				system("cls");
				goto main;
			}
	}

		////////////////////////////  For Invalid Password  //////////////////////	
	
	else 		//for username/password entry 
	{
		
		
		if(username!=actual)
		{
			system("cls");
			cout << "\nInvalid Username!\tTry again\n\n";
			goto login;
			
		}
	 	if(password!=pass)
	 	{
	 		system("cls");
	 		cout << "\nInvalid Password!\tTry again\n\n";
	 		goto login;
		 }
	  else if(username!=actual && password!=pass)
		 {
		 	system("cls");
		 	cout << "\nInvalid username and password!\tTry again\n\n";
		 	goto login;
		 }
	}
	cout << endl << endl;
	return 0;
}

