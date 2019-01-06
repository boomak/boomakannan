import java.io.*;
import java.util.Scanner;
public class kbsmallest {

	public static void main(String[] args)throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int f=0,min=0,i;
		int[] a=new int[90];
		int[] b=new int[90];
		int n=sc.nextInt();
		int k=sc.nextInt();
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		/*for(i=0;i<n;i++)
		{
			b[i]=a[i];
		}*/
	    for(i=0;i<n-k+1;i++)
		{
	    	min=0;
		for(int j=0;j<n;j++)
		{
		if(a[j]>min)
		{
			min=a[j];		
		    f=j;
		}
		}
		a[f]=0;
	}
	System.out.println(min);
	
		
		
		// TODO Auto-generated method stub

	}

}
