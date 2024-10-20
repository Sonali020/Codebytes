class Solution
{
public:
int missingNumber(vector<int>& nums)
{
int n = nums.size();
int Sum=n*(n+1)/2;
int solSum;
for (int num:nums)
{
solSum += num;
}
return Sum -solSum;
}
};
