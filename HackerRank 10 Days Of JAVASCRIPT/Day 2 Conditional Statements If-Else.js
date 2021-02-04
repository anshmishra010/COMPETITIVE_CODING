'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getGrade(score) {
    let grade;
    // Write your code here
    if(25<score& score<=30){
        grade='A';
    }
    else if(20<score){
        grade = 'B';
    }
    else if(15<score){
        grade = 'C';
    }
    else if(10<score){
        grade= 'D';
    }
    else if(5<score){
        grade = 'E';
    }
    else if(0<score){
        grade = 'F';
    }
    
    return grade;
}


function main() {
    const score = +(readLine());
    
    console.log(getGrade(score));
}