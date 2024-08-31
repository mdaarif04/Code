function show() {
  let str = prompt("Enter the date of birth (mm,dd,yyyy)");
  let dob = new Date(str);
  let days = [
    "Sunday",
    "Monday",
    "Tuesday",
    "Wensday",
    "Thursday",
    "Friday",
    "Saturday",
  ];
  document.write(`${days[dob.getDay()]}`);
}
