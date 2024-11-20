public class B extends A{
    int a=50;
    void display(){
        System.out.println("It's class B");
        super.display(); //It will helps to work the base class function
    }

    void variable(){

        int sum=a+super.a;
        System.out.println("Sum:"+sum);
    }

    public static void main(String[] args) {
        B b=new B();
        b.display();
        b.variable();
    }    
}
