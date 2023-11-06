package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	var X int64
	fmt.Scan(&n, &X)
	a := make([]struct{ first, second int64 }, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i].first)
		a[i].second = int64(i + 1)
	}
	sort.Slice(a, func(i, j int) bool { return a[i].first < a[j].first })
	i, j := 0, n-1
	for i < j {
		if a[i].first+a[j].first == X {
			if a[i].second > a[j].second {
				a[i], a[j] = a[j], a[i]
			}
			fmt.Println(a[i].first, a[j].first)
			return
		}
		if a[i].first+a[j].first < X {
			i++
		} else {
			j--
		}
	}
	fmt.Println("0 0")
}
