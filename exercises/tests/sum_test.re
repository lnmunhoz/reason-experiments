open Jest;

describe("Expect", () => {
  open Expect;

  test("should sum 1 + 2", () => {
    expect(Functions.sum(1, 2)) |> toBe(3)
  })

})

