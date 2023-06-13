int removeElement(int* nums, int numsSize, int val){
    int count=0;
    for(int i;i<numsSize;i++){
        if(nums[i]==val){
            count++;
            nums[i]= -1;
        }
    }
    int index=0;
    for(int i;i<numsSize;i++){
        if(nums[i] != -1){
            nums[index++]=nums[i];
        }
    }
    int newsize= numsSize-count;
    return newsize;

}