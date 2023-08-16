#include <iostream>

using namespace std;

int main() {
	
	cout<<"    ========================================================="<<endl;
	cout<<"    =                                                       = "<<endl;
	cout<<"    =               HOSPITAL MANAGEMENT SYSTEM              = "<<endl;
	cout<<"    =                                                       = "<<endl;
	cout<<"    ========================================================="<<endl;
	cout<<"   "<<endl;
	cout<<"             LOGIN STATUS "<<endl;
	cout<<"           ________________"<<endl;
	cout<<"   "<<endl;

	string username;
	string password;
	
	do{
	
		cout<<" Enter Username :  ";
		cin>>username;
		
		cout<<" Enter Password  :  ";
		cin>>password;
		system("cls");
		
		if(username=="admin"){
			if(password=="password"){
				cout<<"             LOGIN SUCCESSFUL "<<endl;
        	    cout<<"           ____________________"<<endl;
            	cout<<"   "<<endl;
            
	   		}
	   		
	   		else{
	   			cout<<"             LOGIN INCORRECT. TRY AGAIN! "<<endl;
			   }
		}
		else{
			cout<<"             LOGIN INCORRECT. TRY AGAIN!  "<<endl;
		}
	
		}while(username!="admin"||password!="password");
			//end of login
	
	//main menu
	int option;
        do{
		cout<<"          Welcome To Pab Hospital  "<<endl;
	    cout<<"   ______________________________________"<<endl;
	    
	    cout<<"1. DOCTORS "<<endl;
	    cout<<"2. STAFFS "<<endl;
	    cout<<"3. PATIENTS "<<endl;
	    cout<<""<<endl;
	    
	    
	        cout<<"Select an option: ";
	        cin>>option;
		}while(option!=1&&option!=2&&option!=3);
		
		system("cls");
		                     //doctor menu
		switch(option){
			case 1:
				char DR_option;
				do{
				cout<<"========================================================="<<endl;
	            cout<<"================          DOCTORS              =========="<<endl;
	            cout<<"========================================================="<<endl;
	            cout<<""<<endl;
	        
	            cout<<"A. Add New Doctor"<<endl;
	            cout<<"B. Check Doctors's Records"<<endl;
	            cout<<"C. Doctors Appointment"<<endl;
	            cout<<"D. Check In Time"<<endl;
	            
	            
	            
				cout<<"Select an option: ";
	            cin>>DR_option;
	        	}while(DR_option!='a'&&DR_option!='b'&&DR_option!='c'&&DR_option!='d'&&DR_option!='A'&&DR_option!='B'&&DR_option!='C'&&DR_option!='D');
	        	system("cls");
	        	           
	        	           // adding a new doctor
	        	if(DR_option=='A'||DR_option=='a'){
	        		cout<<"========================================================="<<endl;
	            	cout<<"================     ADDING OF DOCTORS        =========="<<endl;
	            	cout<<"========================================================="<<endl;
	        		string name,id_no,sex,martial_status,discription;
	        		int age;
	        		
	        		cout<<"Enter Doctor's name: ";
	                cin>>name;
	                
	                cout<<"Enter Doctor's Id_no: ";
	                cin>>id_no;
	                
	                cout<<"Enter Patient's Gender: ";
	                cin>>sex;
	                
	                cout<<"Enter Doctor's age: ";
	                cin>>age;
	                
	                cout<<"Enter Doctor's martial_status: ";
	                cin>>martial_status;
	                
	        		cout<<"Enter Doctor's Basic Dscription: ";
	                cin>>discription;
	                
	                cout<<"1. svae"<<endl;
	                cout<<"2. cancel"<<endl;
	                int option12;
	                cout<<"Select an option: ";
	                cin>>option12;
	                switch(option12){
	                	case 1:
	                	system("cls");
	                    cout<<"========================================================="<<endl;
	                    cout<<"NAME: " <<name <<endl;
	                    cout<<"Id_no: " <<id_no <<endl;
	                    cout<<"Gender: " <<sex <<endl;
	                    cout<<"Age: " <<age <<endl;
	                    cout<<"martial_status: " <<martial_status <<endl;
	                    cout<<"Dscription: " <<discription <<endl;
	                    cout<<"========================================================="<<endl;
	                    cout<<"Records saved"<<endl;
	                    cout<<"========================================================="<<endl;
	                    break;
	                    
	                    case 2:
	                    	cout<<"========================================================="<<endl;
	                        cout<<"Records Cancelled"<<endl;
	                        cout<<"========================================================="<<endl;
	                        break;
	                	
						default:
						{
							cout<<"========================================================="<<endl;
	                        cout<<"wrong input"<<endl;
	                        cout<<"========================================================="<<endl;
	                		
							break;
						}	
					}
				}	                              
				
				// doctors records
					                               
	            else if(DR_option=='B'||DR_option=='b'){
	            	cout<<"========================================================="<<endl;
	            	cout<<"================     RECORDS OF DOCTORS        =========="<<endl;
	            	cout<<"========================================================="<<endl;
	                cout<<"NAME: DR. PROSPER " <<endl;
	                cout<<"Id_no: DR_PR0001" <<endl;
	                cout<<"Age: 34 "<<endl;
	                cout<<"martial_status: SINGLE " <<endl;
	                cout<<"Dscription: TALL, DARK AND LIGHT SKIN WITH BLACK HAIR AND EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"NAME: DR. BRIGHT " <<endl;
	                cout<<"Id_no: DR_BR0002" <<endl;
	                cout<<"Age: 41 "<<endl;
	                cout<<"martial_status: MARRIAGE " <<endl;
	                cout<<"Dscription: TALL, BROWN SKIN WITH BLACK HAIR AND EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"NAME: DR. PAB " <<endl;
	                cout<<"Id_no: DR_PA0003" <<endl;
	                cout<<"Age: 29 "<<endl;
	                cout<<"martial_status: MARRIAGE " <<endl;
	                cout<<"Dscription: SHORT, DARK SKIN WITH BLACK HAIR AND BROWN EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
			        }
			        
			        //appointment
			        
				else if(DR_option=='C'||DR_option=='c'){
					cout<<"========================================================="<<endl;
	            	cout<<"===============   APPOINTMENTS OF DOCTORS      =========="<<endl;
	            	cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PROSPER " <<endl;
	                cout<<"PATIENT: MRS. BRIGHT" <<endl;
	                cout<<"DAY: MONDAY "<<endl;
	                cout<<"TIME: 1:30pm " <<endl;
					cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. BRIGHT " <<endl;
	                cout<<"PATIENT: MISS VANESSA" <<endl;
	                cout<<"DAY: FRIDAY "<<endl;
	                cout<<"TIME: 8:00AM " <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PAB " <<endl;
	                cout<<"PATIENT: MR & MRS ABODOO" <<endl;
	                cout<<"DAY: WENESSDAY "<<endl;
	                cout<<"TIME: 12:00 NOON " <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
				}
				            //CHECK IN & OUT OF DOCTORS 
				else{
					cout<<"========================================================="<<endl;
	            	cout<<"================   CHECK IN & OUT OF DOCTORS   =========="<<endl;
	            	cout<<"========================================================="<<endl;
	            	cout<<" "<<endl;
					cout<<"               MONDAY 25TH AGUST,2023" <<endl;
					cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PAB " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. BRIGHT " <<endl;
	                cout<<"CHECK IN:  8:00AM" <<endl;
	                cout<<"CHECK OUT: 4:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PROSPER " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"               TUESDAY 26TH AGUST,2023" <<endl;
					cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PAB " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. BRIGHT " <<endl;
	                cout<<"CHECK IN:  8:00AM" <<endl;
	                cout<<"CHECK OUT: 4:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PROSPER " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                
				}  
	                                              ///staff menu
			
			case 2:
				char ST_option;
				do{
				cout<<"========================================================="<<endl;
	            cout<<"================            STAFF              =========="<<endl;
	            cout<<"========================================================="<<endl;
	            cout<<""<<endl;
	        
	            cout<<"A. Add New Staff"<<endl;
	            cout<<"B. Check Staff's Records"<<endl;
	            cout<<"C. Check In Time"<<endl;
	            cout<<" "<<endl;
				cout<<"Select an option: ";
	            cin>>ST_option;
	        	}while(ST_option!='a'&&ST_option!='b'&&ST_option!='c'&&ST_option!='A'&&ST_option!='B'&&ST_option!='C');
	        	system("cls");
	        	
	        	if(ST_option=='A'||ST_option=='a'){
	        		string name,id_no,sex,martial_status,discription;
	        		int age;
	        		
	        		cout<<"Enter Staff's name: ";
	                cin>>name;
	                
	                cout<<"Enter Doctor's Id_no: ";
	                cin>>id_no;
	                
	                cout<<"Enter Patient's Gender: ";
	                cin>>sex;
	                
	                cout<<"Enter Staff's age: ";
	                cin>>age;
	                
	                cout<<"Enter Staff's martial_status: ";
	                cin>>martial_status;
	                
	        		cout<<"Enter Staff's Basic Dscription: ";
	                cin>>discription;
	                
	                cout<<"1. svae"<<endl;
	                cout<<"2. cancel"<<endl;
	                int option12A;
	                cout<<"Select an option: ";
	                cin>>option12A;
	                switch(option12A){
	                	case 1:
	                	system("cls");
	                    cout<<"========================================================="<<endl;
	                    cout<<"NAME: " <<name <<endl;
	                    cout<<"Id_no: " <<id_no <<endl;
	                    cout<<"Gender: " <<sex <<endl;
	                    cout<<"Age: " <<age <<endl;
	                    cout<<"martial_status: " <<martial_status <<endl;
	                    cout<<"Dscription: " <<discription <<endl;
	                    cout<<"========================================================="<<endl;
	                    cout<<"Records saved"<<endl;
	                    cout<<"========================================================="<<endl;
	                    break;
	                    
	                    case 2:
	                    	cout<<"========================================================="<<endl;
	                        cout<<"Records Cancelled"<<endl;
	                        cout<<"========================================================="<<endl;
	                        break;
	                	
						default:
						{
							cout<<"========================================================="<<endl;
	                        cout<<"wrong input"<<endl;
	                        cout<<"========================================================="<<endl;
	                		
							break;
						}	
					}
				}
	            else if(ST_option=='B'||ST_option=='b'){
	            	cout<<"========================================================="<<endl;
	                cout<<"NAME: MR. PROSPER " <<endl;
	                cout<<"Id_no: ST_PR0001" <<endl;
	                cout<<"Age: 34 "<<endl;
	                cout<<"martial_status: SINGLE " <<endl;
	                cout<<"Dscription: TALL, DARK AND LIGHT SKIN WITH BLACK HAIR AND EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"NAME: MRS. BRIGHT " <<endl;
	                cout<<"Id_no: ST_BR0002" <<endl;
	                cout<<"Age: 41 "<<endl;
	                cout<<"martial_status: MARRIAGE " <<endl;
	                cout<<"Dscription: TALL, BROWN SKIN WITH BLACK HAIR AND EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"NAME: MISS. PABLIN " <<endl;
	                cout<<"Id_no: ST_PA0003" <<endl;
	                cout<<"Age: 29 "<<endl;
	                cout<<"martial_status: MARRIAGE " <<endl;
	                cout<<"Dscription: SHORT, DARK SKIN WITH BLACK HAIR AND BROWN EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
			        }
				
				else{
					cout<<"========================================================="<<endl;
	            	cout<<"================   CHECK IN & OUT OF STAFFS   =========="<<endl;
	            	cout<<"========================================================="<<endl;
	            	cout<<" "<<endl;
					cout<<"               MONDAY 25TH AGUST,2023" <<endl;
					cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: MISS. PABLIN " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: MRS. BRIGHT " <<endl;
	                cout<<"CHECK IN:  8:00AM" <<endl;
	                cout<<"CHECK OUT: 4:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: MR. PROSPER " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"               TUESDAY 26TH AGUST,2023" <<endl;
					cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: MISS. PABLIN " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: MRS. BRIGHT " <<endl;
	                cout<<"CHECK IN:  8:00AM" <<endl;
	                cout<<"CHECK OUT: 4:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: MR. PROSPER " <<endl;
	                cout<<"CHECK IN:  7:30AM" <<endl;
	                cout<<"CHECK OUT: 3:00pm "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                
				}
				  
	                                                         //patients
			case 3:
				char PA_option;
				do{
				cout<<"========================================================="<<endl;
	            cout<<"===============             PATIENT          ============"<<endl;
	            cout<<"========================================================="<<endl;
	            cout<<""<<endl;
	        
	            cout<<"A. Add New Patients"<<endl;
	            cout<<"B. Check Patients's Records"<<endl;
	            cout<<"C. Patients Appointment"<<endl;
	            cout<<"C. New Attendance"<<endl;
	            cout<<" "<<endl;
				cout<<"Select an option: ";
	            cin>>PA_option;
	        	}while(PA_option!='a'&&PA_option!='b'&&PA_option!='c'&&PA_option!='A'&&PA_option!='B'&&PA_option!='C');
	        	system("cls");
	        	
	        	if(PA_option=='A'||PA_option=='a'){
	        		string name,id_no,sex,martial_status,discription;
	        		int age;
	        		
	        		cout<<"Enter Patient's name: ";
	                cin>>name;
	                
	                cout<<"Enter Patient's Id_no: ";
	                cin>>id_no;
	                
	                cout<<"Enter Patient's Gender: ";
	                cin>>sex;
	                
	                cout<<"Enter Patient's age: ";
	                cin>>age;
	                
	                cout<<"Enter Patient's martial_status: ";
	                cin>>martial_status;
	                
	        		cout<<"Enter Patient's Basic Dscription: ";
	                cin>>discription;
	                
	                cout<<"1. svae"<<endl;
	                cout<<"2. cancel"<<endl;
	                int option12B;
	                cout<<"Select an option: ";
	                cin>>option12B;
	                switch(option12B){
	                	case 1:
	                	system("cls");
	                    cout<<"========================================================="<<endl;
	                    cout<<"NAME: " <<name <<endl;
	                    cout<<"Id_no: " <<id_no <<endl;
	                    cout<<"Gender: " <<sex <<endl;
	                    cout<<"Age: " <<age <<endl;
	                    cout<<"martial_status: " <<martial_status <<endl;
	                    cout<<"Dscription: " <<discription <<endl;
	                    cout<<"========================================================="<<endl;
	                    cout<<"Records saved"<<endl;
	                    cout<<"========================================================="<<endl;
	                    break;
	                    
	                    case 2:
	                    	cout<<"========================================================="<<endl;
	                        cout<<"Records Cancelled"<<endl;
	                        cout<<"========================================================="<<endl;
	                        break;
	                	
						default:
						{
							cout<<"========================================================="<<endl;
	                        cout<<"wrong input"<<endl;
	                        cout<<"========================================================="<<endl;
	                		
							break;
						}	
					}
				}
	            else if(PA_option=='B'||PA_option=='b'){
	            	cout<<"========================================================="<<endl;
	                cout<<"===============             RECORDS          ============"<<endl;
	                cout<<"========================================================="<<endl;
	            	cout<<"========================================================="<<endl;
	                cout<<"NAME: MRS. PROSPER " <<endl;
	                cout<<"Id_no: PA_PR0001" <<endl;
	                cout<<"Age: 34 "<<endl;
	                cout<<"martial_status: SINGLE " <<endl;
	                cout<<"Dscription: TALL, DARK AND LIGHT SKIN WITH BLACK HAIR AND EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"NAME: MR. BRIGHT " <<endl;
	                cout<<"Id_no: PA_BR0002" <<endl;
	                cout<<"Age: 41 "<<endl;
	                cout<<"martial_status: MARRIAGE " <<endl;
	                cout<<"Dscription: TALL, BROWN SKIN WITH BLACK HAIR AND EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"NAME: MRS. PABLIN " <<endl;
	                cout<<"Id_no: DR_PA0003" <<endl;
	                cout<<"Age: 29 "<<endl;
	                cout<<"martial_status: MARRIAGE " <<endl;
	                cout<<"Dscription: SHORT, DARK SKIN WITH BLACK HAIR AND BROWN EYES. "  <<endl;
	                cout<<"========================================================="<<endl;
			        }
				else if(PA_option=='c'||PA_option=='C'){
					cout<<"========================================================="<<endl;
	                cout<<"===============             APPOINTMENT          ============"<<endl;
	                cout<<"========================================================="<<endl;
					cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PROSPER " <<endl;
	                cout<<"PATIENT: MRS. BRIGHT" <<endl;
	                cout<<"DAY: MONDAY "<<endl;
	                cout<<"TIME: 1:30pm " <<endl;
					cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. BRIGHT " <<endl;
	                cout<<"PATIENT: MISS VANESSA" <<endl;
	                cout<<"DAY: FRIDAY "<<endl;
	                cout<<"TIME: 8:00AM " <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
	                cout<<"========================================================="<<endl;
	                cout<<"DOCTOR: DR. PAB " <<endl;
	                cout<<"PATIENT: MR & MRS ABODOO" <<endl;
	                cout<<"DAY: WENESSDAY "<<endl;
	                cout<<"TIME: 12:00 NOON " <<endl;
	                cout<<"========================================================="<<endl;
	                cout<<" "<<endl;
				}
				else{
					cout<<"========================================================="<<endl;
	                cout<<"===============          NEW ATTENDANCE      ============"<<endl;
	                cout<<"========================================================="<<endl;
	        		string name,id_no,discription,Prescription;
	        		double tem,weight,height,bp;
	        		
	        		cout<<"Enter Patient name: ";
	                cin>>name;
	                
	                cout<<"Enter Patient Id_no: ";
	                cin>>id_no;
	                system("cls");
	                
	                cout<<"        Patient vitals ";
	                
	                cout<<"Enter Patient's Temperature: ";
	                cin>>tem;
	                
	                cout<<"Enter Patient's Weight: ";
	                cin>>weight;
	                
	                cout<<"Enter Patient's Height: ";
	                cin>>height;
	                
	                cout<<"Enter Patient's blood Presure: ";
	                cin>>bp;
	                system("cls");
	                
	        		cout<<"Enter Staff's Disease Discription: ";
	                cin>>discription;
	                
	                cout<<"Enter Staff's Doctor Prescription: ";
	                cin>>Prescription;
	                
	                cout<<"1. svae"<<endl;
	                cout<<"2. cancel"<<endl;
	                int option12A;
	                cout<<"Select an option: ";
	                cin>>option12A;
	                switch(option12A){
	                	case 1:
	                	system("cls");
	                    cout<<"========================================================="<<endl;
	                    cout<<"NAME: " <<name <<endl;
	                    cout<<"Id_no: " <<id_no <<endl;
	                    cout<<"Patient's Temperature: " <<tem <<endl;
	                    cout<<"Patient's Weight: " <<weight <<endl;
	                    cout<<"blood Presure: " <<bp <<endl;
	                    cout<<"Patient's Heigh: " <<height <<endl;
	                    cout<<"Disease Discription: " <<discription <<endl;
	                    cout<<"Disease Prescription: " <<Prescription <<endl;
	                    cout<<"========================================================="<<endl;
	                    cout<<"Records saved"<<endl;
	                    cout<<"========================================================="<<endl;
	                    break;
	                    
	                    case 2:
	                    	cout<<"========================================================="<<endl;
	                        cout<<"Records Cancelled"<<endl;
	                        cout<<"========================================================="<<endl;
	                        break;
	                	
						default:
						{
							cout<<"========================================================="<<endl;
	                        cout<<"wrong input"<<endl;
	                        cout<<"========================================================="<<endl;
	                		
							break;
						}	
					}
				}
				 
	                
			}
		
	
	return 0;
}
