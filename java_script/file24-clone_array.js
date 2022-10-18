let array1=["array1","array2"];
let array2=[...array1];
console.log(array2);
//  array2=array1.slice(0);
//  console.log(array2);
array1.push("item3");
console.log(array1===array2);
console.log(array1);
console.log(array2);