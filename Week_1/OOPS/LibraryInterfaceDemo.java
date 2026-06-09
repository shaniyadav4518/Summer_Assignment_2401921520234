// Main Demo class covering all test cases
public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        // ===================== TEST CASE #1: KidUser =====================

        KidUser kid = new KidUser();

        // --- registerAccount: age = 10 ---
        kid.age = 10;
        kid.registerAccount();
        // Expected: You have successfully registered under a Kids Account

        // --- registerAccount: age = 18 ---
        kid.age = 18;
        kid.registerAccount();
        // Expected: Sorry, Age must be less than 12 to register as a kid

        // --- requestBook: bookType = "Kids" ---
        kid.bookType = "Kids";
        kid.requestBook();
        // Expected: Book Issued successfully, please return the book within 10 days

        // --- requestBook: bookType = "Fiction" ---
        kid.bookType = "Fiction";
        kid.requestBook();
        // Expected: Oops, you are allowed to take only kids books


        // ===================== TEST CASE #2: AdultUser =====================

        AdultUser adult = new AdultUser();

        // --- registerAccount: age = 5 ---
        adult.age = 5;
        adult.registerAccount();
        // Expected: Sorry, Age must be greater than 12 to register as an adult

        // --- registerAccount: age = 23 ---
        adult.age = 23;
        adult.registerAccount();
        // Expected: You have successfully registered under an Adult Account

        // --- requestBook: bookType = "Kids" ---
        adult.bookType = "Kids";
        adult.requestBook();
        // Expected: Oops, you are allowed to take only adult Fiction books

        // --- requestBook: bookType = "Fiction" ---
        adult.bookType = "Fiction";
        adult.requestBook();
        // Expected: Book Issued successfully, please return the book within 7 days
    }
}
