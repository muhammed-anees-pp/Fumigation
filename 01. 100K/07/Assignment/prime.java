import java.util.Scanner;

public class prime {
    public static void main(String[] prime) {
        Scanner num=new Scanner(System.in);
        
        System.out.println("Enter a number: ");
        int number1=num.nextInt();

        int flag=0;
        for(int i=2;i<=number1/2;i++){
            if(number1%i==0){
                flag=1;
            }
        }

        if(flag==0){
            System.out.println("Prime");
        }
        else{
            System.out.println("Not Prime");
        }
    }
}