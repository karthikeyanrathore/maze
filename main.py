#!/usr/bin/env python3
import argparse
from PIL import Image
from maze import Maze


def fun(image_in , image_out):
  img = Image.open(image_in)
  maze = Maze(img , image_out)
  #maze._print()
  maze._color()


if __name__ == "__main__":
  parser = argparse.ArgumentParser()
  parser.add_argument("image_in")
  parser.add_argument("image_out")
  args = parser.parse_args()

  fun(args.image_in , args.image_out)


