# m4t2_turtles.py
# CSC 134 - M4T2 - Turtles
# Name: Correa
# Date: 10/12/26
#
# Run this file in IDLE: press F5 (Run > Run Module).
# A window opens and the turtle draws. Close the window to stop.

import turtle

# ---- THE KNOBS: change these numbers, then press F5 again ----
SIDES = 6          # sides on one shape (3 = triangle, 4 = square, ...)
LENGTH = 170       # length of one side, in steps
REPEATS = 45       # how many copies of the shape, turned around the center
GROW = -3          # steps added to LENGTH after each copy (try 2 or -2)
COLORS = ["#023E8A", "#0077B6", "#00B4D8", "#48CAE4"]   # the pen cycles through these

# ---- SETUP: leave this part alone ----
screen = turtle.Screen()
screen.bgcolor("white")
t = turtle.Turtle()
t.speed(0)         # 0 = fastest. 1 = slowest, 10 = fast.

# ---- THE LOOPS: this is the part to study ----
length = LENGTH
for copy in range(REPEATS):                    # OUTER loop: one pass per shape
    t.pencolor(COLORS[copy % len(COLORS)])     # pick the next color
    for side in range(SIDES):                  # INNER loop: one pass per side
        t.forward(length)
        t.left(360 / SIDES)
    t.left(360 / REPEATS)                      # turn a little before the next shape
    length = length + GROW

t.hideturtle()
turtle.done()      # keeps the window open. Do not remove this line.
