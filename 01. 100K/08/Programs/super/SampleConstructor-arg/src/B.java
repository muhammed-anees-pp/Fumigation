public class B extends A{
    B(){
        System.out.println("It is B constructor");
    }

    B(int a){
        super(20);
        System.out.println("It is argument constructor from B");
    }
}
