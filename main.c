/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* buildArray(int* nums, int numsSize, int* returnSize) {
    // 取得記憶體空間
    int* arr = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // 將input的值做重新排列
    for (int i = 0; i < numsSize; i++) {
        arr[i] = nums[nums[i]];
    }

    // 輸出
    return arr;
}
