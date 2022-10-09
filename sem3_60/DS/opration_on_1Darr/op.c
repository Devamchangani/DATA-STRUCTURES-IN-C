/*
 * op.c
 *
 *  Created on: 09-Jul-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[20],size;
	int j,i;
	int temp,pos,num,pos1,num1,ch;

	printf("\n > Enter the size of array : ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("\n Enter the value for %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\n > Array : ");

	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}

/*
	//-------------------------------- * INSERTION * --------------------------------//

	printf("\n > Enter the position you wish to enter : ");
	scanf("%d",&pos);

	if(0>=pos || pos>size)
	{
		printf("\n\n > OUT OF RANGE !!! ");
	}
	else
	{
		printf("\n > Enter the number you wish to enter : ");
		scanf("%d",&num);

		for(i=size-1;i>pos-2;i--)
		{
			arr[i+1]=arr[i];
		}

		arr[pos-1]=num;
		size=size+1;

		printf("\n > New Array : ");
		for(i=0;i<size;i++)
		{
			printf(" %d ",arr[i]);
		}
	}

	//-------------------------------- * DELETATION * --------------------------------//

	printf("\n\n > Enter the position you wish to delete : ");
	scanf("%d",&pos1);

	if(0>pos1 || pos1>size)
	{
		printf("\n\n > OUT OF RANGE !!! ");
	}
	else
	{
		for(i=pos1-1;i<size;i++)
		{
			arr[i]=arr[i+1];
		}
		size=size-1;

		printf("\n > New Array : ");
		for(i=0;i<size;i++)
		{
			printf(" %d ",arr[i]);
		}
	}

	//-------------------------------- * SEARCHING * --------------------------------//

	printf("\n\n > Enter the the number you wish to search : ");
	scanf("%d",&num1);

	printf("\n > Your search result : ");
	for(i=0;i<size;i++)
	{
		if(num1==arr[i])
		{
			printf(" %d ",arr[i]);
		}
	}

	//-------------------------------- * ASCENDING SORTING * --------------------------------//

	printf("\n\n\n > After sorting the array on ascending order : ");

	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}

	//-------------------------------- * DESCENDING SORTING * --------------------------------//

	printf("\n\n\n > After sorting the array on descending order : ");

	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
*/



	do
	{
		printf("\n\n\n > =============== * MENU * =============== \n\n");
		printf("\n 1. INSERTION ");
		printf("\n 2. DELETATION ");
		printf("\n 3. SEARCHING ");
		printf("\n 4. DISPLAY ");
		printf("\n 5. ASCENDING SORTING ");
		printf("\n 6. DESCENDING SORTING ");
		printf("\n 7. Exit ");

		printf("\n > Enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			printf("\n > Enter the position you wish to enter : ");
				scanf("%d",&pos);

				if(0>=pos || pos>size)
				{
					printf("\n\n > OUT OF RANGE !!! ");
				}
				else
				{
					printf("\n > Enter the number you wish to enter : ");
					scanf("%d",&num);

					for(i=size-1;i>pos-2;i--)
					{
						arr[i+1]=arr[i];
					}

					arr[pos-1]=num;
					size=size+1;

					printf("\n > New Array : ");
					for(i=0;i<size;i++)
					{
						printf(" %d ",arr[i]);
					}
				}
			break;
		case 2:
			printf("\n\n > Enter the position you wish to delete : ");
				scanf("%d",&pos1);

				if(0>pos1 || pos1>size)
				{
					printf("\n\n > OUT OF RANGE !!! ");
				}
				else
				{
					for(i=pos1-1;i<size;i++)
					{
						arr[i]=arr[i+1];
					}
					size=size-1;

					printf("\n > New Array : ");
					for(i=0;i<size;i++)
					{
						printf(" %d ",arr[i]);
					}
				}
			break;
		case 3:
			printf("\n\n > Enter the the number you wish to search : ");
				scanf("%d",&num1);

				printf("\n > Your search result : ");
				for(i=0;i<size;i++)
				{
					if(num1==arr[i])
					{
						printf(" %d ",arr[i]);
					}
				}
			break;
		case 4:
			printf("\n > Array : ");

				for(i=0;i<size;i++)
				{
					printf(" %d ",arr[i]);
				}
				break;
		case 5:
			printf("\n\n\n > After sorting the array on ascending order : ");

				for(i=0;i<size;i++)
				{
					for(j=i;j<size;j++)
					{
						if(arr[i]>arr[j])
						{
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}

				for(i=0;i<size;i++)
				{
					printf(" %d ",arr[i]);
				}
			break;
		case 6:
			printf("\n\n\n > After sorting the array on descending order : ");

				for(i=0;i<size;i++)
				{
					for(j=i;j<size;j++)
					{
						if(arr[i]<arr[j])
						{
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}

				for(i=0;i<size;i++)
				{
					printf(" %d ",arr[i]);
				}
			break;
		case 7:
			exit(0);
		}

	}while(ch!=6);



	return 0;
}



