//main.cpp
#include <M5Unified.h>

void setup() {
    // Initialize M5Unified without external_spiram
    auto cfg = M5.config();
    // cfg.external_spiram = true; // Removed because this member doesn't exist in config_t
    M5.begin(cfg);

    // Initialize display
    M5.Display.begin();
    M5.Display.setBrightness(50); // Set display brightness (0-255)

    // Clear screen with white color
    M5.Display.fillScreen(TFT_WHITE);

    // Configure text settings
    M5.Display.setTextSize(3);
    M5.Display.setTextColor(TFT_BLACK, TFT_WHITE);

    // Display "Hello, World!" text in the center of screen
    M5.Display.drawCenterString("Hello, World!", M5.Display.width() / 2, M5.Display.height() / 2, 3);

    // Update display
    M5.Display.display();
}

void loop() {
    // Do nothing
}