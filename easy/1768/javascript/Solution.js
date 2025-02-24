var mergeAlternately = function(word1, word2) {
    let A = word1.length, B = word2.length;
    let a = 0, b = 0;
    let result = [];

    while (a < A && b < B) {
        result.push(word1[a]);
        result.push(word2[b]);
        a++;
        b++;
    }

    // Add remaining characters if any
    if (a < A) result.push(word1.slice(a));
    if (b < B) result.push(word2.slice(b));

    return result.join(""); 
};