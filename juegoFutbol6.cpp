//Juego de Penales
//Martin Naparstek 10/02/12
//3 Niveles. Equipos con Nombres
// Modified fstream on  11/3/12

#include <iostream>
#include <iomanip>
#include <ctime> // for time() function
#include <cstdlib> // for rand() and srand() functions
#include <fstream> //Input Output File
using namespace std;

int main()
{
	char menuOption;
	int shoot;
	char goalie;
	
	//Main Menu user-controlled loop
	do
	{
	cout<<endl;
	cout<<endl;
	cout<<setw(50)<<"Welcome to C++ Soccer PKs"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"H.How to Play"<<endl;
	cout<<"P.Let's Play"<<endl;
	cout<<"Q.Quit"<<endl;
	
	cout<<endl;
	cout<<"Please select an option from the menu"<<endl;
	cout<<endl;
	cin>>menuOption;
	cout<<endl;
	
	
		//Input Validation
		if ((menuOption !='H') && (menuOption !='P') && (menuOption !='Q') && (menuOption !='M') )
		{
			cout<<"ERROR!!!"<<endl;
		}
		
		// How to play.
		if (menuOption == 'H')
		{
			//Arco y Arquero DIBUJO
			cout<<"\n"<<setw(40)<<"How to Play\n"<<endl;
			cout<<"To choose where to shoot just input a number from 1-9."<<endl;
			cout<<"For example 1 will place the ball in the lower left corner.\n"<<endl;
			
			cout<<"It's a round of 5 PK."<<endl;
			cout<<"Each goal counts as 1 pt for you."<<endl; 
			cout<<"Each time you miss or the goalie saves it count as 1 pt for the Computer"<<endl;
			cout<<endl;
			cout<<""<<endl;
			cout<<"-------------------------"<<endl;
			cout<<"|7\t"<<setw(5)<<" 8"<<setw(12)<<"9|"<<endl;
			cout<<"|\t"<<"      "<<"\t\t|"<<endl;
			cout<<"|4\t"<<setw(5)<<" 5"<<setw(12)<<"6|"<<endl;
			cout<<"|\t"<<"      "<<"\t\t|"<<endl;
			cout<<"|1\t"<<setw(5)<<" 2"<<setw(12)<<"3|"<<endl;
			cout<<endl;
			cout<<endl;	
			cout<<"\t\t\t\t\t\tPress M for the menu; Q to quit."<<endl;
			cin>>menuOption;
		}
		//Let's Play
		if (menuOption == 'P')
		{
			char player[21];
			//char computer[21] = Computer;
			int level;
			int tiros =1;
			int Hscore =0;
			int Cscore =0;
			
			cout<<"\n"<<setw(40)<<"Let's Play\n"<<endl;
			//Teams Name
			cin.ignore();
			cout<<"Please insert your team's name: "<<endl;
			cin.getline(player, 21);
			
			//cin.getline(player,21);
			
			//cout<<"Please insert the other's team name: "<<endl;
			//cin>>computer;
			
			cout<<endl;
			cout<<endl;
			cout<<"Select the level of difficulty"<<endl;
			cout<<"1.Amateur\n"<<"2.Professional\n"<<"3.World Class"<<endl;
			cout<<endl;
			cin>>level;
			
			//Level: Amateur
			if (level ==1)
			{
				while (tiros <=5)
				{
					cout<<endl;
					cout<<"Penalty #"<<tiros<<endl;
					cout<<endl;
					cout<<"-------------------------"<<endl;
					cout<<"|\t"<<"     O"<<"\t\t|"<<endl;
					cout<<"|\t"<<"     |"<<"\t\t|"<<endl;
					cout<<"|\t"<<"    <|>"<<"\t\t|"<<endl;
					cout<<"|\t"<<"     |"<<"\t\t|"<<endl;
					cout<<"|\t"<<"    | |"<<"\t\t|"<<endl;
					cout<<endl;
					cout<<endl;	
					cout<<"Where are you going to shoot?"<<endl;
					cin>>shoot;
					tiros++;
					
					//random number
					unsigned seed = time(0);
					srand(seed);
					int randomNumber;
					randomNumber = 1 + rand() % 9; // random number between 1 and 10
					cout << "Goalie moves to... "<<randomNumber<<" and... ";
						//Movimiento Arquero
						if (randomNumber == 1)
						{
							//#1
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<"        "<<"\t\t|"<<endl;
							cout<<"|"<<"       "<<"\t\t|"<<endl;
							cout<<"|"<<" __     __"<<"\t\t|"<<endl;
							cout<<"|"<<" __O----__ "<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 2)
						{
							//#2
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"    O"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   <|>"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   | |"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 3)
						{
							//#3
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"         "<<"\t|"<<endl;
							cout<<"|\t"<<"        "<<"\t|"<<endl;
							cout<<"|\t"<<"      "<<"\t\t|"<<endl;
							cout<<"|\t\t"<<"__    __"<<"|"<<endl;
							cout<<"|\t\t"<<"__---O__"<<"|"<<endl;
						}
						
						if (randomNumber == 4)
						{
							//#4
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<"  __O   "<<"\t\t|"<<endl;
							cout<<"|"<<"  __ \\"<<"\t\t\t|"<<endl;
							cout<<"|"<<"      \\"<<"\t\t|"<<endl;
							cout<<"|"<<"      \\ \\"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 5)
						{
							//#5
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"    O"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   <|>"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   | |"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 6)
						{
							//#6
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"         "<<"\t|"<<endl;
							cout<<"|\t\t"<<"    O __"<<"|"<<endl;
							cout<<"|\t\t"<<"    / __"<<"|"<<endl;
							cout<<"|\t\t"<<"   /"<<"\t|"<<endl;
							cout<<"|\t\t"<<" / /"<<"\t|"<<endl;
						}
						
						if (randomNumber == 7)
						{
							//#7
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<" \\ O  /"<<"\t\t|"<<endl;
							cout<<"|"<<"     \\"<<"\t\t\t|"<<endl;
							cout<<"|"<<"      \\"<<"\t\t|"<<endl;
							cout<<"|"<<"      \\ \\"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 8)
						{
							//#8
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"        "<<"\t|"<<endl;
							cout<<"|\t"<<"  / O /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"  /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"/ /"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 9)
						{
							//#9
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t\t"<<"        "<<"|"<<endl;
							cout<<"|\t\t"<<"  \\ O /"<<"\t|"<<endl;
							cout<<"|\t\t"<<"    /"<<"\t|"<<endl;
							cout<<"|\t\t"<<"   /"<<"\t|"<<endl;
							cout<<"|\t\t"<<" / /"<<"\t|"<<endl;
						}
						
					if ((randomNumber == shoot) && (shoot<=9))
					{
						cout<<"\nSAVES IT!!!\n"<<endl;
						Cscore++;
					}
					else if ((randomNumber != shoot) && (shoot<=9))
					{
						cout<<"\nGOOOOAAAALLL\n"<<endl;
						Hscore++;
					}
					else if (shoot>=10)
					{
						cout<<"\nIncredibly you miss the goal\n"<<endl;
						Cscore++;
					}
					
					//scores
					cout<<setw(43)<<"Score"<<endl;
					cout<<setw(50)<<"-------------"<<endl;
					cout<<setw(43)<<player<<": \t"<<Hscore<<endl;
					cout<<setw(48)<<"Computer: \t"<<Cscore<<endl;
					
					/*
					cout<<"\tScore\n";
					cout<<"\t-------------\n";
					cout<<"\t"<<player<<": \t"<<Hscore<<endl;
					cout<<"\t"<<"Computer: \t"<<Cscore<<endl;
					*/
				
				}	
			}
			//Level: Professional
			if (level ==2)
			{
			while (tiros <=5)
				{	
					int counter = 0;
					unsigned seed = time(0);
					srand(seed);
					int randomNumber;
					
					//Penaaaaal
					cout<<endl;
					cout<<"Penalty #"<<tiros<<endl;
					cout<<endl;
					cout<<"-------------------------"<<endl;
					cout<<"|\t"<<"     O"<<"\t\t|"<<endl;
					cout<<"|\t"<<"     |"<<"\t\t|"<<endl;
					cout<<"|\t"<<"    <|>"<<"\t\t|"<<endl;
					cout<<"|\t"<<"     |"<<"\t\t|"<<endl;
					cout<<"|\t"<<"    | |"<<"\t\t|"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"Where are you going to shoot?"<<endl;
					cin>>shoot;
					tiros++;
					
					// Como funciona la dificultad del juego. Genera hasta 3 oportunidades a que el Random Variable 'adivine' el lugar del jugador
					do
						{
							counter++;
							cout<<endl;
							//cout<<"this is counter"<<counter<<endl; //NO HAY NECESIDAD Q SE VEA ESTO
							//cout<<endl;
							randomNumber = 1 + rand() % 9; // random number between 1 and 10
							//cout << randomNumber <<endl;  //NO HAY NECESIDAD Q SE VEA ESTO
							
						}	
					while (counter <3 && randomNumber !=shoot);
					
					
					/*			CAMBIO DE LUGAR DEL RANDOM VARIABLE?
					//random number para movimiento de Arquero
					unsigned seed = time(0);
					srand(seed);
					int randomNumber;
					randomNumber = 1 + rand() % 10; // random number between 1 and 10
					cout << "Goalie moves to... "<<randomNumber<<" and... ";
					*/
						//Movimiento Arquero SOLO IMAGEN!!!
						if (randomNumber == 1)
						{
							//#1
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<"        "<<"\t\t|"<<endl;
							cout<<"|"<<"       "<<"\t\t|"<<endl;
							cout<<"|"<<" __     __"<<"\t\t|"<<endl;
							cout<<"|"<<" __O----__ "<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 2)
						{
							//#2
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"    O"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   <|>"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   | |"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 3)
						{
							//#3
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"         "<<"\t|"<<endl;
							cout<<"|\t"<<"        "<<"\t|"<<endl;
							cout<<"|\t"<<"      "<<"\t\t|"<<endl;
							cout<<"|\t\t"<<"__    __"<<"|"<<endl;
							cout<<"|\t\t"<<"__---O__"<<"|"<<endl;
						}
						
						if (randomNumber == 4)
						{
							//#4
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<"  __O   "<<"\t\t|"<<endl;
							cout<<"|"<<"  __ \\"<<"\t\t\t|"<<endl;
							cout<<"|"<<"      \\"<<"\t\t|"<<endl;
							cout<<"|"<<"      \\ \\"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 5)
						{
							//#5
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"    O"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   <|>"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   | |"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 6)
						{
							//#6
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"         "<<"\t|"<<endl;
							cout<<"|\t\t"<<"    O __"<<"|"<<endl;
							cout<<"|\t\t"<<"    / __"<<"|"<<endl;
							cout<<"|\t\t"<<"   /"<<"\t|"<<endl;
							cout<<"|\t\t"<<" / /"<<"\t|"<<endl;
						}
						
						if (randomNumber == 7)
						{
							//#7
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<" \\ O  /"<<"\t\t|"<<endl;
							cout<<"|"<<"     \\"<<"\t\t\t|"<<endl;
							cout<<"|"<<"      \\"<<"\t\t|"<<endl;
							cout<<"|"<<"      \\ \\"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 8)
						{
							//#8
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"        "<<"\t|"<<endl;
							cout<<"|\t"<<"  / O /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"  /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"/ /"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 9)
						{
							//#9
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t\t"<<"        "<<"|"<<endl;
							cout<<"|\t\t"<<"  \\ O /"<<"\t|"<<endl;
							cout<<"|\t\t"<<"    /"<<"\t|"<<endl;
							cout<<"|\t\t"<<"   /"<<"\t|"<<endl;
							cout<<"|\t\t"<<" / /"<<"\t|"<<endl;
						}
					
					// Atajada, Fuera o GOOOOl
					if ((randomNumber == shoot) && (shoot<=9))
					{
						cout<<"\nSAVES IT!!!\n"<<endl;
						Cscore++;
					}
					else if ((randomNumber != shoot) && (shoot<=9))
					{
						cout<<"\nGOOOOAAAALLL\n"<<endl;
						Hscore++;
					}
					else if (shoot>=10)
					{
						cout<<"\nIncredibly you miss the goal\n"<<endl;
						Cscore++;
					}
					
					//scores table
					cout<<setw(43)<<"Score"<<endl;
					cout<<setw(50)<<"-------------"<<endl;
					cout<<setw(43)<<player<<": \t"<<Hscore<<endl;
					cout<<setw(48)<<"Computer: \t"<<Cscore<<endl;
					
					/*
					cout<<"\tScore\n";
					cout<<"\t-------------\n";
					cout<<"\t"<<player<<": \t"<<Hscore<<endl;
					cout<<"\t"<<"Computer: \t"<<Cscore<<endl;
					*/
				
				}	
			}
			//Level: World Class
			if (level ==3)
			{
			while (tiros <=5)
				{	
					int counter = 0;
					unsigned seed = time(0);
					srand(seed);
					int randomNumber;
					
					//Penaaaaal
					cout<<endl;
					cout<<"Penalty #"<<tiros<<endl;
					cout<<endl;
					cout<<"-------------------------"<<endl;
					cout<<"|\t"<<"     O"<<"\t\t|"<<endl;
					cout<<"|\t"<<"     |"<<"\t\t|"<<endl;
					cout<<"|\t"<<"    <|>"<<"\t\t|"<<endl;
					cout<<"|\t"<<"     |"<<"\t\t|"<<endl;
					cout<<"|\t"<<"    | |"<<"\t\t|"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"Where are you going to shoot?"<<endl;
					cin>>shoot;
					tiros++;
					
					do
						{
							counter++;
							cout<<endl;
							//cout<<"this is counter"<<counter<<endl; //NO HAY NECESIDAD Q SE VEA ESTO
							//cout<<endl;
							randomNumber = 1 + rand() % 9; // random number between 1 and 10
							//cout << randomNumber <<endl;  //NO HAY NECESIDAD Q SE VEA ESTO
							
						}	
					while (counter <5 && randomNumber !=shoot);
					
					
					/*			CAMBIO DE LUGAR DEL RANDOM VARIABLE?
					//random number para movimiento de Arquero
					unsigned seed = time(0);
					srand(seed);
					int randomNumber;
					randomNumber = 1 + rand() % 10; // random number between 1 and 10
					cout << "Goalie moves to... "<<randomNumber<<" and... ";
					*/
						//Movimiento Arquero SOLO IMAGEN!!!
						if (randomNumber == 1)
						{
							//#1
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<"        "<<"\t\t|"<<endl;
							cout<<"|"<<"       "<<"\t\t|"<<endl;
							cout<<"|"<<" __     __"<<"\t\t|"<<endl;
							cout<<"|"<<" __O----__ "<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 2)
						{
							//#2
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"    O"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   <|>"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   | |"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 3)
						{
							//#3
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"         "<<"\t|"<<endl;
							cout<<"|\t"<<"        "<<"\t|"<<endl;
							cout<<"|\t"<<"      "<<"\t\t|"<<endl;
							cout<<"|\t\t"<<"__    __"<<"|"<<endl;
							cout<<"|\t\t"<<"__---O__"<<"|"<<endl;
						}
						
						if (randomNumber == 4)
						{
							//#4
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<"  __O   "<<"\t\t|"<<endl;
							cout<<"|"<<"  __ \\"<<"\t\t\t|"<<endl;
							cout<<"|"<<"      \\"<<"\t\t|"<<endl;
							cout<<"|"<<"      \\ \\"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 5)
						{
							//#5
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"    O"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   <|>"<<"\t\t|"<<endl;
							cout<<"|\t"<<"    |"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   | |"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 6)
						{
							//#6
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"         "<<"\t|"<<endl;
							cout<<"|\t\t"<<"    O __"<<"|"<<endl;
							cout<<"|\t\t"<<"    / __"<<"|"<<endl;
							cout<<"|\t\t"<<"   /"<<"\t|"<<endl;
							cout<<"|\t\t"<<" / /"<<"\t|"<<endl;
						}
						
						if (randomNumber == 7)
						{
							//#7
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"          "<<"\t|"<<endl;
							cout<<"|"<<" \\ O  /"<<"\t\t|"<<endl;
							cout<<"|"<<"     \\"<<"\t\t\t|"<<endl;
							cout<<"|"<<"      \\"<<"\t\t|"<<endl;
							cout<<"|"<<"      \\ \\"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 8)
						{
							//#8
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t"<<"        "<<"\t|"<<endl;
							cout<<"|\t"<<"  / O /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"   /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"  /"<<"\t\t|"<<endl;
							cout<<"|\t"<<"/ /"<<"\t\t|"<<endl;
						}
						
						if (randomNumber == 9)
						{
							//#9
							cout<<endl;
							cout<<"-------------------------"<<endl;
							cout<<"|\t\t"<<"        "<<"|"<<endl;
							cout<<"|\t\t"<<"  \\ O /"<<"\t|"<<endl;
							cout<<"|\t\t"<<"    /"<<"\t|"<<endl;
							cout<<"|\t\t"<<"   /"<<"\t|"<<endl;
							cout<<"|\t\t"<<" / /"<<"\t|"<<endl;
						}
					
					// Atajada, Fuera o GOOOOl
					if ((randomNumber == shoot) && (shoot<=9))
					{
						cout<<"\nSAVES IT!!!\n"<<endl;
						Cscore++;
					}
					else if ((randomNumber != shoot) && (shoot<=9))
					{
						cout<<"\nGOOOOAAAALLL\n"<<endl;
						Hscore++;
					}
					else if (shoot>=10)
					{
						cout<<"\nIncredibly you miss the goal\n"<<endl;
						Cscore++;
					}
					
					//scores table
					cout<<setw(43)<<"Score"<<endl;
					cout<<setw(50)<<"-------------"<<endl;
					cout<<setw(43)<<player<<": \t"<<Hscore<<endl;
					cout<<setw(48)<<"Computer: \t"<<Cscore<<endl;
					
					/*
					cout<<"\tScore\n";
					cout<<"\t-------------\n";
					cout<<"\t"<<player<<": \t"<<Hscore<<endl;
					cout<<"\t"<<"Computer: \t"<<Cscore<<endl;
					*/
				
				}	
			}
			//Congrats Message
			if (Hscore>Cscore)
			{
				cout<<endl;
				cout<<"______________________________________________________________________________"<<endl;
				cout<<"|  \\      /                                  |           |   *               |"<<endl;
				cout<<"|   \\    /    _____                          |           |       |\\        | |"<<endl;
				cout<<"|     \\ /    |     |   |     |               |           |   |   |  \\      | |"<<endl;
				cout<<"|      |     |     |   |     |               |    / \\    |   |   |    \\    | |"<<endl;
				cout<<"|      |     |     |   |     |               |  /     \\  |   |   |      \\  | |"<<endl;
				cout<<"|      |     |_____|   |_____|               |/         \\|   |   |        \\| |"<<endl;
				cout<<"|"<<setw(77)<<"|"<<endl;
				cout<<"|"<<setw(39)<<"0"<<setw(38)<<"|"<<endl;
				cout<<"|"<<setw(40)<<"(_)"<<setw(37)<<"|"<<endl;
				cout<<"|"<<setw(41)<<"(___)"<<setw(36)<<"|"<<endl;
				cout<<"|"<<setw(41)<<"| O |"<<setw(36)<<"|"<<endl;
				cout<<"|"<<setw(41)<<"| | |"<<setw(36)<<"|"<<endl;
				cout<<"|"<<setw(39)<<"|"<<setw(38)<<"|"<<endl;
				cout<<"|"<<setw(39)<<"|"<<setw(38)<<"|"<<endl;
				cout<<"|"<<setw(40)<<"| |"<<setw(37)<<"|"<<endl;
				cout<<"______________________________________________________________________________"<<endl;
				cout<<endl;	
			}
			if (Hscore<Cscore)
			{
				cout<<endl;
				cout<<"______________________________________________________________________________"<<endl;
				cout<<"|  \\      /                          |                                       |"<<endl;
				cout<<"|   \\    /    _____                  |           _____     ____     |        |"<<endl;
				cout<<"|     \\ /    |     |   |     |       |          |     |   |       --+--      |"<<endl;
				cout<<"|      |     |     |   |     |       |          |     |   |____     |        |"<<endl;
				cout<<"|      |     |     |   |     |       |          |     |        |    |        |"<<endl;
				cout<<"|      |     |_____|   |_____|       |________  |_____|   _____|    |        |"<<endl;
				cout<<"|"<<setw(77)<<"|"<<endl;
				cout<<"|"<<setw(36)<<"________"<<setw(41)<<"|"<<endl;
				cout<<"|"<<setw(37)<<"|________|"<<setw(40)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(5)<<"|"<<setw(42)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(5)<<"0"<<setw(42)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(6)<<"/|\\"<<setw(41)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(5)<<"|"<<setw(42)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(6)<<"/ \\"<<setw(41)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(47)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(47)<<"|"<<endl;
				cout<<"|"<<setw(30)<<"| |"<<setw(47)<<"|"<<endl;
				cout<<"|"<<setw(32)<<"--------"<<setw(45)<<"|"<<endl;
				cout<<"______________________________________________________________________________"<<endl;
			}
			//cout<<"\t\t\t\t\t\tPress M for the menu; Q to quit."<<endl;
			//cin>>menuOption;
		
		}
	// ***ADENTRO DEL IF O AFUERA? SI ESTA AFUERA Y PONGO Q  EN EL MENU TMB APARECE ESTO***
	//cout<<"\t\t\t\t\t\tPress M for the menu; Q to quit."<<endl;
	//cin>>menuOption;
	}
	while (menuOption!='Q');
	



















	return 0;
}
