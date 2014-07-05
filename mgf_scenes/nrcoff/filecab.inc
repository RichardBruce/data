# A simple horizontal file cabinet 36x19x24 inches.
# [The following is described looking from "back"]
# (0,0,0) located at bottom back left corner
# X-axis directed towards "right"
# Y-axis directed towards "front"
# Z-axis directed up

m burgundy_formica
v fc.xy =
	p .05 0 0
v fc.xY =
	p .05 18 0
v fc.XY =
	p 35.95 18 0
v fc.Xy =
	p 35.95 0 0
prism fc.xy fc.xY fc.XY fc.Xy 24

v fcd.Xz =
	p 34 0 0
v fcd.XZ =
	p 34 0 10
v fcd.xZ =
	p 0 0 10
v fcd.xz =
	p 0 0 0
o drawer
	xf -t 1 18.1 2 -a 2 -t 0 0 11
	prism fcd.xz fcd.Xz fcd.XZ fcd.xZ .9
	xf
o
