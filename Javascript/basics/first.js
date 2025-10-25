const accountId = 1224

let accountEmail ="rahhul@gmail.com"

var accountPassoword="12345"// var is not used because of() scope.

accountCity ="Jaipur"

// accountId = 12 is wrong as constant cannot be changed
console.log(accountId);


accountEmail="tarin@gmail.com"

accountPassoword="7709"

accountCity="Delhi"// this is dangerous as we did not use let.

console.table([accountEmail,accountId,accountPassoword,accountCity]);
