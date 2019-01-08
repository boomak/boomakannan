import java.io.*;
import java.util.Scanner;
class asc
{
public static void main(String[] args)
{
	int i,j,s=0;
	int[] a=new int[90];
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	for(i=0;i<n;i++)
	{
		a[i]=sc.nextInt();
	}
	
	for(i=0;i<n;i++)
	{
		s=0;
		if(a[i]<a[i+1])
		{
			s=1;
		}
	if(s==0)
	{
		System.out.println(i);
		break;
	}
	}
	
}
}
