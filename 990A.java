import java.util.Scanner;

public class A990
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		long m = in.nextLong();
		long a = in.nextLong();
		long b = in.nextLong();

		long build=0, destroy=0, flag=0;

		if(n==m)
		{
			build=0;
			destroy=0;
		}
		else
		{
			destroy=(n%m);
			build=m-(n%m);
		}


		//System.out.println(build + " " + destroy);

		long costb = (build*a);
		long costd = (destroy*b);


		if(costb>=costd)
			System.out.println(costd);
		else if(costb<costd)
			System.out.println(costb);

	}
}