import java.io.*;
import java.util.Scanner;
class kbpro {

	public static void main(String[] args)
	{ 
		int sum=1,s;
	  Scanner sc=new Scanner(System.in);
	  int a=sc.nextInt();
	  while(a!=0)
	  {
	  	s=a%10;
	  	sum=sum*s;
	  	a=a/10;
	  }
	 System.out.println(sum); 
	}
}
	  
	 


