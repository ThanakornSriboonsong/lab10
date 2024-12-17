#include<iostream>
using namespace std;

int main(){
	int A,B,C,D,F ;
	int count[5] = { A = 0, B = 0, C = 0, D = 0, F = 0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	int i = 0 ;
	char grade ;
	do {
		
		cout << "Student [" << i + 1 <<  "]: ";
		cin >> grade ; //The loop must be terminated when grade = '0'
		if( grade == '0'){
			break ;
		}
		if(grade == 'A') {// if grade is A
			//Do something
			count[0]++ ;
			i++ ;
		}else if(grade == 'B'){ // if grade is B
			//Do something
			count[1]++ ;
			i++ ;
		}
		//and so on ... for grade = C, D, F	
		else if(grade == 'C'){ // if grade is B
			//Do something
			count[2]++ ;
			i++ ;
		}
		else if(grade == 'D'){ // if grade is B
			//Do something
			count[3]++ ;
			i++ ;
		}
		else if(grade == 'F'){ // if grade is B
			//Do something
			count[4]++ ;
			i++ ;
		}		
		else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again.\n" ;
		} 
		


}while( grade != '0');
	
	
	cout << "In total " << i << " students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";		
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
