// Time complexity = O(N^2)
//space complexity  = O(N^2)

var arr = [55, 3, 45, 33, 25]
var ansarr = [];


// function performs and return addition, multiplication and subtraction
function recur(current, next) {
    var sum = current + next;
    var multiply = current * next;
    var subtract = current - next;
    ansarr.push(sum);
    ansarr.push(multiply)
    ansarr.push(subtract);

}
var initial = arr[0];
recur(initial, arr[1])


// Function call statements to bruteforce values and pushing into an array.
for (let j = 0; j < arr.length - 2; j++) {
    if (j == 0) {
        for (let i = 0; i < 3 ** (j + 1); i++) {
            recur(ansarr[i], arr[j + 2])
        }
    }
    else {
        if (j == 1) {
            for (let i = 3; i < 3 + 3 ** (j + 1); i++) {
                recur(ansarr[i], arr[j + 2])
            }
        }
        else {
            var a = 3 ** j
            for (let i = a + 3 ** (j - 1); i < a + 3 ** (j + 1); i++) {
                recur(ansarr[i], arr[j + 2])
            }
        }
    }
}


//finding the desired output for the question.
for (var a = Math.abs(ansarr.length/4) ; a< ansarr.length-1; a++) {
    if (ansarr[a] % 101 == 0) {
        console.log(ansarr[a]);
        break;
    }
} 



