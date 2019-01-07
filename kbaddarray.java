import java.io.*;
import java.util.Scanner;
class kbaddsum {

	public static void main(String[] args) {
		int[] a=new int[90];
		int sum=0;
	  Scanner sc=new Scanner(System.in);
	  int n=sc.nextInt();
	  for(int i=0;i<n;i++)
	  {
	  	a[i]=sc.nextInt();
	  }
	  for(int i=0;i<n;i++)
	  {
	  sum=sum+a[i];
	  }
	  System.out.println(sum);
	}
}
	  
	 


