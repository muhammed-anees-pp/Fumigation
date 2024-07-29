import java.util.Scanner;

public class Sample {
    Sample(){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int n1=s.nextInt();
        int n2=s.nextInt();
        int sum=n1+n2;
        System.out.println("Result: "+sum);
    }
}
