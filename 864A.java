import java.util.Scanner;

public class A864
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();

		int[] a = new int[n];
		int[] chk = new int[101];
		int[] num = new int[2];
		int i, j=0, count=0;

		for(i=0;i<101;i++)
			chk[i]=0;

		for(i=0;i<n;i++)
		{
			a[i] = in.nextInt();
			chk[a[i]]++;
		}

		for(i=0;i<101;i++)
			if(chk[i]>0)
				count++;

		if(n%2!=0)
			System.out.println("NO");
		else
		{
			if(count!=2)
				System.out.println("NO");
			else if(count==2)
			{
				for(i=0;i<101;i++)
				{
					if(chk[i]>0)
					{
						num[j]=i;
						j++;
					}
				}
				if(chk[num[0]]==chk[num[1]])
				{
					System.out.println("YES");
					System.out.println(num[0] + " " + num[1]);
				}
				else
					System.out.println("NO");
			}

		}

	}
} 