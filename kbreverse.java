import java.io.*;
import java.util.Scanner;
class reverse
{
public static void main(String[] args)
{
	int s=0,rem;
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	while(n!=0)
	{
		rem=n%10;
		s=s*10+rem;
		n=n/10;
	}
	System.out.println(s);
	
}
}
