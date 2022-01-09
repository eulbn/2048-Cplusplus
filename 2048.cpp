#include<iostream>

using namespace std;
// using 3x3 matrices

main()
{
	int a[4][4] = {{2,0,0,0},
				  {0,0,0,0},
				  {0,0,0,0}
				  {0,0,0,0}};
	char key;
	int i,j,k;
	while(1)
	{
		for(k = 0 ; k <4 ; k++)
			{
				for(i = 0 ; i<4 ; i++)
					cout<<a[k][i]<<" ";// here im just prainting the matrices
				cout<<endl;
			}
		cin>>key;
		if(key == 'd')// d for right key
		{
			for(k=0; k< 4 ; k++)//checking every single row
			{//row by row
				for( i = 2 ; i>=0 ; i--)//starting from second last position and working backwards
				{
					int tem = a[k][i];//storig the current value we working with
					for(j = i+1 ; j< 4 ; j++)
					if(a[k][j] == 0)//now im checking if the right side clear i.e zero (so we can move the value to right)
					{
						a[k][j] = tem;//replacing right value with left  
						a[k][j-1] =0;//and left vale with right(i.e moving the value towards left becasue we have pressed d which means right)
					}
					else if(a[k][j] != 0 && tem != a[k][j])//now im checking if the way is not clear(something else is present to the right which is neither zero nor equall to the value)
						break;
					else if(a[k][j] == tem)//now if the value is equall to the right value
					{
						a[k][j] += tem;//then im just summing the values
						a[k][j-1] = 0;//and making the value zero where it was
					}
	
				}
			}
			for(j=0 ; j<3 ; j++)
				{
					if(a[j][0] == 0)
					{
						a[j][0] = 2;
						break;
					}
				}
		}
		else if(key == 'a')
		{
			for(k=0; k< 3 ; k++)
			{
				for( i = 1 ; i<3 ; i++)
				{
					int tem = a[k][i];
					for(j = i-1 ; j >=0  ; j--)
					if(a[k][j] == 0)
						{
							a[k][j] = tem;
							a[k][j+1] =0;
						}
					else if(a[k][j] != 0 && tem != a[k][j])
						break;
					else if(a[k][j] == tem)
					{
						a[k][j] += tem;
						a[k][j+1] = 0;
					}
				}
			
			}
			for(j=0 ; j<3 ; j++)
				{
					if(a[j][2] == 0)
					{
						a[j][2] = 2;
						break;
					}
			
				}
		}
		else if(key == 's')
		{
			for(k=0; k< 3 ; k++)
			{
				for( i = 1 ; i>=0 ; i--)
				{
					int tem = a[i][k];
					for(j = i+1 ; j< 3 ; j++)
					if(a[j][k] == 0)
					{
						a[j][k] = tem;
						a[j-1][k] =0;
					}
					else if(a[j][k] != 0 && tem != a[j][k])
						break;
					else if(a[j][k] == tem)
					{
						a[j][k] += tem;
						a[j-1][k] = 0;
					}
				}
		
			}
			for(j=0 ; i<3 ; j++)
			{
				if(a[0][j] == 0)
				{
					a[0][j] = 2;
					break;
				}
			}
		}
		else if(key == 'w')
		{
		for(k=0; k< 3 ; k++)
			for( i = 1 ; i<3 ; i++)
			{
				int tem = a[i][k];
				for(j = i-1 ; j >=0  ; j--)
					if(a[j][k] == 0)
					{
						a[j][k] = tem;
						a[j+1][k] =0;
					}
				else if(a[j][k] != 0 && tem != a[j][k])
					break;
				else if(a[j][k] == tem)
				{
					a[j][k] += tem;
					a[j+1][k] = 0;
				}
	
			}
		for(j=0 ; i<3 ; j++)
		{
			if(a[2][j] == 0)
			{
				a[2][j] = 2;
				break;
			}
		}
	
		}
	}	
	
}
