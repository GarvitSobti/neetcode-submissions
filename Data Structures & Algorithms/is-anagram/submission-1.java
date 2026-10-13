class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character, Integer> counts1 = new HashMap<>();
        for (char c : s.toCharArray()) {
            counts1.put(c, counts1.getOrDefault(c, 0) + 1);
        }

        Map<Character, Integer> counts2 = new HashMap<>();
        for (char c1 : t.toCharArray()) {
            counts2.put(c1, counts2.getOrDefault(c1, 0) + 1);
        }

        if(counts1.equals(counts2)){
            return true;
        }

        return false;
    }
}