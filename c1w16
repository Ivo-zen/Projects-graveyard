package main

import (
 "fmt"
 "strings"
)

func calculateAverage(numbers []int) []float64 {
 length := len(numbers)
 averages := make([]float64, length)

 // Process the first number
 averages[0] = float64(numbers[0])

 // Process numbers in the middle of the sequence
 for i := 1; i < length-1; i++ {
  averages[i] = float64(numbers[i-1]+numbers[i]+numbers[i+1]) / 3
 }

 // Process the last number
 averages[length-1] = float64(numbers[length-1])

 return averages
}

func main() {
 var n int
 fmt.Scan(&n)

 numbers := make([]int, n)
 for i := 0; i < n; i++ {
  fmt.Scan(&numbers[i])
 }

 averages := calculateAverage(numbers)

 // Format the averages with the desired precision and join them with spaces
 result := strings.Trim(strings.Join(strings.Fields(fmt.Sprint(averages)), " "), "[]")

 fmt.Println(result)
}
