# A file drawer (depends on vertex definitions)

m speckled_grey_formica
# Front face
o front
	f dv0 dv1 dv4 dv6 dv7 dv8 dv5 dv4 dv2 dv3
o
# Back face
o back
	f dv3b dv2b dv1b dv0b
o
# Side surfaces
o side
	cyl dv0m .5 dv3m
	ring dv0m 0 .5
	ring dv3m 0 .5
	cyl dv1m .5 dv2m
	ring dv1m 0 .5
	ring dv2m 0 .5
	f dv0 dv0b dv1b dv1
	f dv2 dv2b dv3b dv3
o
# Drawer cabinet
o cabinet
	prism dp0 dp1 dp2 dp3 25
o
m burgundy_formica
o handle
	f hv0 hv1 hv10 hv11
	f hv1 hv2 hv9 hv10
	f hv2 hv3 hv8 hv9
	f hv3 hv4 hv7 hv8
	f hv4 hv5 hv6 hv7
	f hv2 hv1 hv4 hv3
	f hv8 hv7 hv10 hv9
o
