import os, sys
from PIL import Image

size = (720, 720)

for infile in sys.argv[1:]:
    outfile = os.path.splitext(infile)[0] + f"{size[0]}.jpg"
    if infile != outfile:
        try:
            with Image.open(infile) as im:
                im.thumbnail(size)
                im.save(outfile, "JPEG")
        except OSError:
            print("cannot create thumbnail for", infile)
            
