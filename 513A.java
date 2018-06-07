import java.util.Scanner;

public class A513
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n1 = in.nextInt();
		int n2 = in.nextInt();
		int k1 = in.nextInt();
		int k2 = in.nextInt();

		int flag=0;

		while(true)
		{
			n1--;
			if(n1==0&&n2>0)
			{
				flag=1;
				break;
			}
			n2--;
			if(n2==0&&n1>0)
			{
				flag=2;
				break;
			}
		}
		if(flag==1)
			System.out.println("Second");
		else if(flag==2)
			System.out.println("First");			
	}
}