// 1. Write code to get array of names from given array of users
// 2. Only active users
// 3. Sort by user age
const users = [
  {
    Name: "jack",
    studenClass: 6,
    studenSection: "a",
    isActive: true,
    age: 22,
  },
  {
    Name: "tom",
    studenClass: 6,
    studenSection: "a",
    isActive: true,
    age: 18,
  },
  {
    Name: "sam",
    studenClass: 6,
    studenSection: "a",
    isActive: true,
    age: 24,
  },
  {
    Name: "Aarif",
    studenClass: 14,
    studenSection: "a",
    isActive: true,
    age: 21,
  },
];


// for asacending order 
// const user = users.sort((users1,users2)=>users1.age <users2.age ? -1 : 1)
// console.log(user)

// for descanding order 
// const user = users.sort((users1,users2)=>users1.age <users2.age ? 1 : -1)
// console.log(user)

// Solution 1 level 1

const Name = [];
// for(i = 0;i<users.length;i++)
// {
//     if (users[i].isActive) {
        
//         Name.push(users[i].Name);
//     }
// }
// console.log(Name);

// Solution 1 level 2 

// users.forEach((users) =>{
//     Name.push(users.Name);
// })
// console.log(Name);


// Solution 1 level 3 

const name1 = users.
filter((users) => users.isActive).
sort((users1,users2)=>users1.age <users2.age ? 1 : -1).
map((users)=>users.Name);

console.log(name1)
