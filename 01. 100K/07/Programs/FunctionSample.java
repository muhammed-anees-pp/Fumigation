import java.util.Scanner;

public class FunctionSample {
    public static void main(String[] args) {
        Scanner add=new Scanner(System.in);

        System.out.println("Enter two numbers: ");
        int num1=add.nextInt();
        int num2=add.nextInt();

        int result=sum(num1, num2);
        System.out.println("Result is: "+result);
    }
    
    static int sum(int number1, int number2){
        int sum=number1+number2;
        return sum;
    }
}


