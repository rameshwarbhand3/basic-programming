package Set.HashSet.LinkedHashSet;
import java.util.*;
class Book {
    int id;
    String name,author,publisher;
    int quantity;
    Book(int id,String name,String author,String publisher,int quantity){
        this.id = id;
        this.name=name;
        this.author=author;
        this.publisher=publisher;
        this.quantity=quantity;
    }
}
public class LinkedhashSetDemo{
    public static void main(String args[]){
        Book b1=new Book(101,"Let us C","Yashwant Kanetkar","BPB",8);  
        Book b2=new Book(102,"Data Communications & Networking","Forouzan","Mc Graw Hill",4);  
        Book b3=new Book(103,"Operating System","Galvin","Wiley",6);  
        LinkedHashSet<Book>lhs = new LinkedHashSet<Book>();
        lhs.add(b1);
        lhs.add(b2);
        lhs.add(b3);
        for(Book b : lhs){
            System.out.println(b.id+""+b.name+""+b.author+""+b.publisher+""+b.quantity);
        }
}
}
