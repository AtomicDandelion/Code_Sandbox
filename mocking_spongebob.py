alt_case_text = input("Enter mocking Spongebob text: ")
i = 0
mocking = ""
for char in alt_case_text:
	if i%2:
		mocking += char.upper()
	else:
		mocking += char
	if char.isalpha():
		i += 1
print(mocking)
