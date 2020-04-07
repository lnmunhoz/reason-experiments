open Jest;
open Expect;

describe("Exercise 1", () => {
 test("should sum 1 + 2", () => {
    expect(Functions.sum(1, 2)) |> toBe(3)
  })

})

describe("Exercise 2", () => {
  test("should convert 10 meters to 10000 millimiters", () => {
    expect(Functions.meterToMillimeter(10.0)) |> toBe(10000.0)
  })

  test("should convert 5.5 meters to 5500 millimiters", () => {
    expect(Functions.meterToMillimeter(5.5)) |> toBe(5500.0)
  })
})

describe("Exercise 3", () => {
 test("should return how many seconds has in a day", () => {
    expect(Functions.DaysToSeconds.convert(1, 0, 0, 0)) |> toBe(86400)
  })

  test("should return how many seconds has in a 1:05:42:55", () => {
    expect(Functions.DaysToSeconds.convert(1, 5, 42, 55)) |> toBe(86400 + 18000 + 2520 + 55)
  })
})

describe("Exercise 4", () => {
 test("should return the salary raise of 9000", () => {
    expect(Functions.getSalaryRaise(3000.0, 30.0)) |> toBe(3900.0)
  })

  test("should not increase salary", () => {
    expect(Functions.getSalaryRaise(1000.0, 0.0)) |> toBe(1000.0)
  })
})

describe("Exercise 5", () => {
 test("should return price with the discount of 10%", () => {
    expect(Functions.getDiscount(1000.0, 10.0)) |> toBe(900.0)
  })

  test("should return the discount of 32.5%", () => {
    expect(Functions.getDiscount(3500.0, 32.5)) |> toBe(2362.5)
  })
})

describe("Exercise 6", () => {
  test("trip should take 0.5 hours", () => {
    expect(Functions.getTripTime(50000.0, 100.0)) |> toBe(0.5)
  })
})

describe("Exercise 7", () => {
  test("convert 32 celsius to fahrenheit", () => {
    expect(Functions.celsiusToFahreinheit(32.0)) |> toBe(89.6)
  })
})

describe("Exercise 8", () => {
  test("convert 89.6 fahrenheit to celsius", () => {
    expect(Functions.fahreinheitToCelsius(89.6)) |> toBe(32.0)
  })
})

describe("Exercise 9", () => {
  test("convert 89.6 fahrenheit to celsius", () => {
    expect(Functions.calcCarRentalPrice(100.0, 7.0)) |> toBe(435.0)
  })
})

describe("Exercise 10", () => {
  test("convert 89.6 fahrenheit to celsius", () => {
    expect(Functions.calcSmokerLife(1.0, 1.0)) |> toBe(2.53)
  })
})