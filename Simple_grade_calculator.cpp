#include<stdio.h>
int main()
{
	int phy, chem, maths, Total, per, Grade;
	printf("Enter the marks of phy:");
	scanf("%d",&phy);
	printf("Enter the marks of chem:");
	scanf("%d",&chem);
	printf("Enter the marks of maths:");
	scanf("%d",&maths);
	Total=phy+chem+maths;
	printf("Total:%d",Total);
	per=(Total*100)/300;
	printf("\nPercentage:%d",per);

	per>=90 ?  printf("\nGrade:A"):
	 
	per>=80 ? printf("\nGrade:B"):
		per>=70 ? printf("\nGrade:C"):
			per>=60 ? printf("\nGrade:D"):
				per>=50 ? printf("\nGrade:E"):
					printf("\nFail.");
				
					printf("\nComment based on your grade.");
					printf("\n.........................");
					printf("\n1.Grade A");
					printf("\n2.Grade B");
					printf("\n3.Grade C");
					printf("\n4.Grade D");
					printf("\n5.Grade E");
					printf("\n6.Fail");
					printf("\nEnter your Grade:");
					scanf("%d",&Grade);
					switch(Grade)
					{
						case 1:
							printf("\nExcellent work",per>=90);
							break;
						case 2:
							printf("\nWell done",per>=80&&per<90);
							break;
						case 3:
							printf("\nGreat",per>=70&&per<80);
							break;
						case 4:
							printf("\nGood job",per>=60&&per<70);
							break;
						case 5:
							printf("\nyou passed",per>=50&&per<60);
							break;
						default:
							printf("\nSorry failed");
							break;
					}
if(per>50){printf("\nCongratulation! You are eligible for next level.");

}else{printf("\nPlease try again next time");
}
	
		
	
	
	                        
}
