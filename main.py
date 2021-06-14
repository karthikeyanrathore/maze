#!/usr/bin/env python3
import argparse
from PIL import Image
from maze import Maze


def fun(image_in):
  img = Image.open(image_in)
  maze = Maze(img)
  maze._create()


if __name__ == "__main__":
  parser = argparse.ArgumentParser()
  parser.add_argument("image_in")
  args = parser.parse_args()

  fun(args.image_in)


