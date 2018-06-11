import java.util.Scanner;

public class A761
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();//even
		int b = in.nextInt();//odd

		//starts with 1
		if(a==0&&b==0)
			System.out.println("NO");
		else if(a==b)
			System.out.println("YES");
		else if(a+1==b)
			System.out.println("YES");
		else if(b+1==a)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}