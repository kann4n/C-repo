#include<stdio.h>

int main()
{
	int marks_list[] = {100, 20, 20, 40, 35, 60, 80, 40, 50, 60, 95, 10, 67, 69, 56, 96};
	int mark80above=0, mark60above=0, mark40above=0, mark40less=0;
	int m81_100=0, m61_80=0, m41_60=0, m00_40=0;
	int n = sizeof(marks_list) / sizeof(marks_list[0]);	
	
    for( int i=0; i<n; i++)
	{
		int mark = marks_list[i];
		if (mark > 80)
			m81_100++;
		else if (mark > 60)
			m61_80++;
		else if (mark > 40)
			m41_60++;
		else
	       m00_40++;	
    }

    mark80above = m81_100;
    mark60above = m81_100 + m61_80;
    mark40above = m81_100 + m61_80 + m41_60;
    mark40less  = m00_40;
    
    printf(" Mark \t\t No of students\n");
    printf(" <40 \t\t\t %3d\n", mark40less);
    printf(" >40 \t\t\t %3d\n", mark40above);
    printf(" >60 \t\t\t %3d\n", mark60above);
    printf(" >80 \t\t\t %3d\n", mark80above);

    printf(" (80, 100] \t\t %3d\n", m81_100);
    printf(" (60,  80] \t\t %3d\n",   m61_80);
    printf(" (40,  60] \t\t %3d\n",   m41_60);
    printf(" ( 0,  40] \t\t %3d\n",   m00_40);
	
    return 0;
}
