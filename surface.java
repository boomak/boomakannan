import java.io.*;
import java.util.Scanner;
class surface
{
public static void main(String[] args)
{
	int volume,area;
	Scanner sc=new Scanner(System.in);
	int l=sc.nextInt();
	int b=sc.nextInt();
	int h=sc.nextInt();
	volume=l*b*h;
	area=(2*l*b)+(2*b*h)+(2*h*l);
	System.out.println(area);
	System.out.println(volume);

}
}
