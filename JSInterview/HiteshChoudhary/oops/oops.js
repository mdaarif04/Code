const user = {
  username: "Aarif",
  signedCount: 5,
  getdatabase: function () {
    console.log("Data recevied successfully", this);
  },
};

// console.log(user.username);
// console.log(user.getdatabase());

//Constructor object

function User(username, logedincount, isLogedin) {
  (this.username = username),
    (this.logedincount = logedincount),
    (this.isLogedin = isLogedin);
    this.greetign = function(){
        console.log(`Welcome to ${this.username}`);
        
    }
  return this;
}

const userOne =new User("Raza", 13, false);
const userTwo =new User("Sarfraza", 19, true);
console.log(userOne);
// console.log(userTwo);
