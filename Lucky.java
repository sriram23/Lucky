import java.io.*;
class Lucky{
	public static void main(String args[]) throws IOException{
		String name;
		int luck = 0;
		System.out.println("Enter your name:");
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		name = in.readLine();
		System.out.println("Hello "+name);
		char letter[] = name.toCharArray();
		for(int i=0;i<letter.length;i++){
			//letter[i] = letter[i] - 96;
			luck += (int) letter[i] - 96;
		}
		while(luck > 9){
			luck = luck%10 + (luck%100)/10 + (luck%1000)/100;
		}
		System.out.println("Your Lucky Number is:"+luck);
	}
}
