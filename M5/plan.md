# Plan: Survive the Night — Blackwood Motel

## Story

At 11:47 PM, a traveler becomes stranded during a storm and seeks shelter at the abandoned Blackwood Motel. The clerk knows more than he admits, a mysterious figure waits outside, and the traveler discovers that guests sometimes check in but never leave. The player must make choices to escape before sunrise or risk becoming another permanent guest.

## Story Map

main_menu
- 1 -> choice_window
  - 1 -> choice_clerk
    - 1 -> choice_back_door
    - 2 -> choice_basement
  - 2 -> choice_basement
- 2 -> choice_reception
  - 1 -> choice_clerk
  - 2 -> choice_basement
- 3 -> choice_go_home
- 4 -> quit

choice_back_door
- 1 -> choice_road
- 2 -> choice_basement

choice_basement
- 1 -> choice_road
- 2 -> ending_motel

choice_road
- 1 -> ending_escape
- 2 -> ending_motel

## Functions

- `main_menu` — displays the opening scene and first choices
- `choice_window` — investigates the mysterious figure
- `choice_reception` — hides behind the reception desk
- `choice_clerk` — questions the mysterious clerk
- `choice_back_door` — attempts to escape through the back door
- `choice_basement` — investigates the basement
- `choice_road` — reaches the car and chooses what to do
- `ending_escape` — the player escapes the motel
- `ending_motel` — the player becomes trapped at the motel
- `choice_go_home` — the player leaves the motel
