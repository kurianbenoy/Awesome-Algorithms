
function palindrome(str) {
  let re = /[\W_]/g;
  var string = str.toLowerCase().replace(re, '');
  var revstring = string.split('').reverse().join('')
  return string===revstring;
}


