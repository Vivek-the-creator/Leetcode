class Solution {
    public List<String> generateValidStrings(int n, int k) {
        List<String> l = new ArrayList<>();
        int[] mid = {n,k};
        solve(0,n,k,0,new StringBuilder(), l);
        return l;
    }
    private void solve(int i, int n, int k, int cost, StringBuilder s, List<String> l){
        if(cost>k) return;
        if(i == n){
            l.add(s.toString());
            return;
        }
        s.append('0');
        solve(i+1, n, k, cost, s, l);
        s.deleteCharAt(s.length()-1);
        if(s.length()==0 || s.charAt(s.length()-1)!='1'){
            s.append('1');
            solve(i+1, n, k, cost+i, s, l);
            s.deleteCharAt(s.length()-1);
        } 
    }
}