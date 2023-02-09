//Takes More Time
const insertionSort = (arr) => {
  for (let i = 1; i < arr.length; i++) {
    let j = i - 1;
    let data = arr[i];
    while (j >= 0 && arr[j] > data) {
      //swap
      [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      j--;
    }
  }
};

//Takes Less Time
const insertionSortLessSwap = (arr) => {
  for (let i = 1; i < arr.length; i++) {
    let j = i - 1;
    let data = arr[i];
    while (j >= 0 && arr[j] > data) {
      //swap
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = data;
  }
};

let arr = [5, 4, 3, 2, 1];
console.log("Before Sorting");
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
console.time("Test Timer");
// insertionSort(arr);
insertionSortLessSwap(arr);
console.timeEnd("Test Timer");
console.log("After Sorting");
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
