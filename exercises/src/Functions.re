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

