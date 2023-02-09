const selectionSort = (arr) => {
  for (let i = 0; i < arr.length - 1; i++) {
    let min = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    [arr[i], arr[min]] = [arr[min], arr[i]];
  }
};

let arr = [5, 4, 3, 2, 1];
console.log("Before Sorting");
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
console.time("Test Timer");
selectionSort(arr);
console.timeEnd("Test Timer");
console.log("After Sorting");
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
