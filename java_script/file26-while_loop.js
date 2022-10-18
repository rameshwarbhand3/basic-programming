const fruits=["apple","mango","grapes"];
const fruit2=[];
let i=0;
while(i<fruits.length){
    fruit2.push(fruits[i].toUpperCase());
    i++;
}
fruit2.push("banana");
console.log(fruit2);