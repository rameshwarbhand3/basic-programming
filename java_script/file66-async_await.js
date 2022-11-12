const URL="https://jsonplaceholder.typicode.com/post";
async function getposts(){
    const response=await fetch(URL);
    const data=await response.json();
    console.log(data);
}
 getposts();