const URL="https://jsonplaceholder.typicode.com/posts";
fetch(URL,{
    method:'POST',
    body:JSON.stringify({
        title:'foo',
        body:'bar',
        userId:1,
    }),
    headers:{
        'content-type':'application/jason; charset:UTF-8',
    },
})
.then(response=>{
    if(response.ok){
        return response.json();
    }
    else{
        throw new Error("somehing went wrong!!!")
    }
})
.then(data=>{
    console.log(data);
})
.catch(error=>{
    console.log("inside catch");
    console.log(error);
})