import numpy as np
import cv2
import argparse

def normalize(img):
    new_img = (img - img.min()) / (img.max() - img.min()) * 255.0
    return new_img

def haar_wavelet_transform(img, depth=1):
    """
    IMPLEMENT THIS FUNCTION
    """
    new_img = np.copy(img)

    return new_img


def main(args):
    image = cv2.imread(args.input, cv2.IMREAD_GRAYSCALE).astype(np.float32)
    transformed_image = haar_wavelet_transform(image, depth=args.depth)
    cv2.imwrite(args.output, transformed_image)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--input', type=str, required=True, help='input image path')
    parser.add_argument('--output', type=str, required=True, help='output image path')
    parser.add_argument('--depth', type=int, required=True, help='depth of Haar wavelet transform')
    args = parser.parse_args()
    main(args)