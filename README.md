An Automatic License Plate Recognition System
Adapted from the book - "Mastering opencv with practical computer vision projects"
Two important steps: plate localization and plate recognition. 
The first step is to segment an image looking for patches where we can have a plate, using a simple heuristics and Support Vector Machine algorithm to make a binary classification for patches with plates and no plates.
The second step involves character segmentation with the Find Contours algorithm, extract feature vector from each character, and use an Artificial Neural Network to classify each feature in a character class. 
