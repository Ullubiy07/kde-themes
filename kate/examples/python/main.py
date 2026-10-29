"Python — a desktop widget with a configurable accent."

class Widget:
    def __init__(self, title: str, accent: str = "#89b4fa"):
        self.title = title
        self.accent = accent
        self.visible = True

    def toggle(self) -> None:
        # Show or hide the widget.
        self.visible = not self.visible

    def rename(self, title: str) -> None:
        if not title.strip():
            raise ValueError("Title cannot be empty")
        self.title = title

    def render(self) -> str:
        state = "visible" if self.visible else "hidden"
        return f"{self.title} · {self.accent} · {state}"


clock = Widget("Clock")
clock.rename("World Clock")
print(clock.render())
