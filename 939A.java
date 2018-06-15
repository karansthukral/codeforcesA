import java.util.Scanner;

public class A939
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int i, flag=0, tmp;
		int[] a = new int[n+1];

		a[0]=0;

		for(i=1;i<n+1;i++)
			a[i]=in.nextInt();

		for(i=1;i<n+1;i++)
		{
			//System.out.println(i + " " + a[i] + " " + a[a[i]] + " " + a[a[a[i]]]);
			if(a[a[a[i]]]==i)
			{
				flag=1;
				break;
			}

		}

		if(flag==1)
			System.out.println("YES");
		else
			System.out.println("NO");

	}
}




