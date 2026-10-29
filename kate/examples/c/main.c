/* C — a desktop widget and its small public interface. */
#include <stdbool.h>
#include <stdio.h>

typedef struct {
    const char *title;
    const char *accent;
    bool visible;
} Widget;

static void widget_toggle(Widget *widget) {
    widget->visible = !widget->visible;
}

static void widget_render(const Widget *widget) {
    const char *state = widget->visible ? "visible" : "hidden";
    printf("%s · %s · %s\n", widget->title, widget->accent, state);
}

int main(void) {
    Widget clock = {
        .title = "World Clock",
        .accent = "#89b4fa",
        .visible = true,
    };
    widget_toggle(&clock);
    widget_render(&clock);
    return 0;
}
