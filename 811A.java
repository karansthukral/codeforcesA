import java.util.Scanner;

public class A811
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		int flag=0, tmp=1;

		while(true)//Vladik, Valera
		{
			if((a-tmp)>=0)
			{
				a-=tmp;
				tmp++;
			}
			else
			{
				flag=1;
				break;
			}

			if((b-tmp)>=0)
			{
				b-=tmp;
				tmp++;
			}
			else
			{
				flag=2;
				break;
			}
		}
		if(flag==1)
			System.out.println("Vladik");
		else
			System.out.println("Valera");
	}
}