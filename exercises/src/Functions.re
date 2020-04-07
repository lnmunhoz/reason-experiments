
// Sum to numbers
let sum = (num1, num2) => num1 + num2

// Converts meteros to millimiters
let meterToMillimeter = (m: float) => m *. 1000.0

module DaysToSeconds = {
  let daysToHours = days => days * 24
  let hoursToMinutes = hours => hours * 60
  let minutesToSeconds = (minutes) => minutes * 60

  // TODO: How to use pipes here to make mroe readable?
  let convert = (days, hours, minutes, seconds) => {

    let secondsInDay = days
      -> daysToHours
      -> hoursToMinutes
      -> minutesToSeconds

    let secondsInHours = hours
      -> hoursToMinutes
      -> minutesToSeconds

    let secondsInMinutes = minutes
      -> minutesToSeconds

    secondsInDay + secondsInHours + secondsInMinutes + seconds
  }
}

let getSalaryRaise = (salary: float, increase: float) => {
  let salaryRaise = salary *. (increase /. 100.0)
  salary +. salaryRaise
}

let getDiscount = (price: float, discount: float) => {
  let discountValue = price *. (discount /. 100.0)
  price -. discountValue
}

// Distance is in meters
// AvgSpeed is in km/h
let getTripTime = (distance, avgSpeed) => {
  (distance /. 1000.0) /. avgSpeed
}

let celsiusToFahreinheit = (c) => 9.0 *. c /. 5.0 +. 32.0
let fahreinheitToCelsius = (f) => (f -. 32.0) *. 5.0 /. 9.0

let calcCarRentalPrice = (km, days) => days *. 60.0 +. km *. 0.15

// Assuming that one cigar reduces 10 minute of your life
let calcSmokerLife = (cigarsPerDay, yearsSmoking) => {

  let totalCigars = cigarsPerDay *. yearsSmoking *. 365.0
  let minutesLost = totalCigars *. 10.0

  Js.Float.toFixedWithPrecision(minutesLost /. 60.0 /. 24.0, ~digits=2) |> Js.Float.fromString
}