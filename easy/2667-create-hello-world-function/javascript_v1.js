// Pushed: 2026-09-28 17:05:37 UTC
// Difficulty: Easy
// Runtime: 38 ms
// Memory: 53.7 MB

/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        return "Hello World";
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */