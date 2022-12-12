#!/usr/bin/env python3
# Created by: Emmanuel Fofeyin
# Created on: Dec 2022
# This program finds the perimeter of a octagon


def perimeter_calculation(length):
    # This function calculates the perimeter of a pentagon
    if length < 0:
        return (-1)
    else:
        perimeter = length * 8

    return perimeter


def main():
    # This function gets length

    length_as_string = input("Enter Octagon side length (cm): ")

    try:
        length_as_int = int(length_as_string)
        # Call function
        final_perimeter = perimeter_calculation(length_as_int)
        if final_perimeter == -1:
            print("\nPlease input a positive number.")
        else:
            print(
                "\nThe perimeter of a octagon with the side lengths of {0} cm is {1} cm.".format(
                    length_as_int, final_perimeter
                )
            )
    except Exception:
        print("\nInvalid Input.")

    print("\nDone.")


if __name__ == "__main__":
    main()