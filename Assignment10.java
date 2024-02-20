import java.util.Scanner;
public class Assignment10
{
    pubilc static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter basic salary: ");
        Double basic=sc.nextDouble();
        double hra=0.10*basic;
        double Ta=0.05*basic;
        double grosssalary=basic+hra+Ta;
        double tax=0.02*grosssalary;
        double netSalary=grosssalary-tax;
        System.out.println("*********Employee salary breackdown*********");
        System.out.println("Basic Pay: "+basic);
        System.out.println("HRA: "+hra);
        System.out.println("TA: "+Ta);
        System.out.println("Gross Salary: "+grosssalary);
        System.out.println("Tax: "+tax);
        System.out.println("Net Salary: "+netSalary);
    
    }
}