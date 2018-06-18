import java.util.Scanner;

public class A994
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();

		int[] x = new int[n];
		int[] y = new int[m];

		int i, j;

		for(i=0;i<n;i++)
			x[i] = in.nextInt();

		for(i=0;i<m;i++)
			y[i] = in.nextInt();

		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(x[i]==y[j])
					System.out.print(x[i] + " ");
	}
}