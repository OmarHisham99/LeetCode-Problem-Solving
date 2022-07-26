#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        oset<int> os; 
        vector<int> result;
        
        for(int i=nums.size()-1;i>=0;i--){
             result.push_back(os.order_of_key(nums[i])); 
            os.insert(nums[i]); 
        }
        reverse(result.begin(),result.end()); 
        return result; 
    }
};