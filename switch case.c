\\Name- Maitrey Pangal
\\email id-marshpangal@gmail.com
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
	int Food;
	printf("1.Pizza,Rs239\n2.Burger,Rs129\n3.Sandwich,Rs149\n4.Frennch Fries,Rs99\n5.Pasta,Rs179\n\n\n\nenter the no. which food you want\n");
	scanf("%d",&Food);
	switch(Food)
	{
		case 1:printf(" 1.Pizza\n Rs. 239");
		break;
	    case 2:printf("2. Burger\n Rs.129");
	    break;
		case 3:printf("3. Sandwich\n Rs.149");
		break;
		case 4:printf("4. Frennch Fries\n Rs.99");
		break;
		case 5:printf("5. Pasta\n Rs. 179");
		break;
		default:printf("no food is available");
	}
	
}
