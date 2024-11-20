public class Student {
    private String name;
    private int age;


    // Setter method for name and age
    public void setName(String name){
        this.name=name;
    }

    public void setAge(int age) {
        if(age>=0) { // Data validation
            this.age=age;
        }
        else {
            System.out.println("Age cannot be negative");
        }
        
    }

    // Getter method for name and age
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}
