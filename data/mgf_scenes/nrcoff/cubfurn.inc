# Cubicle furniture.  All units in inches.

# The desk vertices:
v dv1 =
	p 0 0 30
v dv2 =
	p 0 28 30
v dv3 =
	p 66 28 30
v dv4 =
	p 80 42 30
v dv5 =
	p 80 84 30
v dv6 =
	p 108 84 30
v dv7 =
	p 108 0 30

# The desktop:
o desk
	m speckled_grey_formica
	xf -t 0 0 -1
		f dv1 dv2 dv3 dv4 dv5 dv6 dv7
	xf
	f dv7 dv6 dv5 dv4 dv3 dv2 dv1
	xf -t 0 0 -.5
		cyl dv2 .5 dv3
		cyl dv3 .5 dv4
		cyl dv4 .5 dv5
	xf
o

# The desk drawers:
i dv15x12.inc
o file_drawer1
	i drawer.inc -t 1 28 8.5 -a 2 -t 15.1 0 0
o
o file_drawer2
	i drawer.inc -rz 90 -t 80 68 8.5
o
i dv15x8h.inc
o desk_drawer1
	i drawer.inc -t 1 28 20.5 -a 2 -t 15.1 0 0
o
o desk_drawer2
	i drawer.inc -rz 90 -t 80 68 20.5 -a 2 -t 0 -15.1 0
o

# The terminal:
o terminal
	i terminal.mgf -t -.2 -.215 0 -s 39.37 -rz 45 -t 90 18 30
o

# The chair:
o chair
	i orngchar.mgf -t -.225 -.23 0 -s 39.37 -rz -135 -t 60 48 0
o

# A pair of overhead cabinets:
o ovhdcab
	i bookbox.mgf -a 2 -t .9 0 0 -i 1 -s 39.37 -t 0 0 50
o

# Some additional, unspecified items:
o vase
	i dafvase.mgf -s .3937 -rz -25 -t 10 8 30
o
o book
	m cover_mat =
		c
			cxy 0.37 0.3
		rd 0.4265
	i book.mgf -s .3937 -rz -105 -t 50 20 30
o
o mug
	i mug.mgf -s .3937 -rz 30 -t 41.77 23.51 30
o
o wastebasket
	i wstbskt.mgf -s 39.37 -rz -15 -t 41 71 0
o
o openbook
	m cover_mat =
		c
			cxy 0.2687 0.2371
		rd 0.2195
	i openbook.mgf -s .3937 -rz 60 -t 95 40 30
o
o pencil
	i pencil.mgf -s .3937 -rz -135 -t 65 20 30
o
