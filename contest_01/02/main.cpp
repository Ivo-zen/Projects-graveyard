package main

import "fmt"

func main() {
oxygen := 0.5
days := 365

oxygenYeeee := oxygen * float64(days)

fmt.Printf("Oxygen used per year: %.2f liters\n", oxygenYeeee)

oxygenProducedPerPoplar := 32.0
poplarTreesNeeded := oxygenYeeee / oxygenProducedPerPoplar

fmt.Printf("Poplar trees needed: %.2f\n", poplarTreesNeeded)

oxygenProducedPerOak := 20.0
oakTreesNeeded := oxygenYeeee / oxygenProducedPerOak

fmt.Printf("Oak trees needed: %.2f\n", oakTreesNeeded)
}
