# The Maze Project 👨‍🎓 
A first-person 3D maze game made with SDL2 and C, playable on Mac OS X and Linux/Ubuntu, using raycasting for 3D maze creation, developed on Ubuntu 24.00 LTS with gcc.

## About SDL2 💻
SDL2 is a cross-platform development library for multimedia hardware, simplifying game and multimedia development with a consistent API.

## Usage
- **Installation**: `sudo apt-get install libsdl2-2.0-0`
- **Clone Repo**: `git clone https://github.com/kamoellen/Maze-C.git`
- **Build**: `make`
- **Run Game**: `./maze maps/maze`
- **Controls**: Use arrow keys to navigate.

## Gameplay
Find the end of the maze by navigating through it. Arrow keys move and rotate the player. Map file characters dictate the maze layout.

## Flowchart
![The Maze Flow Chart](https://i.imgur.com/t0MxNni.png)

## References
- [Lazyfoo SDL Tutorials](http://lazyfoo.net/tutorials/SDL/index.php#Event%20Driven%20Programming)
- [3DSage OpenGL Raycaster](https://www.youtube.com/watch?v=gYRrGTC7GtA)

## Acknowledgements 🙏
This project was completed as part of the curriculum for _Alx-Africa_, a full-stack software engineering program. Thanks to ALX staff, Cohort 18, and all testers!

**Map File Characters' in Game Meanings**
- **0**: Floor/walkable space
- **2**: Red Wall
- **1**: Green Wall
- **3**: Blue Wall
- **4**: Yellow Wall
- **w**: End goal
- **p**: Player start position
- All other characters will be defaulted to white walls

  idea for maze
  2222222222222222
20000000000000002
 20p00000000000002
  20000002200000002
   20000022000000002
    20000000000000002
     2222222222222002
                 2002
                  2002
                   2002
                    20021111111101
                     200000000001
                      20011111111
                       2002
                        2002
                         2002
                          1111
                           11

  idea for presentation
  44444444444444444444444444
40000000000000000000000004
40p00000000000000000000004
40000000000000000000000004
44444444443031111111111114
          303
          303
          303
          303333333333333333333
          300000000000000000004
          333333333333333333304
4444444444444444444444444444404444444444444444444444444444444444444
4000000000000000000000000000000000000000000400000000000000000000004
4044444444444444444444444444444444444444440404444444444444444444444
400000000



