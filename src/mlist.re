include List;

let hd =
  fun
  | [] => None
  | [x, ..._] => Some x;

let tl =
  fun
  | [] => None
  | [_, ...xs] => Some xs;

let nth t n =>
  if (n < 0) {
    None
  } else {
    let rec nth_aux t n =>
      switch t {
      | [] => None
      | [x, ...xs] => n == 0 ? Some x : nth_aux xs (n - 1)
      };
    nth_aux t n
  };

let unordered_append l1 l2 =>
  switch (l1, l2) {
  | ([], l)
  | (l, []) => l
  | _ => rev_append l1 l2
  };