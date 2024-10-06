public class B extends A{
    B(){
        System.out.println("It is B constructor");
    }

    B(int a){
        super(10);
        System.out.println("It is argument constructor from B");
    }

    public static void main(String[] args) {
        B b1=new B(10);
    }
}
