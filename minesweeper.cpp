#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;

void cunt(int billiejean[16][16],int i,int j,int count,int basse){
	
	if((billiejean[i-1][j-1] == -2 || billiejean[i-1][j-1] == -5) && j-1>=0 && i-1>=0) count++;
		if((billiejean[i][j-1] == -2 || billiejean[i][j-1] == -5) && j-1>=0) count++;
		if((billiejean[i+1][j-1] == -2 || billiejean[i+1][j-1] == -5) && i+1<10 && j-1>=0) count++;
		if((billiejean[i-1][j] == -2 || billiejean[i-1][j] == -5) && i-1>=0) count++;
		if((billiejean[i+1][j] == -2 || billiejean[i+1][j] == -5) && i+1<10) count++;
		if((billiejean[i-1][j+1] == -2 || billiejean[i-1][j+1] == -5) && i-1>=0 && j+1<10) count++;
		if((billiejean[i][j+1] == -2 || billiejean[i][j+1] == -5) && j+1<10) count++;
		if((billiejean[i+1][j+1] == -2 || billiejean[i+1][j+1] == -5) && i+1<10 && j+1<10) count++;
		basse = count;
		count =0;
		cout << basse;
}
void cunt2(int billiejean[16][16],int i,int j,int count,int basse){
	if((billiejean[i-1][j-1] == -2 || billiejean[i-1][j-1] == -5) && j-1>=0 && i-1>=0) count++;
		if((billiejean[i][j-1] == -2 || billiejean[i][j-1] == -5) && j-1>=0) count++;
		if((billiejean[i+1][j-1] == -2 || billiejean[i+1][j-1] == -5) && i+1<16 && j-1>=0) count++;
		if((billiejean[i-1][j] == -2 || billiejean[i-1][j] == -5) && i-1>=0) count++;
		if((billiejean[i+1][j] == -2 || billiejean[i+1][j] == -5) && i+1<16) count++;
		if((billiejean[i-1][j+1] == -2 || billiejean[i-1][j+1] == -5) && i-1>=0 && j+1<16) count++;
		if((billiejean[i][j+1] == -2 || billiejean[i][j+1] == -5) && j+1<16) count++;
		if((billiejean[i+1][j+1] == -2 || billiejean[i+1][j+1] == -5) && i+1<16 && j+1<16) count++;
		basse = count;
		count =0;
		cout << basse;
		
}
void cunt3(int billiejean[16][40],int i,int j,int count,int basse){
	if((billiejean[i-1][j-1] == -2 || billiejean[i-1][j-1] == -5) && j-1>=0 && i-1>=0) count++;
		if((billiejean[i][j-1] == -2 || billiejean[i][j-1] == -5) && j-1>=0) count++;
		if((billiejean[i+1][j-1] == -2 || billiejean[i+1][j-1] == -5) && i+1<16 && j-1>=0) count++;
		if((billiejean[i-1][j] == -2 || billiejean[i-1][j] == -5) && i-1>=0) count++;
		if((billiejean[i+1][j] == -2 || billiejean[i+1][j] == -5) && i+1<16) count++;
		if((billiejean[i-1][j+1] == -2 || billiejean[i-1][j+1] == -5) && i-1>=0 && j+1<40) count++;
		if((billiejean[i][j+1] == -2 || billiejean[i][j+1] == -5) && j+1<40) count++;
		if((billiejean[i+1][j+1] == -2 || billiejean[i+1][j+1] == -5) && i+1<16 && j+1<40) count++;
		basse = count;
		count =0;
		cout << basse;
		
}
void show(int bowie[16][16],int A,int tedad,int county,int suicide,int zaman) {
	system("cls");
	cout << "remaining bombs:" << tedad << endl;
	cout << " " << " | ";
	char alphabet = 'a';
	for(int i=0;i<A;i++){
		cout << alphabet++ << " | ";
	}
	cout << endl;
	
	for(int i=0;i<A;i++){
		cout << i << " | ";
		for (int j=0;j<A;j++){
			if (bowie[i][j] == -1){
			cout << ".";
		}
			else if (bowie[i][j] == -2){
				cout << ".";
			}
			else if(bowie[i][j] == -3 || bowie[i][j] == -5){
				cout << "#";
			}
			else if(bowie[i][j] == -4){
				cunt(bowie,i,j,county,suicide);
			}
		
		cout << " | ";
	  }
	  cout << endl;
	}
	cout << endl;
    cout << "time:";
    cout << zaman << " seconds" << endl;
}
void show2(int bowie[16][16],int B,int tedad,int county,int suicide,int zaman) {
	system("cls");
	cout << "remaining bombs:" << tedad << endl;
	cout << " " << " " << " | ";
	char alphabet = 'a';
	for(int i=0;i<B;i++){
		cout << alphabet++ << " | ";
	}
	cout << endl;
	
	for(int i=0;i<B;i++){
		cout << i;
		if(i<10){
			cout << " ";
		}
		cout << " | ";
		for (int j=0;j<B;j++){
			if (bowie[i][j] == -1){
			cout << ".";
		}
			else if (bowie[i][j] == -2){
				cout << ".";
			}
			else if(bowie[i][j] == -3 || bowie[i][j] == -5){
				cout << "#";
			}
			else if(bowie[i][j] == -4){
				cunt2(bowie,i,j,county,suicide);
			}
		
		cout << " | ";
	  }
	  cout << endl;
	}
	cout << endl;
    cout << "time:";
    cout << zaman << " seconds" << endl;
}
void show3(int bowie[16][40],int B,int C,int tedad,int county,int suicide,int zaman) {
	system("cls");
	cout << "remaining bombs:" << tedad << endl;
	cout << " " << " | ";
	char alphabet = 'a';
	for(int i=0;i<C;i++){
		cout << i << " | ";
	}
	cout << endl;
	
	for(int i=0;i<B;i++){
		cout << alphabet++;
		
		cout << " | ";
		for (int j=0;j<C;j++){
			if(j>9){
				cout << " ";
			}
			if (bowie[i][j] == -1){
			cout << ".";
		}
			else if (bowie[i][j] == -2){
				cout << ".";
			}
			else if(bowie[i][j] == -3 || bowie[i][j] == -5){
				cout << "#";
			}
			else if(bowie[i][j] == -4){
				cunt3(bowie,i,j,county,suicide);
			}
		
		cout << " | ";
	  }
	  cout << endl;
	}
	cout << endl;
    cout << "time:";
    cout << zaman << " seconds" << endl;
}
int main(){
	int zaman;
	ofstream records("recordha.txt",ios_base::app);
	cout << "menu : " << endl << "1-play game" << endl << "2-exit" << endl << "3-records" << endl;
	int n;
	string name,output;
	do{
	cin >> n;
	if (cin.fail()) { 
cin.clear();  
cin.ignore(INT_MAX,'\n');

cout << "Type an integer man \n";
continue;
}
else if (n!=1 && n!=2 && n!=3) {
cout << "Choose 1,2 or 3\n";
}
else break;
	
}while(true);
if(n==3){
	system("cls");
	ifstream records("recordha.txt");
	while(getline(records,output)){
		cout << output << endl;
	}
}
	if(n==2){
		cout << " ";
	}
    if(n==1){
    	cout << "please enter your name: ";
    	cin >> name;
    	int m;
    	cout << "Choose difficulty level good sir:" << endl << "1-1" << endl << "2-2" << endl << "3-3" << endl;
    	do{
    	cin >> m;
    	if(cin.fail()){
    		cin.clear();
    		cin.ignore(INT_MAX,'\n');
    		cout << "how hard is it to type the right thing?\n";
    		
    		continue;
		}
    	else if(m!=1 && m!=2 && m!=3){
		cout << "Wrong number,do it again.\n";
	}
		else break;
		}while(true);
    	if(m==1){
    	time_t start_time = time(nullptr);
		time_t end_time = time(nullptr);	
    	time_t every_round_time = time(0);
    	int marla[16][16];
		int tedad =10,bombs = 10,count=0,county=0,adad=0,basse=0;	
    	srand(time(0));
    	int A=10;
    	for(int i=0;i<10;i++){
    		for (int j=0;j<10;j++){
    			marla[i][j] = -1;
			}
		}
    	for(int i=0;i<10;i++){
			int x = rand() % 10;
			int y = rand () % 10;
			if(marla[x][y] == -2){
				i--;
			}
			marla[x][y] = -2;
		}	
		end_time = time(nullptr);
		zaman = end_time - every_round_time;
    		show(marla,A,tedad,count,basse,zaman);
        int a,b;
        char c;
        while(tedad>0){
        cout << endl << "1-choose a unit:" << endl << "2-insert a flag:" << endl;
        do{
        cin >> a;
        if(cin.fail()){
        	cin.clear();
        	cin.ignore(INT_MAX,'\n');
        	cout << "You're killing me man\n";
        	continue;
		}
        else if(a!=1 && a!=2){
        	cout << "Jesus Christ just pick 1 or 2.\n";
        }
        else break;	
		}while(true);
    	if(a==1){
    	cout << "enter the coordinates:" << endl;	
    	do{
    		cin >> c >> b;
    		if(cin.fail()){
    			cin.clear();
    			cin.ignore(INT_MAX,'\n');
    			cout << "AAAAAAA\n";
    			continue;
			}
			else if(c<97 || c>106 || b<0 || b>9){
				cout << "You just can not do this right\n";
			}
			else if(marla[b][c-97] == -4){
			cout << "you already did here man pick somwhere else:\n";
		}
		else if(marla[b][c-97] == -3){
			cout << "NO SIR:\n";
		}
		else if(marla[b][c-97] == -5){
			cout << "Taken:\n";
		}
			else break;
		}while(true);
    	
    	if(marla[b][c-97] == -2){
    		cout << "YOUR LIFE IS MEANINGLESS" << endl;
    		records << name << " " << 10-tedad << "/" << 10 << endl;
    		records.close();
		break;
		}
		
			else if(marla[b][c-97] == -1){
		marla[b][c-97] = -4;
	    }
	    end_time = time(nullptr);
		zaman = end_time - every_round_time;
        show(marla,A,tedad,adad,basse,zaman);
	}	
    	if(a==2){
    	cout << "You think you're up to something don't you? Put it in:" << endl;
    	do{
		cin >> c >> b;
		if(cin.fail()){
			cin.clear();
			cin.ignore(INT_MAX,'\n');
			cout << "I do not like you\n";
			continue;
		}
		else if(c<97 || c>106 || b<0 || b>9){
			cout << "AGAIN:\n";
		}
		else break;
	}while(true);
			if(marla[b][c-97] == -5){
			marla[b][c-97] = -2;
			tedad ++;
		}
		else if(marla[b][c-97] == -3){
			marla[b][c-97] = -1;
		}
		else if(marla[b][c-97] == -2){
			tedad -=1;
			marla[b][c-97] = -5;
		}
		
		else{
		marla[b][c-97] = -3;
	    }
	     end_time = time(nullptr);
		zaman = end_time - every_round_time;
		show(marla,A,tedad,count,basse,zaman);
		   }			
		  }
		if(tedad == 0){
		cout << endl << "YOU WON YOU BEAUTIFUL CREATURE" << endl;
	    }
	    records << name << " " << 10 << "/" << 10 << endl;
	    records.close();
	    end_time = time(nullptr);
	    double game_time = difftime(end_time,start_time);
	    cout << "took you this long:" << game_time << " seconds\n";
    }
    	if(m==2){
    		time_t start_time = time(nullptr);
    		time_t end_time = time(nullptr);
    		time_t every_round_time = time(0);
    		int marla[16][16];
    		int tedad=40,bombs = 40,count=0,county=0,adad=0,basse=0;	
    	srand(time(0));
    	int B=16;
    	int C=40;
    	for(int i=0;i<16;i++){
    		for (int j=0;j<16;j++){
    			marla[i][j] = -1;
			}
		}	
    	for(int i=0;i<40;i++){
			int x = rand() % 16;
			int y = rand () % 16;
			if(marla[x][y] == -2){
				i--;
			}
			marla[x][y] = -2;
		}	
		end_time = time(nullptr);
		zaman = end_time - every_round_time;
    		show2(marla,B,tedad,count,basse,zaman);
        int a,b;
        char c;
        while(tedad>0){
        cout << endl << "1-choose a unit:" << endl << "2-insert a flag:" << endl;
        do{
        	cin >> a;
        	if(cin.fail()){
        		cin.clear();
        		cin.ignore(INT_MAX,'\n');
        		cout << "Dude you need to type an int\n";
        		continue;
			}
        else if(a!=1 && a!=2){
        	cout << "For god's sake pick between 1 or 2.\n";
		}
		else break;
	}while(true);
    	if(a==1){
    	cout << "enter the coordinates buddy boy:" << endl;
		do{
			cin >> c >> b;
			if(cin.fail()){
				cin.clear();
				cin.ignore(INT_MAX,'\n');
				cout << "Not a coordinate man\n";
				continue;
			}
			else if(c<97 || c>112 || b<0 || b>15){
				cout << "Not the right coordintions\n";
			}
			else if(marla[b][c-97] == -4){
			cout << "You picked this do something else:\n";
		}
		else if(marla[b][c-97] == -3 || marla[b][c-97] == -5){
			cout << "NO:\n";
		}
			else break;
		}while(true);
    	if(marla[b][c-97] == -2){
    		cout << "KILL YOURSELF" << endl;
    		records << name << " " << 40-tedad << "/" << 40 << endl;
    		records.close();
    		break;
		}
		marla[b][c-97] = -4;
		 end_time = time(nullptr);
		zaman = end_time - every_round_time;
		show2(marla,B,tedad,adad,basse,zaman);
	}	
    	if(a==2){
    	cout << "I hope you pick a mine and lose" << endl;
		do{
			cin >> c >> b;
			if(cin.fail()){
				cin.clear();
				cin.ignore(INT_MAX,'\n');
				cout << "Do you wanna see me cry???";
				continue;
			}
		else if(c<97 || c>112 || b<0 || b>15){
			cout << "you suck man.AGAIN:\n";
		}
		else break;
	}while(true);
			if(marla[b][c-97] == -5){
			marla[b][c-97] = -2;
			tedad ++;
		}
		else if(marla[b][c-97] == -3){
			marla[b][c-97] = -1;
		}
		else if(marla[b][c-97] == -2){
			tedad -=1;
			marla[b][c-97] = -5;
		}	
		else{
		marla[b][c-97] = -3;
	    }
	   end_time = time(nullptr);
		zaman = end_time - every_round_time;
		show2(marla,B,tedad,count,basse,zaman);
		   }		
		  }
		if(tedad == 0){
		cout << "YOU WON now you can go back to your miserable lonely life" << endl;
	    }
	    records << name << " " << 40 << "/" << 40 << endl;
	    records.close();
    	end_time = time(nullptr);
		double  time = difftime(end_time,start_time);
		cout << "your running game time sir:" << time << " seconds" << endl;			
		}	
		if(m==3){
    		time_t start_time = time(nullptr);
    		time_t end_time = time(nullptr);
    		time_t every_round_time = time(0);
    		int marla[16][40];
    		int tedad=99,bombs = 99,count=0,county=0,adad=0,basse=0;	
    	srand(time(0));
    	int B=16;
    	int C=40;
    	for(int i=0;i<16;i++){
    		for (int j=0;j<40;j++){
    			marla[i][j] = -1;
			}
		}
    	for(int i=0;i<99;i++){
			
			int x = rand() % 16;
			int y = rand () % 40;
			if(marla[x][y] == -2){
				i--;
			}
			marla[x][y] = -2;
		}	
		end_time = time(nullptr);
		zaman = end_time - every_round_time;
		
    		show3(marla,B,C,tedad,count,basse,zaman);
        int a,b;
        char c;
        while(tedad>0){
        cout << endl << "1-choose a unit:" << endl << "2-insert a flag:" << endl;
        do{
        	cin >> a;
        	if(cin.fail()){
        		cin.clear();
        		cin.ignore(INT_MAX,'\n');
        		cout << "I hope you die\n";
        		continue;
			}
        else if(a!=1 && a!=2){
        	cout << "I really hate you\n";
		}
		else break;
	}while(true);
    	if(a==1){
    	cout << "enter the coordinates boy:" << endl;
		do{
			cin >> c >> b;
			if(cin.fail()){
				cin.clear();
				cin.ignore(INT_MAX,'\n');
				cout << "Why would you type the wrong thing on purpose\n";
				continue;
			}
			else if(c<97 || c>112 || b<0 || b>39){
				cout << "Can you not see the board??\n";
			}
			else if(marla[c-97][b] == -4){
			cout << "Come on\n";
		}
		else if(marla[c-97][b] == -3 || marla[b][c-97] == -5){
			cout << "NA:\n";
		}
			else break;
		}while(true);
    	if(marla[c-97][b] == -2){
    		cout << "It's ok we all lose in life you just have to get back up and play again" << endl;
    		records << name << " " << 99-tedad << "/" << 99 << endl;
    		records.close();
    		break;
		}
		marla[c-97][b] = -4;
		 end_time = time(nullptr);
		zaman = end_time - every_round_time;
		show3(marla,B,C,tedad,adad,basse,zaman);
	}	
    	if(a==2){
    	cout << "Good luck:" << endl;
		do{
			cin >> c >> b;
			if(cin.fail()){
				cin.clear();
				cin.ignore(INT_MAX,'\n');
				cout << "Do you want me to kill myself?Because I will\n";
				continue;
			}
		else if(c<97 || c>112 || b<0 || b>39){
			cout << "how hard can this really be\n";
		}
		else break;
	}while(true);
			if(marla[c-97][b] == -5){
			marla[c-97][b] = -2;
			tedad ++;
		}
		else if(marla[c-97][b] == -3){
			marla[c-97][b] = -1;
		}
		else if(marla[c-97][b] == -2){
			tedad -=1;
			marla[c-97][b] = -5;
		}
		
		else{
		marla[c-97][b] = -3;
	    }
	   end_time = time(nullptr);
		zaman = end_time - every_round_time;
		show3(marla,B,C,tedad,count,basse,zaman);
		   }			
		  }
		if(tedad == 0){
		cout << "YOU WON YOU PATHETIC JEW YOU" << endl;
	    }
	    records << name << " " << 99 << "/" << 99 << endl;
	    records.close();
    	end_time = time(nullptr);
		double  time = difftime(end_time,start_time);
		cout << "This is how much time of your life you have wasted:" << time << " seconds" << endl;	
	}
}

	return 0;
}