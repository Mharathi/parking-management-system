#include<iostream>
#include<conio.h>

using namespace std;

void addvehicle();
void remove();
void exit();
void totalparked();
void totalearned();
void twowheeler();
void threewheeler();
void fourwheeler();

int two = 0;     // charge to park 2 wheeler - Rs 10/-
int three = 0;  // charge to park 3 wheeler - Rs 20/-
int four = 0;  // charge to park 4 wheeler - Rs 30/-
int total = 0;

int main()
{
	system("cls");
	cout<<"\n\n\t\t ***** Parking Management System ******"<<endl<<endl;
	cout<<"\t\t Press 1 to Add Vehicle"<<endl;
	cout<<"\t\t Press 2 to remove Vehicle"<<endl;
	cout<<"\t\t Press 3 to View Total no. of vehicle Parked "<<endl;
	cout<<"\t\t Press 4 to View Total Earning "<<endl;
	cout<<"\t\t Press 5 to View No. of Two Wheeler Parked "<<endl;
    cout<<"\t\t Press 6 to View No. of Three Wheeler Parked "<<endl;
    cout<<"\t\t Press 7 to View No. of Four Wheeler Parked "<<endl;
    cout<<"\t\t Press 8 to Exit"<<endl;
    
    
    int choice;
    cin>>choice;
    
    switch(choice)
    {
    	case 1:
    		addvehicle();
    		break;
    	case 2 :
    		remove();
    		break;
        case 3 :
        	totalparked();
        	break;
        case 4 : 
             totalearned();
             break;
        case 5:
        	twowheeler();
        	break;
        case 6:
        	threewheeler();
        	break;
        case 7 :
        	fourwheeler();
        	break;
        case 8:
    		exit();
    		break;
    	default :
    		system("cls");
    		cout<<"\n\n\t\t Please Enter Valid  Input"<<endl;
    		cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
        	getch();
         	main();
	}
}

void addvehicle()
{
	system("cls");
	cout<<"\n\t\t Press 1 to Park Two Wheeler"<<endl;
	cout<<"\n\t\t Press 2 to Park Three Wheeler"<<endl;
	cout<<"\n\t\t Press 3 to Park Four Wheeler"<<endl;
	int c;
	cin>>c;
	
	if(c == 1)
	{
		two++;
		total+=10;
	}
	else if(c == 2)
	{
	   three++;	
	   total +=20;
	}
	else if(c == 3)
	{
		four++;
		total += 30;
	}else
	{
		system("cls");
     	cout<<"\t\t Please Enter Valid  Input"<<endl;	
     	cout<<"\n\n\t\t PRESS ANY KEY TO TRY AGAIN";
     	getch();
     	main();
	}
	system("cls");
	cout<<"\n\n\t\t Vehicle Parked "<<endl;
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
	
}
void remove()
{
	system("cls");
	cout<<"\n\t\t Press 1 to REMOVE Two Wheeler"<<endl;
	cout<<"\n\t\t Press 2 to REMOVE Three Wheeler"<<endl;
	cout<<"\n\t\t Press 3 to REMOVE Four Wheeler"<<endl;
	int c;
	cin>>c;
	
	if(c == 1)
	{
		two--;
	}
	else if(c == 2)
	{
	   three--;	
	}
	else if(c == 3)
	{
		four--;
	}else
	{
		system("cls");
     	cout<<"\t\t Please Enter Valid  Input"<<endl;	
     	cout<<"\n\n\t\t PRESS ANY KEY TO TRY AGAIN";
     	getch();
     	main();
	}
	system("cls");
	cout<<"\n\n\t\t Vehicle Removed "<<endl;
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
	
}
void totalparked()
{
	system("cls");
	int a = two + three + four;
	cout<< "\n\n\t\t Total Vehicle Parked : "<< a <<endl; 
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
}
void totalearned()
{
	system("cls");
	cout<< "\n\n\t\t Total Earning : "<< total<<endl; 
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
}

void twowheeler()
{
	system("cls");
	cout<< "\n\n\t\t Two Wheeler Parked : "<< two <<endl; 
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
}

void threewheeler()
{
	system("cls");
	cout<< "\n\n\t\t Three Wheeler Parked : "<< three <<endl; 
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
}
void fourwheeler()
{
	system("cls");
	cout<< "\n\n\t\t Four Wheeler Parked : "<< four <<endl; 
	cout<<"\n\n\t\t PRESS ANY KEY TO CONTINUE...."<<endl;
   	getch();
   	main();
}
void exit()
{
	system("cls");
	cout<<"\n\n\n\t\t THANKS FOR USING" <<endl;
}
