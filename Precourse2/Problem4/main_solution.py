import numpy as np
import cv2
import pickle

def load_image(file_path):
    image = np.load(file_path)
    return image

def apply_convolution(images, kernel, stride=1, padding=0):
    '''
    Implement 2D Convolution Using Numpy
    =================================================================================================
    Arguments:
        + images: np.array of shape (B, input_H, input_W)
        + kernel: np.array of shape (kernel_H, kernel_W)
        + stride: integer
        + padding: integer
    Outputs:
        + output_images: np.array of shape (B, input_H, input_W)
    '''
    ### TODO: fill in here ###
    # Get input dimensions
    num_images, input_height, input_width = images.shape
    kernel_height, kernel_width = kernel.shape

    # Calculate output dimensions
    output_height = (input_height - kernel_height + 2 * padding) // stride + 1
    output_width = (input_width - kernel_width + 2 * padding) // stride + 1

    # Add padding to the input batch
    padded_images = np.pad(images, ((0, 0), (padding, padding), (padding, padding)), mode='constant')

    # Initialize the output batch
    output_images = np.zeros((num_images, output_height, output_width))

    # Perform convolution with stride and padding for each image in the batch
    for k in range(num_images):
        for i in range(0, output_height):
            for j in range(0, output_width):
                output_images[k, i, j] = np.sum(
                    padded_images[k, i * stride:i * stride + kernel_height, j * stride:j * stride + kernel_width] * kernel
                )

    return output_images


if __name__ == "__main__":

    input_file_path = "input_image.npy"

    input_images = load_image(input_file_path)
    num_images = input_images.shape[0]


    # Sobel filter
    sobel_x = np.array([[-1, 0, 1], [-2, 0, 2], [-1, 0, 1]])
    sobel_y = np.array([[-1, -2, -1], [0, 0, 0], [1, 2, 1]])

    result_x = apply_convolution(input_images, sobel_x, stride=1, padding=1)
    result_y = apply_convolution(input_images, sobel_y, stride=1, padding=1)

    # Combine the results
    result = np.sqrt(result_x**2 + result_y**2)
    
    '''
    =================================================================================================
    Save and submit a portion of the processed 32 images. 
    You are free to choose any number of images (recommend 4~8)."
    '''
    output_file_path = "output_image.npy"
    np.save(output_file_path, result)
    # skip visualize part



