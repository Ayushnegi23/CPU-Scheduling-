#include<stdio.h>
#include<string.h>
int main()
{
int ete[20],ata[10],n,i,j,temp,pp[10],sts[10],ftf[10],wtw[10],tat[10];
int totwtt=0,tottaa=0;
float awta,atat;
char pnp[10][10],tt[10];
printf("Enter the number of processes you want to enter\n:");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
printf("Enter process name\n,Enter the arrivaltime\n,Enter the execution time\n and Enter the priority:\n");
flushall();
scanf("%s\n%d\n%d\n%d\n",pnp[i],&ata[i],&ete[i],&pp[i]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(pp[i]<pp[j])
{
temp=pp[i];
pp[i]=pp[j];
pp[j]=temp;
temp=ata[i];
ata[i]=ata[j];
ata[j]=temp;
temp=ete[i];
ete[i]=ete[j];
ete[j]=temp;
strcpy(tt,pnp[i]);
strcpy(pnp[i],pnp[j]);
strcpy(pnp[j],tt);
}
}
for(i=0;i<n;i++)
{
if(i==0)
{
sts[i]=ata[i];
wtw[i]=sts[i]-ata[i];
ftf[i]=sts[i]+ete[i];
tat[i]=ftf[i]-ata[i];
}
else
{
sts[i]=ftf[i-1];
wtw[i]=sts[i]-ata[i];
ftf[i]=sts[i]+ete[i];
tat[i]=ftf[i]-ata[i];
}
totwtt+=wtw[i];
tottaa+=tat[i];
}
awta=(float)totwtt/n;
atat=(float)tottaa/n;
printf("\nThe process name\t\n The arrival time\t\nThe execution time\t \nThe priority\t\nThe waiting time\t\nTheturnaroundtime\t\n");
for(i=0;i<n;i++)
printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d",pnp[i],ata[i],ete[i],pp[i],wtw[i],tat[i]);
printf("\nTHE Average waiting time is:%f",awta);
printf("\nTHE Average turnaroundtime is:%f",atat);
}

