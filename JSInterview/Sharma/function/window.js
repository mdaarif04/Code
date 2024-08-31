// only availble in var not let

a = 10;
function cal() {
  var a = 20;
  alert(`Hello ${a}`);
  alert(window.a);
}
cal();
