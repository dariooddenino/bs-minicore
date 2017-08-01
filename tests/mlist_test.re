open InfiniteJest;

open InfiniteJest.Test;

open Minicore;

open List;

module E = Expect;

let suite =
  describe
    "MList"
    (
      fun () => [
        test "hd - []" (fun () => [] |> hd |> E.toEqual None),
        test "hd - [2]" (fun () => [2] |> hd |> E.toEqual (Some 2)),
        test "hd - ['a', 'b']" (fun () => ['a', 'b'] |> hd |> E.toEqual (Some 'a')),

        test "tl - []" (fun () => [] |> tl |> E.toEqual None),
        test "tl - [2]" (fun () => [2] |> tl |> E.toEqual (Some [])),
        test "tl - [2, 3, 4]" (fun () => [2, 3, 4] |> tl |> E.toEqual (Some [3, 4])),

        test "nth - [] 2" (fun () => nth [] 2 |> E.toEqual None),
        test "nth - ['a'] 2" (fun () => nth ['a'] 2 |> E.toEqual None),
        test "nth - [1, 2, 3] 1" (fun () => nth [1, 2, 3] 1 |> E.toEqual (Some 2))
      ]
    );