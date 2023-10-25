func isLucky(num string) bool {
	mp := map[string]int{
		"0": 0,
		"1": 1,
		"2": 2,
		"3": 3,
		"4": 4,
		"5": 5,
		"6": 6,
		"7": 7,
		"8": 8,
		"9": 9,
	}

	first := num[:3]
	last := num[3:]
	res_1 := 0
	res_2 := 0
	for i := 0; i < 3; i++ {
		res_1 += mp[string(first[i])]
		res_2 += mp[string(last[i])]
	}

	return res_1 == res_2
}
