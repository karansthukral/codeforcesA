import java.util.Scanner;

public class A931
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();

		int diff, count=0, flag=0, tmp=1;

		if(b>a)
			diff=b-a;
		else
			diff=a-b;

		if(diff!=0)
		{
			if(diff%2!=0)
				flag=1;
				
			diff=diff/2;

			while(diff>0)
			{
				count+=tmp;
				tmp++;
				diff--;
			}
			count*=2;

			if(flag==1)
				count+=tmp;
		}

		System.out.println(count);


	}
}