const bubbleSort = (arr) => {
  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = 0; j < arr.length - i - 1; j++) {
      //compare arr[j] and arr[j+1]
      if (arr[j] > arr[j + 1]) [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
    }
  }
};

let arr = [5, 4, 3, 2, 1];
console.log("Before Sorting");
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
console.time("Test Timer");
bubbleSort(arr);
console.timeEnd("Test Timer");
console.log("After Sorting");
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
