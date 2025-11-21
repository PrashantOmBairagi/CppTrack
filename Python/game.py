import pygame
import math
import sys

# Initialize pygame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Shining Red Heart")

# Colors

BLACK = (0, 0, 0)
RED = (255, 0, 0)
def gradient_color(start_color, end_color, factor):
    """
    Interpolates between two colors.
    Args:
        start_color: The starting color (R, G, B).
        end_color: The ending color (R, G, B).
        factor: A value between 0 and 1 indicating the blend ratio.
    Returns:
        A tuple representing the interpolated color.
    """
    return tuple(
        int(start_color[i] + (end_color[i] - start_color[i]) * factor)
        for i in range(3)
    )


# Heart function
def draw_heart(surface, start_color, end_color, x, y, size, alpha):
    points = []
    """
    Draws a solid heart shape with a gradient color.
    Args:
        surface: The surface to draw on.
        start_color: The starting color of the gradient.
        end_color: The ending color of the gradient.
        x, y: The center of the heart.
        size: The size of the heart.
        alpha: Transparency level (applies to the entire heart).
    """
    # Create a new surface for the heart with alpha transparency
    heart_surface = pygame.Surface((WIDTH, HEIGHT), pygame.SRCALPHA)

    # Calculate heart points and fill with gradient
    for angle in range(360):
        angle_rad = math.radians(angle)
        x_offset = size * (16 * math.sin(angle_rad)**3)
        y_offset = -size * (13 * math.cos(angle_rad) - 5 * math.cos(2 * angle_rad)
                            - 2 * math.cos(3 * angle_rad) - math.cos(4 * angle_rad))
        px, py = x + x_offset, y + y_offset

        # Calculate gradient factor (based on height within the heart)
        factor = (py - (y - size * 13)) / (size * 26)
        factor = max(0, min(1, factor))  # Clamp factor between 0 and 1

        # Interpolate the color for this point
        color = gradient_color(start_color, end_color, factor)

        # Draw a solid polygon by filling the surface
        pygame.draw.circle(heart_surface, (*color, alpha), (int(px), int(py)), 2)

    # Blit the heart onto the main surface
    surface.blit(heart_surface, (0, 0))

    
    # Create a new surface for the heart
    heart_surface = pygame.Surface((WIDTH, HEIGHT), pygame.SRCALPHA)

    # Draw gradient on the heart
    for i, (px, py) in enumerate(points):
        # Calculate gradient factor (top to bottom of the heart)
        factor = (py - (y - size * 13)) / (size * 26)
        factor = max(0, min(1, factor))  # Clamp factor between 0 and 1
        color = gradient_color(start_color, end_color, factor)
        pygame.draw.circle(heart_surface, (*color, alpha), (int(px), int(py)), 1)

    surface.blit(heart_surface, (0, 0))


# Main loop
clock = pygame.time.Clock()
alpha_values = list(range(50, 256, 10)) + list(range(255, 49, -10))  # Create a pulsing effect
alpha_index = 0

running = True
while running:
    screen.fill(BLACK)

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
       # Define gradient colors
    start_color = (255, 100, 100)  # Light red
    end_color = (150, 0, 0)        # Dark red

    # Draw the heart with gradient effect
    alpha = alpha_values[alpha_index]
    draw_heart(screen, start_color, end_color, WIDTH // 2, HEIGHT // 2, 10, alpha)
    alpha_index = (alpha_index + 1) % len(alpha_values)

    pygame.display.flip()
    clock.tick(30)
   
pygame.quit()
sys.exit()
