import java.util.Scanner;

public class A500
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int t = in.nextInt();
		t--;
		n--;

		int i, pos=0, tmp=0;
		int[] a = new int[n];

		for(i=0;i<n;i++)
			a[i] = in.nextInt();

		while(pos<t)
		{
			tmp=a[pos];
			pos+=tmp;
			//System.out.println(pos+1);
		}
		//System.out.println(t + " " + pos);
		if(pos==t)
			System.out.println("YES");
		else
			System.out.println("NO");

	}
}