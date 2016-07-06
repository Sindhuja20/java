import java.io.*;
import java.util.*;
public class Vowel
{
public static void main(String args[])
{
String str;
System.out.println("Enter the character:");
Scanner s=new Scanner(System.in);
str=s.next();
if(str.equals("a")||str.equals("e")||str.equals("i")||str.equals("o")||str.equals("u"))
System.out.println("Vowel");
else
System.out.println("Constant");
}
}
