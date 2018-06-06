import java.util.Scanner;

public class A581
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();

		int mix=0, same=0;

		if(a>=b)
		{
			mix=b;
			a-=b;
			b=0;
		}
		else
		{
			mix=a;
			b-=a;
			a=0;
		}

		if(a>=2)
			same=a/2;
		else if(b>=2)
			same=b/2;

		//System.out.println(5/2);
		System.out.println(mix + " " + same);
	}
}