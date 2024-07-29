import java.util.Scanner;

public class SumofTwo {
    public static void main(String[] args) {
        Scanner num=new Scanner(System.in);

        System.out.println("Enter two numbers: ");
        int num1=num.nextInt();
        int num2=num.nextInt();

        int sum=num1+num2;
        System.out.println("Sum of two numbers is:"+sum);
    }
}
