import java.io.*;
import java.util.Scanner;
class sumn {

	public static void main(String[] args)
	{
		int c=0,i;
	  Scanner sc=new Scanner(System.in);
	  int[] a=new int[90];
	  int n=sc.nextInt();
	  int k=sc.nextInt();
	  for(i=0;i<n;i++)
	  {
	  a[i]=sc.nextInt();	
	  }
	  for(i=0;i<n;i++)
	  {
	  	c++;
	  	if(c==k)
	  	{
	  		System.out.println(a[i]);
	  		break;
	  	}
	  }
	  
	}
}
	  
	 


