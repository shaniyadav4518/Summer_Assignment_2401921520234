import java.util.HashMap;

// LeetCode 242 - Valid Anagram
// Approach: Frequency count using HashMap
// Time: O(n), Space: O(1) — at most 26 unique characters

public class ValidAnagram {

    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;

        int[] count = new int[26]; // only lowercase letters

        for (char c : s.toCharArray()) count[c - 'a']++;
        for (char c : t.toCharArray()) count[c - 'a']--;

        for (int freq : count) {
            if (freq != 0) return false;
        }
        return true;
    }

    // Test
    public static void main(String[] args) {
        ValidAnagram sol = new ValidAnagram();

        System.out.println(sol.isAnagram("anagram", "nagaram")); // true
        System.out.println(sol.isAnagram("rat", "car"));         // false
        System.out.println(sol.isAnagram("a", "a"));             // true
        System.out.println(sol.isAnagram("ab", "a"));            // false
    }
}
