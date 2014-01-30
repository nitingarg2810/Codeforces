#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char str[250];
	while(cin >> str)
	{
		int len  = strlen(str);
		int cnt = 0;
		for(int i=0;i<len;i++)
		if(isupper(str[i]))
		cnt++;
		
		if(cnt == len || (islower(str[0]) && cnt ==len-1 ))
		{
			for ( int i = 0; i < len; i++ )  
        	{  
            	if ( isupper(str[i]) )  
                	str[i] = tolower(str[i]);  
            	else  
                	str[i] = toupper(str[i]);  
        	}  	
		}
		cout << str << endl;
	}
}
