import java.util.Scanner;

public class A448
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);

		int a1 = in.nextInt();
		int a2 = in.nextInt();
		int a3 = in.nextInt();

		int b1 = in.nextInt();
		int b2 = in.nextInt();
		int b3 = in.nextInt();

		int n = in.nextInt();

		int cup, medal, count;
		cup=a1+a2+a3;
		medal=b1+b2+b3;

		count=(cup/5);
		count+=(medal/10);

		if(cup%5!=0)
			count++;

		if(medal%10!=0)
			count++;

		if(count<=n)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}