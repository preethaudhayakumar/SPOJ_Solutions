import java.io.*;
import java.math.BigInteger;
import java.util.*;

class mul
{
	BigInteger func(String num)
	{
		BigInteger num1=new BigInteger(num);
		BigInteger orig=num1;
		BigInteger step=new BigInteger("1");
		int num2=Integer.parseInt(num);
		for(int i=1;i<num2-1;i++)
		{
			orig=orig.subtract(step);
			num1=num1.multiply(orig);
		}
		return num1;
			
	}
	public static void main(String args[])
	{
		Scanner getinput=new Scanner(System.in);
		String test=getinput.nextLine();
		int testcase=Integer.parseInt(test);
		mul obj=new mul();
		while(testcase>0)
		{
			String num=getinput.nextLine();
			BigInteger res=obj.func(num);
			System.out.println(res);
			testcase--;
		}
	}
}
