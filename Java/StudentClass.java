import java.util.Scanner;
public class StudentClass
{
    class Student
{
    String name=null;
    String roll=null;
    String getName()
    {
        return name;
    }
    void setName(String n)
    {
        name=n;
    }
}


    public static void main(String args[])
    {
        Student s1,s2,s3,s4,s5;
        s1=new Student();
        System.out.println("Enter name: ");
        Scanner sc=new Scanner(System.in);
        String n=sc.nextLine();
        s1.setName(n);
        System.out.println("Name is: "+s1.getName());
    }
}

