import java.util.Scanner;
public class Assignment11
{
	public static void main(String[] args)
	{
		int num,digit,temp,cubesum=0;
		System.out.println("Enter Number: ");
		Scanner sc=new Scanner(System.in);
		num=sc.nextInt();
		temp=num;
		while(num!=0)
		{
			digit=num%10;
			cubesum+=Math.pow(digit,3);
			num/=10;	
		}
		if(cubesum==temp)
		{
			System.out.println(temp+" is Armstrong!!");
		}
		else
		{
			System.out.println(temp+" is not an Armstrong!!");
		}
		
	}
}



