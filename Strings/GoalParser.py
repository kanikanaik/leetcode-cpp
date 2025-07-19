command = "G()(al)"
output = ""
if (command.find("()")) or (command.find("(al)")):
    x = command.replace("()","o")
    y = x.replace("(al)","al")
    output += y

print(output)




# elif (command.find("(al)")):
#     y = output.replace("(al)","al")
#     output = ""
#     output += y
