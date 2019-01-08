import java.io.*;
import java.util.Scanner;
class ptr
{
public static void main(String[] args)
{
	int rem;
	Scanner sc=new Scanner(System.in);
	int p=sc.nextInt();
	int t=sc.nextInt();
	int r=sc.nextInt();
	rem=(p*t*r)/100;
	System.out.println(rem);
}
}
