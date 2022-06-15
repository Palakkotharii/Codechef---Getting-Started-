#include<bits/stdc++.h>
using namespace std;
int main(){
	 ios_base::sync_with_stdio(false);
   cin.tie(0); 
    int t;
    cin>>t;
    char ch;
    while(t--)
    {
        cin>>ch;
        if(ch=='B'|| ch == 'b')
        {
            cout<<"BattleShip"<<"\n";
        }
        else if(ch=='C'|| ch == 'c')
        {
            cout<<"Cruiser"<<"\n";
        }
        else if(ch=='D'|| ch == 'd')
        {
            cout<<"Destroyer"<<"\n";
        }
        else 
        {
            cout<<"Frigate"<<"\n";
        }
    }
    /* using switch
    while(t--)
	{
	    cin >> c;
	    switch(c)
	    {
	        case 'B':
	        case 'b':
	                    cout << "BattleShip";break;
	        
	        case 'C':
	        case 'c':
	                    cout << "Cruiser";break;
	                    
	        case 'D':
	        case 'd':
	                    cout << "Destroyer";break;
	                    
	        case 'F':
	        case 'f':
	                    cout << "Frigate";break;
	    }
	    cout<<"\n";
	}
    */

   /* another app:
	while(t--){
	    char c ;
	    cin>> c;
	    
	    if( c  >= 97) // convert the lower case to upper case using ASCII value 
        {
	        c = c-32 ;
	    }
	    switch(c){
	        
	        case 'B' :  cout<<"BattleShip"<<endl ;
	        break ;
	        
	        case 'C' : cout<<"Cruiser" <<endl;
	        break ;
	        
	        case 'D' : cout<<"Destroyer"<<endl ;
	        break ;
	        
	        case 'F' : cout<<"Frigate"<<endl ;
	        break ;
	        
	    }
	    
	    
	}
   */
    return 0;
}