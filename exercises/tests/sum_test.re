open Jest;

describe("Expect", () => {
  open Expect;

  test("should sum 1 + 2", () => {
    expect(Functions.sum(1, 2)) |> toBe(3)
  })

  test("should convert 10 meters to 10000 millimiters", () => {
    expect(Functions.meterToMillimeter(10.0)) |> toBe(10000.0)
  })

  test("should convert 5.5 meters to 5500 millimiters", () => {
    expect(Functions.meterToMillimeter(5.5)) |> toBe(5500.0)
  })

  test("should return how many seconds has in a day", () => {
    expect(Functions.DaysToSeconds.convert(1, 0, 0, 0)) |> toBe(86400)
  })

  test("should return how many seconds has in a 1:05:42:55", () => {
    expect(Functions.DaysToSeconds.convert(1, 5, 42, 55)) |> toBe(86400 + 18000 + 2520 + 55)
  })
})

