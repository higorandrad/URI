var input = require('fs').readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var pi = 3.14159;
var radius = parseFloat(lines.shift());
var area = pi * (radius * radius);

console.log("A=" + area.toFixed(4));