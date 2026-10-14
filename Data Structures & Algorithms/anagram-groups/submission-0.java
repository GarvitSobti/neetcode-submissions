class Solution {
    private List<List<String>> ConvertToList(Map<String,List<String>> map){
        List<List<String>> result = new ArrayList<>();
        for (List<String> anagrams : map.values())
        result.add(anagrams);
        return result;
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> map = new HashMap<>();
        for(String word : strs){
            String sorted = sortStr(word);
            map.putIfAbsent(sorted, new ArrayList<>());
            map.get(sorted).add(word);
        }
        return ConvertToList(map);
    }

    private String sortStr(String word){
        char[] chars = word.toCharArray();
        Arrays.sort(chars);
        return new String(chars);
    }
}
