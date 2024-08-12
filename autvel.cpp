// Example usage in image processing or graphics programming
// Assume we are discussing pixel manipulation or color blending

// Function to blend a color with pure black or white
Color blendWithBlackOrWhite(Color inputColor) {
    Color result;

    if (inputColor.isDark()) {
        result = blend(inputColor, Color::BLACK); // Blend with pure black
    } else {
        result = blend(inputColor, Color::WHITE); // Blend with pure white
    }

    return result;
}
