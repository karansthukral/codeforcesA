import java.util.Scanner;

public class A230
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int s = in.nextInt();
		int n = in.nextInt();
		int[] x = new int[n];
		int[] y = new int[n]; 

		int i, j, tmp;

		for(i=0;i<n;i++)
		{
			x[i] = in.nextInt();
			y[i] = in.nextInt();
		}

		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
			{
				if(x[j]>=x[j+1])
				{
					tmp=x[j];
					x[j]=x[j+1];
					x[j+1]=tmp;

					tmp=y[j];
					y[j]=y[j+1];
					y[j+1]=tmp;					
				}
			}
		for(i=0;i<n;i++)
		{	
			if(x[i]<s)
				s+=y[i];
			else
				break;
		}
		//System.out.print(i);

		if(i==n)
			System.out.print("YES");
		else
			System.out.print("NO");
		
	}
}