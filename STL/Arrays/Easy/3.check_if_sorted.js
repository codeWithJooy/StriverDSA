const isSorted = (arr) => {
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < arr[i - 1]) return false;
  }
  return true;
};

let sorted = [1, 2, 3, 4, 5];
let unsorted = [1, 2, 4, 3, 5];

console.log(`The array ${sorted} is sorted ${isSorted(sorted)}`);
console.log(`The array ${unsorted} is sorted ${isSorted(unsorted)}`);
