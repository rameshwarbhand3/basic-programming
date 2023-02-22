package oops;
import java.util.*;

public class Product {
    int pid;
    String pname;
    int pcost;
    public Product(int pid,String pname,int pcost){
        this.pid = pid;
        this.pname = pname;
        this.pcost = pcost;
    }
    public static void main(String args[]){
        Product prod1 = new Product(101,"wheel",25);
        Product prod2 = new Product(102, "santoor", 30);
        Product prod3 = new Product(103, "lifebuoy", 20);
        ArrayList<Product>al = new ArrayList<>();
        al.add(prod1);
        al.add(prod2);
        al.add(prod3);
        
        for(Product p : al){
            System.out.println(p.pid + p.pname + p.pcost);
        }
        System.out.println("The total Bill of products are : ");
        int TotalBill = prod1.pcost + prod2.pcost + prod3.pcost ;
        System.out.println(TotalBill);
    }
}

