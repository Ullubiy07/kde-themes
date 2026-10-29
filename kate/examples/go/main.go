// Go — a small desktop widget.
package main

import "fmt"

type Widget struct {
    Title   string
    Accent  string
    Visible bool
}

func NewWidget(title string) *Widget {
    return &Widget{
        Title: title, Accent: "#89b4fa", Visible: true,
    }
}

func (w *Widget) Toggle() {
    w.Visible = !w.Visible
}

func (w Widget) String() string {
    return fmt.Sprintf("%s · %s", w.Title, w.Accent)
}

func main() {
    clock := NewWidget("World Clock")
    clock.Toggle()
    fmt.Println(clock)
}
