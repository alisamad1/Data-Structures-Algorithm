import java.util.HashMap;
import java.util.Arrays;
public class TwoSum{
    public static int[] twosum(int[] nums, int target){
        HashMap<Integer, Integer> hashmap = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int diff = target - nums[i];
            if(hashmap.containsKey(diff)){
                return new int[]{hashmap.get(diff),i};
            }
            hashmap.put(nums[i],i);
        }
        return new int[]{};
    }
    public static void main(String[] args){
        int[] nums = {2,7,9,11};
        int target = 9;
        int[]  result = twosum(nums, target);
        System.out.println("Indices are" + Arrays.toString(result));
    }
}