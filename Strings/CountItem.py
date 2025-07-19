items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]]
ruleKey = "type"
ruleValue = "phone"

count = 0
if ruleKey == "type":
    a = 0
elif ruleKey == "color":
    a = 1
elif ruleKey == "name":
    a = 2


for i in range(len(items)):
    for j in range(a,len(items[i]),3):
        if ruleValue == items[i][j]:
            count += 1
        # print(items[i][j])
print(count)
     