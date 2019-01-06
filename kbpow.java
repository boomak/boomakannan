import java .io.*;
import java.util.Scanner;
class kbpow {

	public static void main(String[] args) {
		int s=1;
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		for(int i=0;i<k;i++)
		{
			s=s*n;
		}
		System.out.println(s);

	}

}
