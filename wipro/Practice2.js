// Call() => Invokes a function with a specified this context and arguments passed individually.

// function great(greating){
//     console.log(greating, this.name);
// }

// const person = {name: 'Aarif'}
// great.call(person,"Hello");

// apply() => Similar to call(), but arguments are passed as an array.

// function great(greating){
//     console.log(greating, this.name);
// }

// const person = {name: 'Aarif'}
// great.apply(person,["Hello"]);

//  bind() => Returns a new function with a specified this context, but doesn't invoke it immediately.
function great(greating){
    console.log(greating, this.name);
}

const person  = {name:'Aarif'};
const greatPreson = great.bind(person)
greatPreson('hey')

