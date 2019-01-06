import java.io.*;
import java.util.Scanner;
class kbmerge {

	public static void main(String[] args) {
		int pow=1,s,s1,p;
	  Scanner sc=new Scanner(System.in);
	  int n1=sc.nextInt();
	  int n2=sc.nextInt();
	  p=n2;
	while(n2!=0)
	{
		n2=n2/10;
		pow=pow*10;
	}
	s=n1*pow;
	s1=s+p;
	System.out.println(s1);
	}

}
