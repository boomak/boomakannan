import java.io.*;
import java.util.Scanner;
class kbkth 
{
	public static void main(String[] args)			{
		int[] a=new int[90];
		int h=0;
		int i;
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
			//System.out.println(a[i]);
				h++;
			}
			if(h==k)
			{
				break;
			}
		}
		System.out.println(a[i]);
		
		}

}
