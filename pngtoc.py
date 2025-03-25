from PIL import Image
import numpy as np

# Target size for the sprite (adjust as needed)
SPRITE_WIDTH = 17
SPRITE_HEIGHT = 30

# Bit depths for pixel_rgb_t
R_BITS = 5
G_BITS = 6
B_BITS = 5

# Maximum values for each channel
R_MAX = (1 << R_BITS) - 1  # 31
G_MAX = (1 << G_BITS) - 1  # 63
B_MAX = (1 << B_BITS) - 1  # 31

def convert_to_pixel_rgb_t(r, g, b, a):
    """Convert 8-bit RGBA to pixel_rgb_t format (r:5, g:6, b:5)."""
    # If pixel is fully transparent, use black (or skip it)
    if a == 0:
        return (0, 0, 0)
    # Scale 0-255 to respective bit depths
    r_scaled = int((r / 255.0) * R_MAX)
    g_scaled = int((g / 255.0) * G_MAX)
    b_scaled = int((b / 255.0) * B_MAX)
    return (r_scaled, g_scaled, b_scaled)

def png_to_array(png_path, output_name="slugfox_sprite"):
    """Convert PNG to a C-compatible array for draw_character."""
    # Open and convert image
    img = Image.open(png_path).convert("RGBA")
    # Resize to target dimensions
    img = img.resize((SPRITE_WIDTH, SPRITE_HEIGHT), Image.Resampling.NEAREST)
    # Get pixel data as numpy array
    pixels = np.array(img)

    # Array to hold pixel_rgb_t values
    sprite_data = []
    for y in range(SPRITE_HEIGHT):
        row = []
        for x in range(SPRITE_WIDTH):
            r, g, b, a = pixels[y, x]
            rgb_t = convert_to_pixel_rgb_t(r, g, b, a)
            row.append(rgb_t)
        sprite_data.append(row)

    # Generate C code
    c_array = f"pixel_rgb_t {output_name}[{SPRITE_HEIGHT}][{SPRITE_WIDTH}] = {{\n"
    for y in range(SPRITE_HEIGHT):
        c_array += "    {"
        for x in range(SPRITE_WIDTH):
            r, g, b = sprite_data[y][x]
            c_array += f"{{{b}, {g}, {r}}}"
            if x < SPRITE_WIDTH - 1:
                c_array += ", "
        c_array += "}"
        if y < SPRITE_HEIGHT - 1:
            c_array += ",\n"
        else:
            c_array += "\n"
    c_array += "};\n"

    return c_array

def main():
    # Replace with your PNG file path
    png_path = "_char/static_left_3.png"
    output_name = "slugfox_sprite"
    
    # Generate the array
    c_code = png_to_array(png_path, output_name)
    
    # Print to console (you can also write to a file)
    print(c_code)
    
    # Optionally save to a header file
    with open("slugfox_sprite.h", "w") as f:
        f.write("#ifndef SLUGFOX_SPRITE_H\n")
        f.write("#define SLUGFOX_SPRITE_H\n\n")
        f.write("typedef struct { short b:5, g:6, r:5; } pixel_rgb_t;\n\n")
        f.write(c_code)
        f.write("\n#endif\n")

if __name__ == "__main__":
    main()