my_string = """  if (distance05 < 30) {{
    setAllPixels(pixels05, NUMPIXELS, 180, 0, 57, delayval);
  }} else if (digitalRead(logicRead)) {{
    setAllPixelsWhite(pixels05, NUMPIXELS, delayval);
  }} else if (timer > 100) {{
    turnOffAllPixels(pixels05, NUMPIXELS, delayval)
  }};
"""

str_dict = {
    12: "95, 239, 10",
    11: "130, 249, 0",
    10: "195, 243, 0",
    9: "250, 234, 5",
    8: "190, 115, 0",
    7: "255, 70, 0",
    6: "255, 0, 40",
    5: "180, 0, 57"
}

for i in range(12, 9, -1):
    copy_string = my_string
    copy_string = copy_string.replace("distance05", "distance{}".format(i))
    copy_string = copy_string.replace("pixels05", "pixels{}".format(i))
    copy_string = copy_string.replace(str_dict[5], str_dict[i])
    print(copy_string)
    print("\n")
