function myfun(){
    function hello(){
        return "hello world"
    }
    return hello;
}
const ans=myfun();
console.log(ans());