const unsigned int sirenSampleRate = 22050;
const unsigned int sirenSampleCount = 6749;
const signed char sirenSamples[] = {
9, 9, -2, -9, -8, -1, 17, 29, 35, 30, 18, 3, -7, -7, -7, -7, 
-7, -17, -23, -21, -11, 1, 10, 18, 17, 7, -4, -9, -7, 4, 12, 17, 
15, 7, -8, -10, -8, -7, -6, -4, -8, -15, -18, -13, -2, 8, 17, 17, 
8, -4, -11, -5, 1, 5, 9, 10, 3, -11, -13, -10, -6, -3, -2, -6, 
-11, -13, -8, 2, 19, 21, 17, 8, -7, -20, -17, -10, -4, -1, 0, -2, 
-10, -8, 1, 12, 17, 16, 12, 1, -8, -8, 1, 14, 13, 7, -4, -18, 
-31, -34, -25, -19, -16, -11, -7, -9, -7, 2, 15, 24, 26, 23, 14, 4, 
1, 5, 18, 20, 15, 6, -6, -26, -31, -25, -15, -10, -8, -6, -7, -5, 
2, 16, 26, 23, 14, 1, -10, -16, -6, 8, 13, 11, 6, 0, -11, -17, 
-10, -2, 2, -2, -4, -5, -4, 2, 13, 24, 19, 8, -3, -14, -23, -17, 
-5, 5, 9, 7, 4, 3, 3, 5, 13, 19, 13, 4, -2, -3, -2, 3, 
8, -1, -16, -30, -39, -42, -39, -27, -10, 2, 7, 16, 20, 27, 35, 42, 
45, 33, 20, 11, 5, 2, -1, -1, -6, -19, -35, -44, -49, -50, -46, -36, 
-23, -13, -2, 7, 19, 32, 45, 55, 52, 41, 30, 24, 21, 15, 11, 4, 
-9, -27, -42, -50, -48, -47, -44, -35, -25, -18, -8, 4, 16, 24, 37, 37, 
31, 25, 23, 26, 32, 29, 27, 21, 7, -18, -31, -38, -42, -48, -51, -50, 
-46, -35, -20, -5, 10, 21, 31, 35, 34, 34, 36, 40, 41, 38, 33, 26, 
2, -12, -22, -30, -37, -44, -53, -56, -53, -44, -29, -10, -6, 0, 8, 15, 
23, 35, 44, 50, 53, 52, 46, 40, 27, 11, -4, -19, -43, -57, -68, -73, 
-71, -62, -37, -21, -11, -4, 8, 28, 35, 40, 46, 52, 54, 52, 46, 40, 
34, 24, 11, -12, -27, -41, -52, -59, -59, -55, -46, -37, -30, -25, -9, 8, 
24, 35, 44, 51, 58, 62, 60, 57, 49, 27, 10, -9, -26, -39, -50, -59, 
-58, -53, -47, -40, -34, -23, -16, -6, 5, 15, 28, 35, 41, 51, 60, 63, 
60, 50, 35, 17, -1, -15, -34, -45, -54, -56, -58, -58, -53, -46, -37, -25, 
-12, 8, 22, 34, 45, 55, 65, 72, 69, 59, 43, 25, 1, -12, -23, -38, 
-52, -55, -54, -55, -56, -52, -46, -37, -22, -10, 2, 17, 32, 51, 61, 69, 
72, 69, 61, 38, 23, 10, -3, -17, -35, -55, -58, -60, -62, -64, -57, -48, 
-37, -22, -7, 8, 34, 48, 57, 66, 71, 67, 61, 50, 35, 19, 6, -13, 
-25, -39, -47, -50, -54, -61, -63, -60, -52, -40, -22, -10, 5, 22, 39, 54, 
71, 76, 73, 65, 56, 44, 23, 11, -3, -20, -39, -57, -62, -63, -63, -62, 
-58, -49, -40, -28, -15, 3, 25, 53, 63, 69, 70, 68, 60, 52, 39, 26, 
14, 0, -21, -37, -48, -53, -58, -63, -69, -66, -55, -41, -27, -8, 6, 23, 
41, 54, 64, 74, 74, 70, 59, 46, 33, 12, -1, -16, -32, -47, -60, -64, 
-69, -71, -66, -57, -39, -27, -12, 4, 22, 40, 57, 63, 66, 66, 64, 56, 
49, 39, 27, 12, -2, -29, -45, -55, -63, -70, -77, -77, -69, -56, -40, -22, 
6, 25, 45, 57, 64, 70, 74, 70, 61, 47, 33, 21, 9, -1, -11, -26, 
-44, -66, -76, -82, -80, -68, -50, -26, -16, -8, 2, 15, 38, 53, 68, 79, 
81, 74, 51, 35, 24, 15, 6, -3, -25, -43, -60, -75, -86, -91, -79, -57, 
-36, -20, -6, 11, 21, 33, 43, 56, 70, 80, 73, 60, 43, 27, 13, 7, 
0, -7, -19, -34, -59, -72, -82, -86, -78, -61, -34, -22, -12, -1, 10, 28, 
45, 64, 79, 89, 86, 67, 51, 35, 23, 12, 2, -13, -25, -42, -60, -75, 
-89, -86, -72, -53, -37, -25, -10, 0, 7, 18, 34, 52, 79, 85, 81, 72, 
59, 38, 28, 20, 11, 3, -9, -35, -55, -73, -84, -87, -81, -57, -42, -33, 
-23, -13, -3, 8, 27, 51, 68, 78, 78, 71, 61, 50, 40, 33, 25, 16, 
3, -14, -36, -68, -80, -87, -84, -73, -61, -45, -36, -25, -14, -4, 13, 49, 
67, 77, 79, 73, 58, 45, 37, 35, 31, 25, 10, -7, -27, -47, -62, -72, 
-73, -69, -60, -53, -50, -42, -34, -24, -5, 20, 44, 65, 73, 75, 70, 61, 
50, 49, 47, 41, 30, 12, -21, -46, -64, -74, -77, -75, -64, -57, -53, -50, 
-43, -24, -7, 17, 42, 56, 62, 67, 62, 53, 48, 47, 49, 47, 39, 27, 
9, -14, -45, -57, -64, -68, -68, -65, -64, -65, -60, -50, -34, -15, 21, 43, 
57, 64, 67, 66, 59, 60, 64, 62, 57, 38, 18, -6, -30, -48, -57, -62, 
-66, -66, -64, -65, -66, -58, -43, -28, -7, 17, 42, 51, 55, 58, 57, 55, 
64, 70, 70, 63, 49, 18, -7, -29, -43, -52, -58, -66, -70, -72, -76, -76, 
-66, -43, -25, -3, 19, 37, 50, 55, 59, 58, 58, 63, 70, 67, 60, 47, 
28, 5, -26, -39, -47, -54, -60, -67, -71, -77, -76, -66, -51, -25, -4, 17, 
30, 36, 47, 51, 57, 65, 74, 81, 74, 60, 44, 22, -1, -16, -32, -40, 
-50, -61, -72, -83, -88, -82, -66, -48, -29, 2, 20, 30, 33, 38, 49, 62, 
71, 80, 82, 75, 53, 36, 17, -1, -14, -19, -29, -44, -58, -73, -83, -86, 
-79, -66, -52, -38, -23, 3, 14, 21, 32, 49, 66, 82, 92, 92, 82, 67, 
51, 26, 5, -10, -21, -32, -55, -73, -86, -92, -90, -80, -55, -39, -24, -15, 
-6, 4, 10, 20, 38, 57, 73, 86, 85, 76, 59, 45, 36, 18, 8, 2, 
-8, -23, -46, -79, -92, -99, -95, -81, -55, -37, -23, -11, 1, 8, 17, 31, 
52, 73, 85, 92, 88, 73, 56, 40, 26, 5, -3, -8, -17, -34, -54, -77, 
-86, -88, -83, -72, -55, -36, -23, -11, 0, 8, 20, 39, 60, 74, 85, 91, 
88, 75, 61, 48, 30, 4, -8, -19, -34, -51, -67, -84, -89, -90, -82, -71, 
-59, -33, -16, 2, 17, 24, 40, 55, 68, 74, 78, 84, 81, 71, 58, 41, 
18, -4, -26, -35, -45, -55, -64, -72, -77, -81, -81, -76, -64, -39, -17, 7, 
23, 33, 42, 57, 65, 68, 75, 86, 91, 84, 70, 48, 19, -12, -42, -51, 
-58, -65, -68, -71, -79, -83, -85, -79, -64, -32, -6, 20, 39, 46, 49, 56, 
59, 64, 70, 80, 88, 78, 63, 43, 15, -14, -39, -47, -58, -61, -61, -67, 
-73, -80, -83, -78, -64, -45, -9, 17, 35, 44, 51, 56, 58, 60, 64, 74, 
83, 75, 62, 45, 21, -6, -27, -44, -54, -62, -62, -63, -70, -74, -78, -76, 
-67, -53, -21, 5, 31, 44, 51, 60, 59, 61, 63, 67, 76, 71, 62, 54, 
35, 7, -19, -39, -52, -62, -60, -57, -62, -68, -75, -78, -72, -63, -36, -10, 
15, 34, 49, 60, 64, 64, 64, 65, 72, 78, 70, 62, 47, 24, -4, -37, 
-50, -61, -65, -63, -63, -64, -69, -73, -71, -64, -47, -27, 1, 28, 45, 57, 
62, 60, 61, 60, 65, 71, 68, 66, 62, 49, 23, -16, -35, -54, -65, -64, 
-63, -71, -74, -77, -77, -74, -68, -47, -22, 8, 35, 58, 75, 71, 68, 64, 
61, 65, 69, 63, 57, 52, 36, 11, -26, -46, -62, -68, -69, -63, -65, -68, 
-68, -70, -69, -59, -44, -18, 8, 32, 53, 66, 67, 65, 61, 61, 67, 68, 
66, 64, 55, 36, 0, -23, -46, -63, -71, -73, -66, -66, -69, -70, -69, -62, 
-55, -39, -16, 6, 28, 57, 64, 62, 60, 55, 53, 58, 59, 61, 61, 56, 
37, 20, -3, -31, -50, -61, -66, -62, -60, -64, -70, -70, -70, -67, -53, -32, 
-8, 27, 48, 60, 63, 58, 54, 57, 61, 65, 70, 72, 59, 45, 28, 6, 
-21, -43, -60, -61, -60, -58, -60, -61, -65, -69, -66, -58, -43, -10, 14, 36, 
50, 53, 50, 49, 51, 52, 58, 67, 73, 68, 56, 42, 23, -4, -39, -51, 
-53, -53, -55, -56, -62, -66, -70, -72, -68, -59, -31, -7, 19, 41, 51, 52, 
49, 48, 53, 59, 64, 72, 72, 64, 49, 33, 15, -22, -42, -52, -55, -56, 
-54, -55, -59, -65, -70, -71, -61, -48, -29, -8, 17, 38, 49, 50, 49, 51, 
53, 59, 67, 72, 72, 64, 49, 26, 3, -21, -40, -53, -59, -58, -56, -55, 
-56, -57, -62, -64, -59, -48, -32, -12, 22, 38, 44, 45, 45, 46, 48, 50, 
62, 73, 76, 67, 53, 37, 16, -8, -30, -52, -59, -61, -58, -54, -57, -61, 
-65, -69, -66, -55, -28, -8, 12, 34, 46, 49, 50, 48, 45, 45, 53, 68, 
69, 64, 55, 43, 29, -5, -26, -41, -50, -55, -54, -47, -47, -52, -60, -66, 
-67, -61, -47, -31, -10, 13, 37, 44, 46, 48, 49, 48, 60, 71, 77, 73, 
64, 51, 36, 13, -13, -34, -48, -57, -57, -51, -48, -53, -61, -65, -66, -66, 
-59, -43, -14, 8, 27, 40, 47, 50, 51, 51, 56, 64, 71, 71, 65, 61, 
51, 34, 8, -26, -41, -52, -58, -56, -50, -51, -58, -64, -65, -67, -67, -52, 
-34, -14, 8, 30, 46, 49, 48, 48, 50, 54, 62, 65, 67, 65, 64, 58, 
26, 0, -20, -35, -46, -52, -52, -51, -56, -66, -71, -76, -78, -72, -56, -33, 
-12, 23, 39, 47, 50, 49, 51, 53, 58, 61, 63, 65, 65, 59, 45, 22, 
-2, -28, -39, -46, -47, -45, -46, -58, -65, -70, -75, -79, -76, -50, -30, -9, 
12, 30, 41, 43, 46, 49, 52, 55, 61, 70, 76, 77, 70, 55, 22, 0, 
-18, -32, -41, -50, -52, -56, -63, -70, -75, -80, -82, -73, -54, -33, -12, 17, 
31, 40, 46, 49, 56, 53, 53, 59, 66, 73, 75, 64, 49, 31, 8, -10, 
-27, -37, -45, -49, -52, -63, -69, -74, -79, -80, -74, -52, -32, -14, 5, 22, 
33, 42, 49, 53, 54, 57, 67, 77, 81, 79, 71, 55, 28, 4, -13, -24, 
-33, -42, -51, -55, -62, -68, -75, -82, -81, -76, -62, -42, -22, 7, 24, 38, 
44, 46, 47, 49, 55, 64, 71, 76, 77, 67, 54, 37, 18, 0, -19, -27, 
-35, -43, -47, -53, -66, -75, -78, -78, -77, -65, -50, -33, -16, -1, 13, 29, 
33, 37, 45, 54, 71, 77, 82, 85, 80, 69, 47, 29, 11, -6, -18, -28, 
-42, -50, -56, -63, -72, -83, -83, -80, -74, -63, -46, -19, -5, 8, 19, 27, 
32, 40, 51, 63, 69, 75, 82, 77, 69, 57, 43, 28, 7, -4, -11, -19, 
-28, -40, -58, -69, -78, -84, -89, -84, -74, -61, -44, -26, -9, 11, 24, 35, 
41, 46, 53, 63, 70, 74, 75, 74, 66, 57, 45, 32, 16, 0, -14, -24, 
-36, -46, -55, -62, -72, -76, -77, -76, -71, -59, -49, -35, -23, -10, 4, 26, 
39, 50, 57, 65, 72, 70, 70, 68, 64, 60, 54, 48, 38, 23, 4, -11, 
-35, -51, -62, -69, -75, -76, -69, -67, -63, -59, -57, -51, -43, -30, -13, 4, 
26, 54, 65, 73, 75, 75, 70, 67, 66, 62, 60, 55, 42, 29, 9, -9, 
-23, -40, -60, -67, -68, -68, -65, -57, -56, -59, -60, -60, -55, -39, -23, -5, 
14, 34, 49, 63, 68, 68, 68, 65, 63, 63, 63, 65, 62, 52, 27, 4, 
-17, -34, -52, -67, -75, -73, -68, -60, -50, -46, -52, -55, -58, -58, -49, -24, 
-5, 16, 36, 50, 56, 66, 65, 64, 63, 63, 66, 66, 66, 64, 56, 41, 
2, -18, -33, -50, -63, -70, -72, -71, -65, -59, -57, -60, -62, -63, -60, -49, 
-31, 3, 22, 39, 54, 61, 65, 66, 65, 64, 64, 66, 67, 69, 67, 55, 
38, 16, -22, -37, -50, -62, -66, -67, -67, -64, -60, -58, -60, -62, -61, -58, 
-49, -31, -7, 25, 42, 53, 58, 62, 65, 62, 62, 62, 63, 62, 62, 62, 
56, 43, 24, 1, -29, -42, -56, -63, -64, -67, -66, -61, -57, -57, -56, -56, 
-59, -53, -38, -18, 5, 33, 50, 61, 66, 68, 65, 61, 56, 54, 53, 53, 
59, 54, 44, 28, 6, -15, -40, -54, -65, -69, -71, -68, -64, -59, -57, -54, 
-48, -49, -47, -37, -19, 4, 27, 54, 69, 76, 76, 71, 63, 55, 47, 43, 
43, 44, 44, 36, 22, 0, -25, -43, -63, -70, -69, -66, -60, -50, -49, -49, 
-49, -51, -52, -48, -36, -18, 8, 38, 59, 78, 86, 84, 70, 55, 38, 30, 
26, 29, 35, 37, 34, 23, 6, -14, -34, -47, -60, -61, -57, -51, -44, -39, 
-43, -47, -47, -46, -45, -31, -18, -3, 15, 33, 46, 60, 64, 62, 56, 46, 
39, 40, 39, 38, 37, 35, 25, 13, 1, -13, -28, -39, -51, -50, -43, -36, 
-33, -37, -46, -55, -58, -53, -46, -30, -14, -1, 12, 25, 38, 50, 49, 48, 
45, 38, 35, 38, 40, 41, 40, 38, 28, 19, 7, -8, -25, -46, -55, -52, 
-41, -29, -20, -19, -25, -35, -47, -53, -53, -45, -34, -22, -4, 14, 43, 57, 
59, 56, 52, 48, 41, 39, 39, 41, 41, 38, 32, 26, 17, 5, -10, -33, 
-48, -55, -54, -47, -42, -44, -43, -45, -50, -53, -51, -41, -33, -23, -12, 2, 
31, 49, 61, 68, 69, 68, 67, 62, 52, 42, 36, 30, 19, 16, 14, 8, 
-1, -19, -32, -44, -54, -57, -58, -66, -67, -63, -55, -49, -45, -38, -33, -29, 
-20, -8, 16, 36, 52, 66, 76, 82, 87, 86, 78, 61, 43, 30, 18, 13, 
10, 7, -2, -21, -34, -47, -60, -71, -76, -81, -83, -78, -66, -50, -35, -19, 
-13, -8, -4, 1, 16, 30, 46, 61, 75, 85, 93, 91, 84, 70, 48, 26, 
0, -8, -13, -15, -14, -18, -24, -34, -47, -59, -71, -84, -86, -83, -73, -57, 
-24, -4, 10, 15, 14, 12, 12, 20, 35, 55, 73, 87, 98, 95, 87, 73, 
54, 21, -2, -19, -28, -33, -35, -31, -29, -33, -43, -55, -66, -81, -84, -79, 
-67, -51, -25, -5, 13, 22, 25, 27, 27, 30, 37, 46, 57, 70, 87, 91, 
89, 76, 56, 24, 3, -17, -32, -38, -39, -43, -43, -45, -51, -55, -61, -71, 
-76, -77, -68, -52, -25, -6, 12, 27, 35, 35, 39, 49, 57, 64, 71, 72, 
65, 59, 51, 40, 29, 13, 1, -11, -23, -34, -46, -55, -62, -66, -61, -54, 
-44, -33, -30, -33, -40, -45, -41, -25, -4, 18, 40, 52, 54, 52, 51, 50, 
47, 45, 46, 46, 46, 45, 39, 19, 2, -18, -37, -52, -60, -58, -52, -46, 
-43, -42, -40, -33, -28, -20, -12, -3, 5, 11, 19, 22, 26, 31, 30, 22, 
18, 20, 23, 21, 17, 12, 6, 0, -3, -2, 2, 5, 10, 13, 11, -6, 
-20, -30, -34, -33, -24, -16, -13, -13, -14, -17, -26, -35, -39, -34, -20, -2, 
24, 41, 47, 41, 36, 35, 30, 27, 26, 26, 28, 29, 23, 9, -3, -13, 
-25, -31, -31, -34, -40, -44, -45, -39, -28, -18, -9, -1, 5, 4, 5, 7, 
8, 9, 14, 24, 35, 38, 33, 26, 21, 12, 3, -2, -4, -7, -6, 0, 
6, 4, -3, -9, -9, -10, -9, -7, -3, -1, -1, -1, 1, 3, -9, -19, 
-23, -26, -26, -19, -9, -6, -4, 0, 4, 6, 10, 11, 17, 29, 40, 43, 
35, 25, 16, 9, 6, 3, 1, -4, -14, -22, -32, -39, -44, -45, -36, -21, 
-5, 1, 3, -1, -7, -10, 0, 10, 15, 22, 33, 39, 33, 24, 10, -3, 
-12, -12, -6, -4, -4, -5, -12, -16, -19, -19, -19, -16, -3, 5, 10, 12, 
14, 15, 20, 20, 20, 22, 19, 4, -7, -17, -23, -28, -32, -32, -33, -34, 
-32, -28, -22, -14, -5, 9, 20, 31, 45, 51, 57, 60, 59, 56, 45, 30, 
11, -6, -19, -30, -36, -41, -45, -49, -54, -67, -71, -67, -55, -39, -20, 9, 
26, 40, 46, 47, 50, 57, 62, 64, 61, 56, 48, 38, 28, 14, -8, -24, 
-31, -36, -44, -55, -63, -66, -60, -50, -38, -28, -19, -6, 2, 8, 12, 20, 
30, 37, 41, 45, 46, 42, 33, 16, 9, 3, 0, -1, -5, -9, -17, -22, 
-24, -25, -20, -13, -9, -11, -12, -11, -9, -7, -3, 2, 6, 7, 8, 7, 
4, 1, -1, -1, -3, -2, -1, 1, 3, -3, -5, -4, 0, 6, 21, 31, 
30, 21, 11, 2, -12, -13, -11, -13, -19, -27, -31, -33, -29, -22, -10, 2, 
4, 6, 8, 13, 20, 32, 39, 36, 28, 15, -5, -14, -17, -11, -2, -3, 
-10, -14, -21, -24, -24, -21, -13, -8, -3, 1, 6, 12, 20, 26, 25, 18, 
10, 3, 1, 2, 6, 5, -1, -15, -25, -30, -28, -22, -13, -9, -10, -15, 
-17, -11, 8, 21, 35, 40, 34, 25, 15, 12, 8, 5, 1, -13, -26, -35, 
-39, -39, -31, -9, 1, 5, 5, 7, 8, 9, 10, 9, 8, 3, -8, -13, 
-13, -9, -3, 1, 5, 4, 5, 10, 22, 36, 40, 34, 21, -1, -25, -45, 
-49, -52, -50, -42, -33, -26, -17, -1, 15, 29, 40, 53, 55, 55, 54, 53, 
47, 33, 9, -19, -42, -61, -82, -81, -67, -52, -40, -29, -10, 7, 26, 43, 
59, 72, 71, 65, 53, 39, 26, -3, -21, -39, -53, -63, -71, -62, -46, -30, 
-13, 3, 21, 32, 42, 50, 54, 52, 37, 19, -1, -19, -32, -44, -45, -43, 
-42, -39, -33, -13, 4, 24, 45, 57, 61, 59, 48, 31, 13, -7, -39, -57, 
-67, -69, -69, -63, -35, -15, 4, 22, 41, 56, 65, 69, 66, 56, 39, 4, 
-20, -43, -59, -68, -70, -66, -58, -49, -34, -15, 6, 43, 65, 79, 80, 74, 
63, 47, 24, 2, -16, -33, -57, -66, -67, -67, -65, -56, -31, -12, 7, 27, 
50, 75, 78, 72, 64, 48, 23, -4, -19, -33, -47, -55, -58, -53, -43, -33, 
-20, -6, 19, 35, 45, 55, 64, 62, 44, 26, 7, -9, -25, -38, -48, -55, 
-58, -53, -46, -28, -12, 6, 24, 35, 52, 76, 76, 72, 58, 36, 13, -26, 
-49, -66, -79, -83, -75, -64, -49, -25, 6, 33, 63, 77, 84, 83, 75, 49, 
20, -7, -30, -55, -73, -77, -74, -67, -56, -38, -18, 14, 36, 55, 67, 71, 
64, 50, 36, 18, 1, -16, -46, -58, -60, -60, -58, -46, -27, -18, -1, 20, 
40, 59, 58, 55, 46, 33, 24, 4, -17, -37, -46, -46, -48, -54, -40, -25, 
-13, 4, 25, 35, 43, 47, 52, 46, 27, 20, 2, -15, -25, -29, -21, -25, 
-34, -35, -26, -19, -10, 0, 6, 6, 4, 26, 30, 31, 35, 34, 26, 11, 
14, 12, -9, -26, -37, -45, -48, -45, -35, -29, -20, -3, 16, 28, 41, 55, 
61, 48, 37, 34, 22, -10, -22, -40, -58, -67, -69, -56, -48, -37, -14, 9, 
26, 59, 71, 73, 67, 59, 50, 23, -7, -25, -48, -67, -78, -70, -57, -52, 
-39, -12, 30, 50, 69, 85, 81, 53, 47, 34, 2, -27, -44, -68, -84, -79, 
-61, -49, -24, 4, 31, 50, 67, 85, 77, 61, 44, 28, 6, -26, -56, -73, 
-86, -80, -68, -39, -19, 5, 35, 52, 69, 92, 78, 70, 55, 27, -2, -49, 
-63, -75, -86, -79, -74, -52, -16, 17, 46, 61, 80, 82, 79, 78, 57, 21, 
-30, -54, -66, -78, -81, -79, -75, -45, -6, 31, 55, 69, 79, 76, 78, 77, 
51, -8, -48, -60, -68, -79, -77, -80, -71, -40, 1, 42, 66, 74, 78, 73, 
77, 70, 23, -15, -54, -69, -74, -77, -76, -78, -60, -26, 12, 59, 71, 80, 
78, 74, 75, 43, 6, -36, -59, -69, -85, -78, -74, -69, -44, -5, 51, 67, 
80, 91, 88, 85, 61, 26, -16, -56, -73, -97, -103, -96, -88, -67, -31, 42, 
74, 85, 104, 113, 102, 84, 54, 9, -40, -72, -93, -110, -106, -93, -79, -50, 
17, 57, 73, 89, 100, 90, 86, 67, 33, -12, -51, -74, -90, -90, -83, -82, 
-61, -6, 29, 55, 72, 81, 76, 79, 72, 41, 4, -30, -70, -77, -76, -73, 
-72, -59, -15, 16, 49, 68, 71, 70, 70, 60, 39, 14, -20, -69, -77, -73, 
-71, -66, -47, -18, 6, 44, 69, 73, 73, 68, 55, 31, 12, -13, -69, -80, 
-81, -83, -77, -59, -21, 1, 39, 73, 83, 92, 88, 70, 45, 21, -12, -75, 
-93, -97, -95, -82, -62, -26, 11, 50, 75, 89, 95, 81, 54, 35, 15, -21, 
-71, -87, -92, -90, -74, -50, -18, 13, 43, 68, 83, 88, 75, 51, 36, 18, 
-14, -51, -72, -84, -84, -72, -52, -23, 5, 30, 51, 72, 84, 67, 52, 41, 
18, -11, -42, -61, -80, -81, -65, -48, -23, 3, 29, 48, 63, 73, 63, 55, 
41, 11, -12, -38, -59, -72, -69, -59, -40, -19, 3, 25, 41, 56, 69, 71, 
64, 42, 18, -3, -32, -57, -72, -75, -75, -60, -37, -9, 13, 37, 68, 91, 
91, 77, 52, 27, 1, -39, -62, -74, -74, -71, -45, -19, 1, 24, 49, 67, 
68, 60, 45, 24, 5, -16, -47, -57, -62, -60, -50, -24, -6, 7, 29, 51, 
57, 55, 51, 39, 23, 5, -13, -36, -46, -50, -49, -43, -27, -13, 4, 26, 
38, 41, 45, 42, 31, 16, 1, -12, -33, -42, -43, -40, -36, -23, -4, 13, 
25, 33, 42, 47, 39, 31, 19, 3, -14, -31, -33, -36, -40, -44, -35, -23, 
-15, -3, 12, 23, 36, 44, 50, 49, 36, 21, 3, -13, -32, -51, -61, -62, 
-56, -38, -15, 8, 31, 63, 75, 72, 58, 39, 19, -16, -44, -65, -76, -79, 
-63, -39, -14, 9, 34, 58, 81, 78, 63, 45, 21, -23, -46, -62, -72, -74, 
-64, -30, -5, 19, 43, 67, 79, 68, 51, 30, 5, -24, -53, -67, -77, -77, 
-64, -36, 8, 32, 54, 68, 73, 70, 51, 27, -3, -30, -47, -64, -68, -59, 
-38, -14, 7, 34, 51, 62, 64, 58, 42, 1, -25, -41, -52, -59, -59, -44, 
-21, 2, 22, 39, 54, 54, 48, 37, 17, -8, -35, -44, -46, -45, -38, -8, 
9, 23, 37, 47, 48, 36, 24, 4, -20, -39, -47, -47, -42, -34, -16, 4, 
26, 38, 46, 46, 39, 27, 2, -19, -38, -48, -49, -46, -32, -9, 14, 33, 
47, 56, 54, 42, 24, 3, -21, -51, -57, -56, -53, -47, -35, 2, 29, 50, 
67, 71, 49, 25, -1, -24, -44, -53, -52, -49, -44, -32, -6, 25, 60, 74, 
75, 61, 35, -6, -34, -55, -64, -63, -58, -51, -36, -8, 22, 50, 77, 78, 
65, 40, 11, -17, -53, -65, -64, -56, -48, -38, -3, 28, 57, 77, 86, 66, 
37, 5, -24, -50, -68, -65, -56, -47, -37, -19, 8, 48, 69, 78, 70, 47, 
0, -25, -46, -59, -59, -51, -36, -25, -6, 20, 46, 68, 79, 65, 36, 3, 
-26, -59, -68, -65, -52, -37, -24, 2, 26, 49, 67, 71, 60, 21, -8, -33, 
-52, -63, -58, -40, -24, -9, 9, 31, 62, 75, 74, 57, 29, -5, -49, -69, 
-78, -72, -51, -18, 1, 21, 41, 59, 71, 68, 49, 18, -18, -47, -67, -83, 
-69, -44, -20, 3, 36, 55, 70, 77, 74, 58, 9, -25, -55, -75, -84, -77, 
-39, -14, 11, 34, 51, 72, 73, 65, 44, 11, -24, -67, -84, -85, -70, -45, 
-17, 25, 47, 62, 71, 74, 58, 33, 2, -32, -62, -81, -79, -62, -36, -6, 
23, 53, 65, 69, 66, 55, 31, -15, -47, -73, -85, -80, -63, -23, 9, 38, 
58, 68, 67, 58, 37, 12, -15, -46, -78, -79, -67, -46, -16, 14, 52, 65, 
67, 62, 48, 17, -7, -34, -61, -77, -77, -56, -30, 0, 31, 57, 71, 70, 
60, 36, 12, -11, -55, -76, -82, -75, -55, -27, 22, 53, 74, 82, 78, 61, 
19, -6, -35, -63, -80, -82, -67, -41, -7, 26, 56, 83, 83, 73, 47, 16, 
-9, -54, -74, -85, -83, -66, -24, 12, 46, 72, 86, 89, 60, 30, 3, -30, 
-61, -79, -86, -75, -52, -20, 17, 66, 84, 91, 82, 57, 25, -21, -55, -77, 
-86, -86, -72, -30, 5, 40, 71, 90, 89, 68, 36, 5, -31, -65, -88, -90, 
-78, -55, -23, 14, 66, 88, 97, 88, 62, 13, -24, -62, -84, -92, -92, -60, 
-28, 7, 42, 74, 98, 92, 71, 37, 1, -37, -83, -93, -94, -80, -50, -16, 
39, 69, 89, 96, 85, 45, 9, -29, -63, -84, -92, -84, -57, -25, 9, 43, 
73, 92, 87, 67, 37, 2, -53, -76, -89, -91, -75, -46, 1, 35, 66, 84, 
88, 80, 43, 8, -28, -59, -80, -90, -75, -51, -20, 14, 48, 82, 87, 81, 
63, 31, -5, -54, -77, -90, -87, -68, -25, 9, 45, 71, 86, 88, 67, 37, 
0, -33, -63, -85, -89, -74, -47, -15, 22, 68, 84, 91, 82, 58, 25, -27, 
-58, -83, -93, -85, -67, -22, 16, 49, 73, 88, 83, 62, 32, -1, -35, -63, 
-86, -82, -68, -43, -9, 25, 66, 81, 83, 71, 47, 3, -30, -60, -76, -79, 
-71, -39, -8, 23, 50, 71, 79, 63, 41, 15, -15, -45, -71, -72, -63, -45, 
-18, 11, 50, 67, 71, 64, 45, 10, -18, -46, -62, -66, -61, -35, -12, 13, 
40, 60, 66, 53, 38, 17, -10, -36, -59, -61, -53, -38, -18, 7, 41, 58, 
60, 51, 38, 19, -15, -39, -54, -55, -50, -30, -10, 12, 33, 49, 54, 41, 
29, 11, -11, -32, -45, -49, -41, -29, -11, 7, 35, 46, 44, 35, 25, 11, 
-18, -33, -41, -42, -37, -26, -5, 11, 27, 37, 37, 24, 14, 2, -14, -27, 
-33, -33, -26, -15, -3, 12, 24, 32, 28, 20, 12, 1, -19, -28, -29, -25, 
-18, -7, 9, 18, 25, 27, 21, 13, 1, -11, -25, -31, -28, -19, -7, 4, 
14, 23, 26, 20, 10, 3, -2, -11, -23, -32, -25, -14, 0, 15, 28, 31, 
29, 21, 9, 0, -9, -23, -33, -35, -28, -13, 12, 24, 31, 34, 31, 13, 
0, -11, -20, -31, -42, -37, -21, -2, 17, 32, 41, 42, 37, 22, 4, -12, 
-32, -45, -52, -44, -26, -3, 30, 44, 51, 51, 43, 16, -4, -23, -38, -52, 
-63, -48, -27, -1, 26, 46, 56, 56, 47, 28, 5, -16, -46, -63, -69, -59, 
-38, -10, 33, 54, 63, 66, 60, 41, 4, -22, -46, -67, -78, -62, -38, -8, 
23, 49, 65, 73, 63, 42, 16, -14, -44, -78, -85, -74, -50, -21, 25, 52, 
70, 79, 77, 60, 17, -18, -52, -77, -89, -82, -47, -18, 15, 45, 68, 87, 
82, 63, 33, -4, -42, -86, -97, -86, -61, -32, 0, 48, 72, 86, 88, 74, 
31, -7, -45, -78, -98, -95, -63, -33, 1, 35, 65, 87, 93, 79, 52, 13, 
-27, -80, -98, -97, -80, -52, -21, 34, 66, 87, 97, 89, 67, 13, -30, -64, 
-91, -100, -80, -55, -24, 13, 50, 77, 96, 88, 68, 35, -6, -59, -85, -96, 
-90, -72, -41, 15, 51, 78, 90, 92, 81, 35, -4, -40, -68, -86, -87, -73, 
-48, -14, 23, 57, 86, 88, 77, 56, 22, -16, -60, -77, -85, -80, -63, -20, 
16, 51, 74, 85, 84, 61, 31, -4, -36, -59, -75, -78, -66, -42, -10, 23, 
61, 72, 76, 70, 52, 22, -28, -50, -66, -74, -72, -56, -16, 13, 41, 58, 
65, 64, 50, 28, 0, -27, -45, -61, -64, -54, -35, -10, 14, 45, 54, 55, 
53, 43, 11, -12, -31, -45, -52, -53, -39, -23, -4, 16, 33, 45, 48, 42, 
31, 9, -14, -30, -38, -41, -40, -34, -24, -1, 17, 31, 40, 42, 42, 27, 
10, -6, -19, -29, -39, -39, -34, -26, -13, 5, 26, 33, 38, 38, 30, 16, 
-6, -18, -30, -41, -46, -41, -30, -10, 12, 29, 40, 48, 45, 34, 23, 12, 
-15, -33, -49, -57, -53, -41, -5, 21, 34, 45, 52, 49, 34, 17, -1, -22, 
-43, -60, -56, -47, -33, -7, 20, 43, 55, 59, 51, 42, 27, -9, -33, -49, 
-58, -59, -42, -23, 7, 31, 43, 55, 57, 49, 38, 17, -11, -40, -68, -71, 
-58, -36, -15, 23, 38, 44, 51, 51, 47, 34, 6, -29, -56, -68, -70, -51, 
-25, 3, 29, 43, 54, 54, 46, 39, 28, 7, -39, -60, -70, -70, -57, -37, 
1, 27, 38, 45, 52, 44, 40, 33, 13, -15, -41, -61, -64, -57, -41, -17, 
7, 24, 34, 39, 35, 30, 26, 13, -6, -22, -33, -37, -31, -21, -3, 14, 
17, 14, 8, 2, -1, 3, 6, -2, -10, -16, -13, -9, -5, 12, 16, 10, 
0, -11, -20, -21, -13, -3, 5, 7, 4, 12, 19, 22, 25, 25, 8, -13, 
-31, -44, -47, -34, -19, 0, 9, 13, 22, 35, 38, 38, 31, 17, -4, -43, 
-57, -58, -52, -37, -4, 12, 22, 33, 46, 52, 47, 39, 24, -1, -33, -59, 
-69, -65, -52, -30, -8, 20, 35, 49, 61, 66, 60, 40, 15, -22, -54, -72, 
-76, -66, -48, -25, -2, 18, 42, 58, 69, 69, 60, 43, -5, -43, -67, -73, 
-70, -61, -33, -11, 8, 27, 47, 73, 78, 70, 55, 30, -8, -61, -75, -74, 
-69, -59, -43, -14, 8, 32, 57, 76, 80, 68, 47, 16, -21, -51, -66, -65, 
-61, -54, -40, -21, 14, 41, 65, 78, 78, 59, 35, 4, -26, -48, -57, -60, 
-62, -55, -38, -19, 4, 43, 62, 70, 66, 54, 22, -2, -24, -38, -44, -49, 
-55, -47, -30, -12, 8, 30, 55, 57, 51, 40, 24, -2, -16, -23, -29, -40, 
-49, -42, -30, -17, 1, 19, 39, 41, 37, 32, 25, 15, 2, -8, -17, -32, 
-45, -45, -33, -24, -11, 7, 20, 27, 31, 37, 38, 33, 26, 8, -8, -29, 
-45, -49, -47, -41, -31, -14, 1, 13, 35, 49, 57, 57, 47, 31, 0, -25, 
-45, -56, -60, -60, -50, -32, -11, 9, 32, 64, 75, 74, 62, 42, 19, -23, 
-49, -63, -71, -75, -71, -44, -16, 12, 40, 66, 90, 87, 71, 49, 23, -8, 
-54, -73, -83, -89, -84, -65, -18, 15, 46, 74, 92, 94, 78, 55, 28, -2, 
-35, -74, -88, -94, -89, -69, -39, 11, 41, 66, 82, 88, 75, 55, 32, 5, 
-25, -53, -77, -82, -80, -66, -41, -10, 29, 49, 65, 74, 74, 54, 37, 18, 
-10, -38, -55, -70, -72, -65, -46, -23, -2, 26, 45, 62, 70, 64, 44, 29, 
11, -11, -34, -52, -67, -64, -54, -39, -23, -1, 21, 47, 64, 68, 60, 46, 
31, 11, -11, -32, -49, -66, -66, -57, -43, -28, 0, 28, 53, 64, 66, 63, 
49, 32, 12, -12, -34, -54, -74, -72, -60, -45, -28, 9, 37, 57, 66, 69, 
67, 51, 31, 8, -18, -44, -68, -81, -73, -59, -44, -25, 19, 47, 66, 75, 
76, 72, 51, 26, -3, -32, -59, -77, -85, -75, -60, -44, -19, 30, 59, 76, 
82, 82, 76, 47, 17, -15, -44, -68, -85, -84, -74, -62, -43, -11, 42, 67, 
83, 88, 82, 72, 39, 9, -22, -52, -74, -84, -82, -75, -61, -34, -1, 49, 
69, 77, 83, 83, 72, 35, 6, -27, -56, -74, -80, -77, -71, -58, -31, 4, 
47, 64, 74, 83, 82, 69, 38, 4, -28, -53, -71, -78, -77, -73, -57, -33, 
-1, 44, 64, 75, 85, 89, 71, 33, 12, -19, -52, -70, -82, -86, -75, -55, 
-36, -9, 43, 65, 79, 91, 89, 71, 40, 18, -17, -52, -71, -86, -92, -87, 
-64, -37, -7, 45, 66, 80, 94, 96, 78, 44, 18, -16, -50, -72, -98, -107, 
-90, -62, -36, -8, 40, 70, 91, 107, 102, 79, 46, 21, -14, -55, -83, -98, 
-107, -92, -67, -44, -9, 46, 75, 90, 106, 108, 85, 50, 17, -18, -53, -79, 
-96, -108, -98, -72, -45, -11, 45, 75, 91, 105, 110, 87, 47, 22, -8, -42, 
-77, -106, -117, -97, -63, -39, -14, 32, 64, 90, 109, 112, 85, 44, 25, -3, 
-30, -63, -100, -116, -105, -67, -38, -15, 25, 52, 79, 103, 116, 97, 51, 28, 
0, -23, -51, -92, -111, -113, -80, -46, -22, 20, 43, 71, 93, 112, 108, 56, 
35, 8, -17, -36, -80, -106, -116, -92, -59, -33, 9, 31, 58, 84, 107, 106, 
70, 43, 18, -10, -29, -69, -96, -115, -108, -75, -48, -2, 22, 47, 77, 100, 
121, 92, 57, 32, -1, -26, -58, -87, -110, -119, -97, -63, -21, 9, 34, 64, 
90, 125, 117, 78, 45, 15, -17, -46, -73, -100, -118, -112, -79, -36, -5, 22, 
45, 76, 114, 127, 101, 60, 31, -3, -36, -61, -88, -110, -121, -99, -47, -21, 
9, 30, 57, 99, 125, 124, 84, 48, 18, -28, -47, -74, -100, -118, -117, -65, 
-35, -6, 18, 38, 81, 105, 125, 112, 69, 37, -10, -35, -57, -85, -104, -119, 
-89, -52, -25, 3, 26, 61, 86, 108, 124, 99, 59, 16, -19, -40, -65, -92, 
-109, -115, -82, -44, -15, 13, 42, 68, 90, 112, 123, 92, 39, 9, -22, -44, 
-70, -95, -123, -118, -78, -39, -9, 27, 46, 72, 91, 111, 121, 67, 37, 9, 
-21, -44, -86, -106, -122, -115, -77, -37, 7, 28, 49, 74, 93, 112, 106, 66, 
37, 10, -21, -58, -85, -106, -122, -115, -77, -24, 7, 30, 49, 76, 95, 116, 
106, 68, 38, 13, -30, -56, -82, -101, -121, -121, -60, -23, 7, 29, 47, 74, 
99, 113, 109, 72, 38, 2, -26, -52, -78, -99, -118, -111, -69, -27, 2, 26, 
45, 81, 99, 111, 111, 78, 29, 7, -21, -46, -73, -96, -121, -114, -77, -38, 
-6, 20, 48, 76, 96, 107, 113, 66, 34, 13, -13, -38, -67, -99, -115, -120, 
-91, -49, -15, 24, 42, 68, 92, 103, 110, 79, 41, 19, -4, -30, -71, -93, 
-108, -119, -104, -63, -10, 16, 36, 59, 87, 107, 114, 96, 54, 26, 5, -31, 
-59, -83, -99, -116, -116, -66, -29, 2, 26, 46, 86, 100, 112, 110, 77, 40, 
10, -11, -38, -67, -89, -116, -115, -86, -49, -19, 5, 37, 67, 91, 105, 113, 
95, 45, 27, 8, -13, -44, -85, -103, -120, -107, -72, -41, -2, 18, 45, 75, 
94, 106, 95, 64, 40, 24, 4, -40, -70, -90, -113, -118, -94, -47, -17, 6, 
31, 61, 85, 105, 105, 85, 55, 33, 5, -20, -55, -79, -95, -115, -100, -69, 
-38, -10, 13, 41, 82, 97, 106, 104, 81, 41, 23, 0, -29, -59, -80, -111, 
-114, -94, -66, -37, -13, 26, 56, 78, 97, 107, 94, 70, 45, 26, 7, -27, 
-66, -87, -111, -111, -94, -68, -32, -11, 21, 50, 72, 100, 105, 95, 75, 54, 
37, -3, -37, -61, -85, -108, -109, -84, -63, -43, -19, 13, 51, 75, 92, 101, 
96, 80, 56, 38, 4, -29, -52, -80, -106, -104, -89, -70, -53, -13, 19, 44, 
66, 86, 97, 91, 77, 62, 47, 18, -33, -58, -85, -104, -106, -95, -70, -50, 
-24, 7, 36, 58, 87, 97, 94, 83, 71, 45, 13, -21, -50, -76, -97, -102, 
-91, -78, -60, -37, -9, 36, 59, 77, 91, 95, 82, 74, 58, 28, -4, -34, 
-75, -94, -99, -93, -84, -69, -36, -9, 18, 46, 65, 84, 92, 87, 78, 66, 
44, -3, -35, -62, -80, -89, -93, -79, -66, -46, -23, 4, 46, 62, 76, 88, 
91, 84, 62, 40, 8, -25, -53, -72, -87, -91, -86, -74, -56, -25, 4, 34, 
55, 70, 84, 94, 87, 72, 55, 28, -6, -51, -69, -82, -93, -94, -78, -63, 
-43, -16, 15, 40, 67, 82, 94, 94, 83, 67, 33, -1, -33, -51, -66, -90, 
-94, -88, -76, -58, -34, 8, 32, 51, 68, 83, 94, 85, 68, 49, 23, -8, 
-44, -59, -75, -88, -92, -83, -60, -40, -13, 13, 35, 60, 76, 88, 88, 77, 
63, 31, 3, -21, -42, -57, -70, -86, -81, -70, -58, -40, 0, 19, 39, 60, 
78, 90, 88, 74, 55, 33, 3, -26, -54, -70, -84, -91, -85, -68, -51, -24, 
5, 29, 51, 78, 95, 100, 91, 78, 58, 13, -21, -48, -65, -84, -102, -94, 
-81, -68, -48, -18, 29, 51, 71, 91, 102, 101, 88, 70, 43, 7, -30, -75, 
-90, -99, -104, -95, -81, -56, -26, 9, 40, 62, 80, 100, 103, 99, 86, 64, 
17, -24, -61, -84, -95, -101, -96, -80, -63, -44, -17, 19, 60, 78, 94, 101, 
96, 82, 64, 38, 4, -37, -71, -94, -99, -96, -84, -66, -50, -18, 16, 47, 
69, 83, 91, 88, 80, 66, 49, 27, -25, -58, -81, -91, -88, -82, -63, -43, 
-29, -12, 14, 52, 66, 73, 79, 78, 71, 51, 33, 12, -17, -46, -74, -80, 
-78, -75, -64, -46, -28, -7, 18, 39, 54, 65, 76, 74, 66, 55, 40, 6, 
-23, -49, -68, -80, -83, -74, -61, -45, -29, -10, 12, 41, 57, 68, 76, 77, 
64, 50, 34, 12, -16, -43, -71, -84, -84, -77, -65, -46, -21, -1, 20, 35, 
50, 68, 73, 74, 65, 51, 35, 3, -22, -45, -62, -77, -84, -73, -56, -37, 
-20, -1, 25, 37, 51, 64, 71, 71, 58, 39, 19, 0, -19, -39, -62, -73, 
-78, -70, -53, -24, -8, 11, 24, 35, 50, 65, 69, 65, 54, 38, 19, -10, 
-29, -45, -61, -72, -72, -66, -51, -29, -8, 11, 35, 48, 60, 66, 70, 67, 
53, 35, 11, -12, -33, -54, -67, -74, -76, -73, -60, -26, 0, 22, 37, 49, 
58, 69, 74, 70, 56, 31, -11, -33, -51, -62, -68, -75, -78, -66, -48, -21, 
12, 53, 69, 78, 83, 83, 81, 66, 42, 8, -29, -56, -76, -95, -101, -101, 
-95, -82, -40, -3, 34, 67, 88, 99, 103, 100, 88, 71, 50, 19, -38, -67, 
-85, -95, -100, -97, -83, -68, -48, -18, 16, 63, 85, 96, 98, 94, 86, 62, 
40, 14, -17, -51, -81, -87, -90, -88, -79, -65, -40, -18, 11, 41, 66, 83, 
86, 80, 74, 62, 45, 16, -8, -34, -60, -74, -76, -71, -66, -57, -45, -33, 
-16, 22, 45, 61, 69, 69, 61, 56, 47, 33, 15, -2, -31, -49, -55, -53, 
-50, -51, -48, -41, -31, -17, 3, 31, 37, 42, 42, 42, 47, 43, 33, 21, 
8, -5, -17, -23, -22, -30, -42, -50, -47, -39, -27, -10, 6, 15, 24, 30, 
35, 40, 44, 39, 30, 24, 12, 0, -8, -13, -22, -36, -44, -43, -39, -30, 
-20, -9, -1, 5, 12, 22, 32, 38, 38, 34, 28, 24, 17, 13, 10, 0, 
-30, -39, -39, -36, -32, -23, -19, -17, -15, -9, 3, 24, 34, 36, 34, 34, 
35, 27, 21, 15, 4, -12, -29, -33, -36, -35, -34, -33, -29, -24, -12, 2, 
12, 24, 34, 34, 36, 39, 39, 29, 19, 4, -16, -29, -35, -35, -34, -36, 
-38, -38, -33, -12, 6, 18, 23, 26, 28, 33, 42, 50, 48, 38, 14, -9, 
-27, -37, -40, -42, -47, -50, -50, -44, -31, -3, 14, 26, 31, 35, 39, 48, 
56, 58, 51, 34, 8, -26, -38, -46, -49, -48, -49, -49, -47, -36, -18, 3, 
29, 39, 41, 42, 44, 47, 52, 48, 34, 11, -12, -39, -50, -57, -56, -51, 
-48, -39, -28, -12, 6, 21, 35, 47, 50, 50, 48, 45, 37, 29, 13, -8, 
-28, -45, -64, -65, -58, -51, -44, -31, -16, -1, 17, 35, 48, 57, 55, 52, 
47, 41, 35, 23, 4, -16, -36, -55, -70, -65, -53, -42, -34, -28, -16, -1, 
17, 36, 50, 54, 49, 44, 41, 39, 37, 29, 11, -13, -38, -59, -68, -59, 
-44, -33, -30, -28, -20, 1, 21, 39, 48, 49, 39, 34, 32, 33, 35, 31, 
8, -20, -45, -57, -56, -45, -24, -16, -15, -18, -15, 2, 16, 27, 32, 29, 
21, 19, 23, 27, 30, 30, 20, -15, -35, -45, -43, -35, -21, -19, -20, -19, 
-13, -3, 13, 18, 21, 18, 13, 17, 27, 33, 34, 30, 20, -13, -31, -42, 
-44, -36, -29, -25, -26, -25, -16, -6, 4, 20, 25, 23, 19, 21, 34, 38, 
38, 31, 14, -6, -34, -46, -45, -37, -31, -31, -32, -25, -9, };