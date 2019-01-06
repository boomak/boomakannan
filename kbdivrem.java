import java.io.*;
import java.util.Scanner;
public class kbrem
{

	public static void main(String[] args)
	{
		int a=1;
		Scanner sc=new Scanner(System.in);
		int s=sc.nextInt();
		while(a==1)
		{
			if(s%2!=0)
			{
				System.out.println(s);
				a=0;
			}
			else
			{
				s=s/2;
				//System.out.println(s);
			}
		}
		// TODO Auto-generated method stub

	}

}
