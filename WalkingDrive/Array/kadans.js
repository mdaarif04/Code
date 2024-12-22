//8 Kadane’s Algorithm: Maximum Sum Subarray.
let ar = [3, 4, 6, -2, 5, -1];

function kadansMaxSubArraySum(ar) {
  let curSum = ar[0];
  let maxSum = ar[0];
  for (let i = 1; i < ar.length; i++) {
    // Update currentSum to be either the current element itself or currentSum + arr[i]
    curSum = Math.max(ar[i], curSum + ar[i]);
    // Update maxSum if the currentSum is greater than maxSum
    maxSum = Math.max(maxSum, curSum);
  }
  return maxSum;
}
console.log(kadansMaxSubArraySum(ar));




