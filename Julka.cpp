import java.io.*;
import java.util.*;
import java.math.BigInteger;

class julspoj
{
	public static void main(String args[])
	{
		String a,b,c="2";
		BigInteger first,second,count,klad,jul,klad1,test;
		test=new BigInteger(c);
		Scanner getinput=new Scanner(System.in);
		for(int i=0;i<10;i++)
		{
			a=getinput.nextLine();
			b=getinput.nextLine();
  			first=new BigInteger(a);
			second=new BigInteger(b);
			count=first.subtract(second);
			klad=count.divide(test);
			klad1=klad.add(second);
			System.out.println(klad1);
			jul=count.divide(test);
			System.out.println(jul);
		}
	}
}
		
