// C++ — a desktop widget with a configurable accent.
#include <iostream>
#include <string>

class Widget {
public:
    explicit Widget(std::string title) : title_(title) {}

    void toggle() noexcept {
        visible_ = !visible_;
    }

    void render() const {
        const auto state = visible_ ? "visible" : "hidden";
        std::cout << title_ << " · " << accent_ << " · "
                  << state << '\n';
    }

private:
    std::string title_;
    std::string accent_ = "#89b4fa";
    bool visible_ = true;
};

int main() {
    Widget clock{"World Clock"};
    clock.toggle();
    clock.render();
}
