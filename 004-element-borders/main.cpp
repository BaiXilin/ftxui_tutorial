#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>

int main(void) {
    using namespace ftxui;

    Element document =
        vbox({
            text("The window") | bold | color(Color::Blue),
            gauge(0.5),
            text("The footer"),
        });

    // add a border
    document = border(document);

    // add another border
    document = document | border;

    // add another border
    document |= border;

    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(document)
    );

    Render(screen, document);
    screen.Print();

    return EXIT_SUCCESS;
}
