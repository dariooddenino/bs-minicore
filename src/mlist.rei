include module type of List;

let hd: list 'a => option 'a;
let tl: list 'a => option (list 'a);
let nth: list 'a => int => option 'a;
let unordered_append: list 'a => list 'a => list 'a;