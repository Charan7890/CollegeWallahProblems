
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    
		Scanner sc = new Scanner(System.in);
		
		ArrayList<Integer> a = new ArrayList<>();
		
		int n = sc.nextInt();
		
		for(int i=0;i<n;i++){
		    int ele = sc.nextInt();
		    a.add(ele);
		}
		
		prefixSum(a);
		
		System.out.print("Enter number of queries:");
		int queries = sc.nextInt();
		
		while(queries!=0){
		    int L,R;
		    System.out.println("Enter L and R value(0- indexed based):");
		    L = sc.nextInt();
		    R = sc.nextInt();
		    int answer = 0;
		    if(L==0){
		        answer = a.get(R);
		    }
		    else{
		        answer = a.get(R) - a.get(L-1);
		    }
		    System.out.println("The answer="+answer);
		    queries--;
		}
		
	}
	public static void prefixSum(ArrayList<Integer> a){
	    int length = a.size();
	    int psum = 0;
	    for(int i=0;i<length;i++){
	        if(i==0){
	            // do nothing
	        }
	        else{
	            //a.set(i) = a.get(i)+a.get(i-1);
	            
	            a.set(i,a.get(i)+a.get(i-1)); 
	        }
	    }
	}
}
