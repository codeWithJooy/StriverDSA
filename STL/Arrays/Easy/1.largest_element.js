const arr = [1, 2, 3, 4, 5];

const largest = arr.reduce((accu, current) => {
  return Math.max(accu, current);
});

console.log(`Max Value of array is ${largest}`);
