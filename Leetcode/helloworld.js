/*
Write a function createHelloWorld. It should return a new function that always returns "Hello World".
Example 1: 
Input: args = []
Output: "Hello World"
Explanation:
const f = createHelloWorld();
f(); // "Hello World"

The function returned by createHelloWorld should always return "Hello World".
Example 2:

Input: args = [{},null,42]
Output: "Hello World"
Explanation:
*/

const f = createHelloWorld();
f({}, null, 42); // "Hello World"
const createHelloWorld = function()
{
    return function(...args){
    return "Hello World";
}();
}

       