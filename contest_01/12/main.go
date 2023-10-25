package main

import "fmt"

func main() {
 var X int
 fmt.Scan(&X)

 operations := 0

 for X != 1 {
  if X%2 == 0 {
   X /= 2
  } else {
   X = X*3 + 1
  }

  operations++
 }

 fmt.Println(operations)
}
