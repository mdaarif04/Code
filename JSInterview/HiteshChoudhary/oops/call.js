
function SetUser(username)
{
    this.username = username
    console.log('Called')
}


function CreateUser(username, email, password)
{
    SetUser.call(this, username)   //agar this ko argument ke taur pe dete h to pichle wala pura is this me aajata h or .call ka use karne ka matalb h ki wo refference store karke rakhta h run hone ke bad nahi to destroye ho jaaga aise
    this.username = username,
    this.email = email,
    this.password = password
    return this
}

const newUser =new CreateUser('Aarif','aarif@gmail.com','123')
console.log(newUser)