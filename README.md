<p align="center">
    <img src="assets/tomo-logo.png" width="350" /></p>
    <h1 align="center">Tomo</h1>
    <p align="center">Your Emotional Pet Companion</p>
</p>

![PlatformIO CI](https://github.com/nthnn/tomo/actions/workflows/platformio-ci.yml/badge.svg)

<img src="assets/tomo-board.png" align="right" width="250" />

> An AI-like handheld interactable full of emotion companion pet made with ESP32 NodeMCU via Arduino Platform.

Tomo is an interactive handheld companion pet crafted using ESP32 NodeMCU and developed on the Arduino platform. This project aims to create a small, emotionally expressive device with a 0.96-inch monochromatic OLED display serving as its facial interface, and a momentary button for user interaction. The name "Tomo" is inspired by the Japanese character "友," which translates to "friend" or "companion," reflecting the nature of this delightful creation.

Tomo embodies the essence of companionship in a compact and accessible form factor, offering users a unique blend of technology and emotional connection. Its minimalist design and intuitive interaction model make it suitable for various applications, from personal entertainment to educational tools.

> [!NOTE]
> Tomo is a project developed for educational and recreational purposes. It is not a substitute for professional mental health support or therapy.

## Why Tomo?

- **Emotive Expressions**: Tomo boasts a range of facial animations displayed on its 0.96-inch OLED screen, allowing it to convey emotions and engage users in interactive experiences.

- **Interaction**: Users can interact with Tomo through a simple momentary button interface, enabling them to engage with its various expressions and behaviors.

## Getting Started

To get started with Tomo, follow these steps:

1. Download Tomo from this [link](https://github.com/nthnn/tomo) or clone the repository with the following command:

```bash
git clone https://github.com/nthnn/tomo --depth 1
```

2. Acquire a compatible board either from my website's [shop](https://nthnn.github.io/shop.html) or alternatively, you can fabricate your own board using the provided PCB gerber files and schematics located in the [pcb](pcb) directory.
3. Open the downloaded project repository using [PlatformIO](https://platformio.org/) extension on VS Code.
4. Connect your ESP32 NodeMCU board with the Tomo PCB shield securely plugged in.
5. Upload the Tomo firmware via PlatformIO.
6. Your Tomo is now ready!

## PCB Shield-style Design

| Board Front Design                    | Board Back Design                   |
|---------------------------------------|-------------------------------------|
| ![Front](assets/tomo-board-front.svg) | ![Back](assets/tomo-board-back.svg) |

## Schematic Diagram

You can get the printable PDF version of schematic diagram [here](pcb/tomo-schematic-diagram.pdf).

<p align="center">
    <img alt="Tomo Schematic Diagram" src="pcb/tomo-schematic-diagram.png" />
</p>

## License

```
Copyright 2024 - Nathanne Isip

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the “Software”), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify,
merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
```