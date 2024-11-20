public class Sample extends Main
{
    int age;
    void displaySample(){
        System.out.println("Age: "+age);
    }
    
    public static void main (String[] args) {
        Sample s1=new Sample();
        s1.name="Ajvad";
        s1.display();
        s1.age=23;
        s1.displaySample();
    }
    
}