#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

int main(void) {
    using namespace ftxui;

    // to setup a frame, create an Element
    // and display it on a Screen

    // define Element document
    Element document =
        hbox({
            text("left")    | border,
            text("middle")  | border | flex,
            text("right")   | border,
        });

    auto screen = Screen::Create(
        Dimension::Full(),      // Width
        Dimension::Fit(document)    // Height
    );

    Render(screen, document);
    screen.Print();

    return EXIT_SUCCESS;
}
