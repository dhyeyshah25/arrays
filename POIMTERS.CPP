 #include<stdio.h>
 #include<math.h>
 #include<conio.h>
 void stats(int*,float*,double*);
 int main()
 {
	int sum;
	float avg;
	double stdev;
	clrscr();
	stats(&sum,&avg,&stdev);
	printf("Sun is %d\nAverage is %f\nSstandard deviation is %lf\n",sum,avg,stdev);
	getch();
	return 0;
 }
 void stats(int*sum,float*avg,double*stdev)
 {


	int a,b,c,d,e;
	clrscr();
	printf("Enter five numbers");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	*sum=a+b+c+d+e;
	*avg=*sum/5;
	*stdev=sqrt(pow((a-*avg),2.0)+pow((b-*avg),2.0)+pow((c-*avg),2.0)+pow((d-*avg),2.0)+pow((e-*avg),2.0))/4;
	getch();

 }



