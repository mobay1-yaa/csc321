import java.util.Scanner;

public class MenuDisplay {
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
    
            while (true) {
	    	System.out.println("\nChoose an option:");
	        System.out.println("1. Hello");
	        System.out.println("2. Give a Motivation Quote");
	        System.out.println("3. Share a Fun Fact about programming");
	        System.out.println("4. Exit");
	        System.out.print("Enter your choice: ");}

	    	int choice = scanner.nextInt();
		scanner.nextLine(); // Consume newline

		switch (choice) {
			case 1:
				System.out.println("Hello! Hope you're having a great day!");
				break;
			case 2:
				System.out.println("I am on my way. I can go the distance! I don't care how far. Somehow I'll be strong, I know. Every mile will be worth my while. I would go most anywhere to find where I belong");
				break;
			case 3:
				System.out.println("Coding is fun as long as you find some prodject to do");
				break;
			case 4:
				System.out.println("Goodbye!");
				scanner.close();
				return;
			default:
				System.out.println("Invalid choice. Please select a valid option.");
			}
		}
	}
}
