const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 3165;
const signed char revSamples[] = {
0, -1, -1, -1, -2, -2, -3, -4, -4, -5, -5, -3, 0, 3, 5, 8,
10, 10, 9, 7, 5, 4, 3, 2, 1, 0, -1, -2, -2, -1, 1, 3, 
7, 10, 13, 13, 12, 10, 7, 5, 4, 6, 9, 14, 19, 23, 29, 32, 
34, 38, 42, 48, 51, 53, 54, 54, 54, 53, 52, 52, 52, 53, 54, 54, 
55, 55, 55, 55, 52, 49, 44, 37, 29, 20, 5, -3, -10, -15, -20, -23, 
-27, -30, -32, -35, -38, -38, -37, -34, -29, -23, -18, -9, -5, -1, 2, 3, 
3, 0, -3, -6, -10, -16, -24, -28, -30, -30, -30, -27, -21, -18, -16, -16, 
-19, -22, -29, -33, -35, -35, -35, -32, -30, -28, -26, -24, -22, -18, -15, -13, 
-9, -6, -1, 6, 11, 17, 24, 30, 42, 51, 62, 74, 86, 97, 109, 113, 
115, 115, 113, 111, 108, 107, 106, 105, 105, 104, 104, 103, 103, 103, 103, 100, 
95, 87, 78, 66, 47, 34, 22, 12, 5, -3, -12, -17, -22, -27, -31, -33, 
-34, -32, -29, -24, -17, -5, 6, 17, 27, 37, 45, 51, 52, 51, 50, 47, 
45, 42, 43, 44, 49, 56, 69, 78, 86, 91, 93, 91, 81, 70, 57, 44, 
32, 23, 13, 11, 10, 11, 11, 10, 8, 5, 0, -4, -6, -9, -9, -8, 
-4, 1, 10, 29, 44, 61, 76, 90, 104, 108, 108, 106, 101, 94, 80, 69, 
55, 41, 25, 9, -16, -31, -43, -53, -61, -67, -70, -73, -75, -76, -77, -78, 
-79, -79, -79, -78, -74, -57, -40, -21, 0, 20, 47, 62, 72, 79, 81, 80, 
73, 68, 61, 52, 41, 28, 1, -20, -39, -56, -68, -74, -70, -61, -50, -41, 
-35, -36, -41, -48, -52, -52, -39, -21, 3, 27, 48, 60, 62, 54, 38, 21, 
6, -4, -4, 5, 20, 37, 52, 68, 69, 62, 48, 28, 6, -26, -44, -58, 
-69, -78, -86, -94, -98, -99, -95, -89, -74, -63, -54, -46, -41, -36, -28, -19, 
-7, 9, 26, 42, 63, 74, 80, 80, 73, 52, 35, 18, 5, 0, 2, 18, 
31, 43, 50, 49, 40, 10, -17, -44, -70, -92, -113, -120, -121, -119, -116, -111, 
-103, -99, -94, -90, -85, -83, -80, -78, -75, -69, -59, -39, -24, -9, 5, 17, 
27, 35, 37, 35, 28, 18, 5, -13, -23, -28, -27, -23, -13, -10, -10, -16, 
-25, -34, -51, -59, -64, -64, -59, -49, -32, -22, -13, -7, -4, 1, 4, 8, 
15, 24, 35, 50, 57, 62, 62, 58, 50, 33, 20, 9, -1, -9, -20, -26, 
-32, -37, -40, -41, -39, -37, -34, -32, -34, -41, -48, -54, -56, -54, -47, -29, 
-14, 0, 12, 23, 34, 51, 63, 72, 78, 80, 74, 68, 60, 54, 48, 43, 
39, 36, 30, 23, 15, 7, -6, -11, -15, -18, -18, -15, -13, -12, -13, -17, 
-20, -25, -24, -21, -15, -8, -3, 3, 5, 6, 6, 5, 1, -1, -2, -2, 
-2, -3, -8, -14, -24, -35, -47, -57, -65, -65, -61, -57, -53, -52, -56, -60, 
-66, -72, -77, -81, -80, -76, -71, -62, -52, -32, -17, -3, 8, 16, 22, 23, 
23, 23, 24, 27, 32, 33, 31, 25, 16, 7, -7, -14, -18, -19, -19, -16, 
-17, -19, -24, -30, -35, -39, -38, -36, -32, -29, -24, -18, -15, -11, -7, -5, 
-3, -2, -2, -1, -1, -1, 0, 0, 0, 1, 2, 3, 10, 14, 19, 23, 
25, 23, 20, 17, 12, 8, 5, 1, 0, 1, 2, 5, 11, 16, 20, 22, 
23, 22, 17, 14, 11, 8, 6, 4, 2, -1, -6, -12, -19, -28, -31, -31, 
-28, -24, -20, -19, -22, -27, -34, -41, -47, -50, -47, -40, -31, -23, -14, -11, 
-12, -13, -14, -14, -10, -5, 2, 8, 11, 12, 8, 3, -3, -9, -11, -9, 
-5, 1, 7, 10, 12, 12, 11, 9, 9, 11, 14, 21, 25, 29, 31, 31, 
30, 30, 31, 33, 36, 39, 41, 39, 37, 32, 26, 22, 18, 19, 21, 25, 
28, 30, 29, 27, 23, 19, 15, 12, 13, 18, 25, 34, 43, 54, 58, 61, 
61, 60, 55, 51, 49, 49, 51, 57, 69, 79, 91, 102, 111, 118, 125, 127, 
127, 125, 122, 118, 115, 113, 113, 113, 114, 115, 117, 118, 119, 120, 120, 120, 
120, 119, 119, 119, 118, 118, 118, 118, 118, 115, 105, 91, 74, 55, 34, 5, 
-11, -23, -32, -36, -38, -38, -39, -41, -43, -44, -44, -40, -35, -28, -20, -11, 
-1, 5, 8, 10, 14, 17, 25, 32, 41, 51, 62, 72, 84, 89, 90, 88, 
83, 72, 66, 61, 58, 57, 60, 68, 76, 84, 92, 98, 102, 105, 104, 100, 
95, 88, 78, 72, 65, 58, 51, 43, 27, 14, -1, -18, -35, -51, -71, -80, 
-85, -88, -88, -85, -80, -73, -64, -56, -51, -49, -51, -57, -63, -66, -67, -62, 
-54, -46, -38, -32, -31, -35, -41, -49, -56, -60, -59, -53, -43, -31, -19, -8, 
2, 6, 10, 11, 14, 17, 19, 20, 20, 19, 16, 11, 7, 3, 0, 1, 
5, 17, 30, 43, 55, 66, 75, 75, 67, 55, 37, 17, -11, -27, -38, -43, 
-44, -43, -37, -35, -35, -40, -48, -63, -73, -82, -87, -88, -85, -75, -66, -59, 
-56, -55, -58, -64, -72, -80, -87, -91, -92, -89, -83, -77, -68, -60, -48, -43, 
-40, -41, -46, -59, -68, -76, -79, -74, -64, -40, -21, -3, 14, 29, 39, 46, 
44, 37, 23, 4, -30, -53, -73, -89, -101, -109, -117, -120, -122, -122, -122, -121, 
-118, -117, -116, -116, -116, -114, -112, -105, -95, -84, -71, -50, -38, -30, -23, -20, 
-21, -25, -28, -33, -37, -40, -42, -42, -41, -38, -35, -30, -24, -21, -19, -20, 
-23, -28, -35, -39, -41, -41, -40, -35, -31, -25, -20, -13, -7, 1, 6, 9, 
13, 16, 18, 22, 25, 27, 29, 29, 27, 24, 18, 11, 1, -9, -23, -29, 
-35, -39, -42, -46, -50, -52, -53, -53, -53, -54, -57, -61, -67, -74, -81, -90, 
-93, -93, -90, -82, -70, -46, -29, -13, 0, 9, 15, 13, 8, 2, -4, -9, 
-11, -11, -10, -8, -5, 1, 4, 5, 4, 2, -5, -19, -30, -41, -50, -58, 
-63, -61, -56, -50, -44, -39, -31, -26, -22, -18, -15, -13, -10, -9, -9, -10, 
-10, -8, 0, 5, 11, 17, 22, 28, 30, 28, 23, 18, 10, 0, -5, -9, 
-9, -8, -6, -2, 0, 2, 6, 9, 14, 18, 21, 22, 21, 18, 10, 6, 
5, 6, 10, 16, 27, 36, 43, 50, 53, 55, 53, 50, 46, 43, 41, 42, 
44, 47, 50, 51, 52, 47, 42, 34, 26, 19, 10, 5, 3, 3, 3, 3, 
5, 4, 4, 4, 4, 4, 8, 11, 13, 16, 19, 25, 30, 36, 43, 50, 
56, 60, 60, 57, 52, 45, 36, 24, 17, 13, 10, 10, 11, 12, 13, 15, 
15, 15, 14, 12, 10, 6, 1, -7, -19, -25, -30, -32, -32, -29, -26, -22, 
-19, -17, -15, -15, -15, -15, -14, -13, -9, -6, -3, -2, -3, -4, -7, -8, 
-7, -6, -3, -1, 0, -2, -4, -6, -8, -8, -5, -1, 6, 17, 29, 52, 
67, 82, 95, 104, 111, 114, 114, 113, 111, 108, 105, 104, 103, 103, 103, 104, 
104, 104, 105, 105, 105, 105, 101, 97, 91, 83, 75, 65, 60, 55, 50, 45, 
38, 27, 21, 15, 11, 9, 9, 7, 7, 7, 7, 8, 10, 11, 10, 7, 
3, 0, -5, -8, -9, -10, -10, -10, -11, -11, -11, -10, -9, -7, -6, -5, 
-2, -1, -1, 2, 5, 9, 15, 23, 31, 42, 49, 54, 54, 51, 42, 34, 
26, 19, 13, 11, 13, 16, 20, 23, 25, 26, 23, 20, 15, 9, 3, -6, 
-11, -14, -17, -18, -17, -18, -19, -20, -23, -24, -26, -28, -27, -26, -24, -21, 
-18, -17, -15, -13, -9, -5, 5, 16, 29, 43, 57, 74, 80, 80, 74, 63, 
48, 24, 10, -2, -11, -17, -21, -26, -29, -31, -34, -34, -31, -26, -20, -11, 
-1, 11, 30, 44, 56, 64, 66, 62, 46, 32, 18, 5, -7, -21, -26, -26, 
-21, -11, 3, 28, 47, 63, 76, 83, 84, 74, 59, 39, 15, -8, -33, -42, 
-41, -33, -19, -2, 20, 30, 33, 30, 22, 11, -9, -21, -30, -33, -28, -9, 
10, 32, 51, 67, 77, 80, 77, 71, 63, 55, 48, 43, 43, 44, 45, 47, 
47, 46, 44, 39, 34, 27, 12, -3, -21, -42, -63, -81, -100, -107, -111, -111, 
-105, -94, -87, -82, -82, -82, -82, -78, -71, -62, -49, -36, -22, -3, 7, 12, 
13, 9, -3, -13, -22, -29, -35, -37, -37, -35, -32, -33, -35, -41, -58, -73, 
-86, -97, -105, -107, -104, -98, -93, -88, -85, -82, -81, -75, -66, -55, -35, -22, 
-12, -5, -2, -2, -6, -10, -13, -14, -14, -13, -8, -3, 3, 9, 15, 21, 
23, 23, 21, 16, 8, -7, -18, -27, -33, -37, -39, -37, -34, -32, -30, -31, 
-36, -41, -46, -48, -49, -49, -48, -46, -44, -43, -40, -35, -27, -18, -9, -1, 
5, 7, 5, 3, 0, -3, -4, -4, -5, -8, -13, -20, -27, -39, -43, -44, 
-44, -42, -42, -47, -56, -67, -78, -85, -87, -83, -75, -65, -54, -46, -35, -30, 
-25, -21, -17, -15, -16, -19, -24, -29, -35, -41, -42, -42, -40, -35, -30, -21, 
-15, -11, -9, -9, -13, -18, -24, -30, -37, -44, -53, -57, -57, -55, -48, -39, 
-22, -10, 0, 7, 9, 8, 6, 4, 3, 3, 3, 5, 5, 4, 3, 0, 
-2, -4, -5, -6, -6, -6, -9, -11, -13, -16, -17, -16, -11, -6, 1, 6, 
11, 14, 15, 16, 17, 20, 23, 26, 27, 27, 26, 25, 24, 24, 24, 24, 
24, 22, 19, 17, 17, 19, 23, 26, 31, 33, 32, 28, 21, 13, 1, -4, 
-8, -8, -5, 0, 5, 9, 11, 11, 9, 3, -1, -5, -10, -13, -18, -23, 
-26, -28, -31, -32, -32, -30, -27, -22, -16, -11, -4, -1, 2, 6, 9, 11, 
13, 12, 8, 3, -2, -8, -6, -2, 6, 17, 26, 39, 45, 48, 49, 49, 
49, 47, 46, 45, 44, 43, 42, 42, 42, 42, 42, 42, 43, 45, 47, 48, 
49, 51, 55, 59, 65, 74, 84, 100, 109, 117, 122, 125, 125, 123, 122, 121, 
119, 119, 119, 118, 117, 113, 109, 103, 91, 82, 72, 61, 48, 37, 20, 10, 
3, -2, -3, -2, 5, 13, 20, 28, 34, 44, 50, 58, 67, 76, 87, 103, 
111, 117, 121, 123, 123, 121, 119, 118, 116, 114, 112, 111, 111, 111, 111, 111, 
111, 110, 107, 102, 95, 80, 67, 52, 36, 19, 5, -14, -23, -28, -31, -30, 
-25, -12, -2, 9, 19, 27, 34, 35, 32, 25, 16, 5, -11, -19, -24, -25, 
-21, -13, 2, 12, 17, 18, 13, -7, -25, -44, -63, -76, -83, -81, -72, -58, 
-41, -25, -11, 4, 8, 8, 6, 2, -4, -7, -8, -8, -8, -7, -7, -8, 
-9, -11, -15, -18, -19, -18, -12, -3, 8, 24, 31, 34, 32, 23, 10, -18, 
-40, -62, -82, -97, -108, -114, -113, -109, -105, -101, -95, -94, -94, -95, -98, -98, 
-93, -85, -72, -57, -41, -26, -10, -4, -3, -6, -13, -24, -28, -29, -26, -19, 
-11, -1, 2, 2, 1, 0, -2, -4, -5, -6, -7, -10, -16, -22, -29, -38, 
-48, -57, -67, -70, -71, -70, -66, -54, -43, -28, -10, 10, 30, 55, 65, 72, 
75, 74, 70, 57, 43, 27, 10, -4, -19, -24, -23, -21, -17, -14, -12, -14, 
-20, -27, -37, -48, -63, -72, -79, -83, -86, -86, -86, -87, -87, -86, -83, -73, 
-66, -59, -52, -46, -45, -48, -53, -60, -65, -68, -67, -61, -50, -39, -29, -20, 
-16, -19, -25, -35, -45, -55, -64, -64, -61, -55, -47, -35, -31, -30, -31, -34, 
-36, -35, -32, -27, -24, -22, -22, -28, -34, -41, -46, -49, -46, -40, -31, -20, 
-11, -4, 1, -1, -5, -11, -20, -27, -39, -47, -53, -60, -63, -66, -65, -62, 
-57, -50, -42, -29, -20, -12, -4, 3, 10, 21, 25, 28, 28, 25, 16, 9, 
2, -2, -5, -5, -5, -6, -7, -11, -15, -18, -20, -20, -19, -19, -20, -26, 
-32, -39, -45, -51, -53, -50, -45, -37, -28, -19, -9, -5, -6, -10, -15, -21, 
-26, -26, -24, -21, -19, -17, -18, -20, -21, -21, -17, -9, -5, -5, -8, -14, 
-22, -35, -40, -42, -40, -35, -28, -14, -4, 5, 14, 22, 29, 32, 31, 30, 
27, 22, 14, 9, 5, 2, 2, 6, 14, 21, 27, 30, 31, 24, 15, 4, 
-8, -19, -29, -37, -39, -37, -33, -29, -22, -11, -3, 4, 10, 15, 21, 23, 
25, 27, 30, 34, 45, 54, 62, 70, 76, 81, 83, 82, 80, 77, 74, 69, 
66, 62, 61, 59, 59, 56, 54, 48, 43, 36, 27, 18, 12, 9, 8, 8, 
10, 12, 13, 12, 12, 9, 3, -2, -7, -10, -13, -13, -10, -6, 0, 6, 
14, 28, 37, 46, 52, 56, 58, 53, 48, 42, 35, 29, 25, 23, 24, 26, 
29, 29, 28, 26, 24, 23, 21, 19, 18, 16, 11, 6, 0, -8, -12, -13, 
-12, -8, -1, 9, 14, 18, 18, 16, 13, 9, 8, 10, 14, 17, 20, 19, 
16, 11, 6, 1, -3, -2, 0, 3, 6, 8, 7, 4, 1, -2, -5, -6, 
-3, 2, 9, 16, 24, 34, 40, 46, 50, 54, 59, 66, 71, 77, 83, 89, 
99, 104, 108, 112, 113, 113, 112, 111, 110, 108, 106, 105, 105, 106, 106, 107, 
108, 108, 108, 108, 108, 108, 108, 107, 107, 107, 106, 106, 106, 102, 95, 83, 
67, 49, 19, 1, -16, -31, -45, -56, -71, -77, -80, -82, -82, -80, -76, -72, 
-68, -65, -62, -59, -56, -51, -45, -38, -32, -22, -17, -11, -6, 1, 9, 23, 
35, 46, 57, 65, 72, 72, 71, 68, 66, 64, 67, 71, 75, 79, 82, 82, 
80, 76, 71, 67, 62, 55, 50, 46, 42, 39, 39, 37, 37, 36, 35, 32, 
26, 19, 9, -3, -16, -31, -52, -64, -73, -81, -85, -87, -82, -77, -71, -66, 
-62, -61, -64, -68, -73, -78, -81, -80, -78, -75, -71, -68, -64, -59, -57, -54, 
-52, -49, -41, -34, -24, -12, 2, 16, 34, 43, 49, 54, 57, 57, 55, 53, 
49, 45, 42, 37, 34, 30, 27, 25, 23, 21, 21, 21, 20, 19, 18, 14, 
10, 4, -5, -15, -33, -45, -53, -56, -54, -45, -24, -7, 9, 22, 31, 35, 
31, 22, 10, -5, -17, -29, -29, -24, -17, -9, -3, -7, -15, -30, -48, -66, 
-81, -92, -90, -81, -65, -47, -21, -10, -4, -4, -9, -18, -30, -36, -39, -38, 
-34, -29, -24, -24, -26, -30, -35, -39, -39, -37, -32, -25, -19, -9, -4, 0, 
3, 3, 0, -9, -17, -27, -38, -49, -63, -70, -73, -73, -72, -69, -67, -68, 
-70, -74, -78, -80, -79, -74, -67, -58, -46, -30, -21, -15, -15, -17, -24, -39, 
-51, -61, -67, -69, -61, -51, -39, -24, -10, 1, 9, 7, -1, -12, -23, -32, 
-35, -31, -24, -16, -9, -3, -1, 1, 3, 7, 9, 12, 11, 9, 8, 6, 
4, 3, 4, 5, 7, 11, 17, 21, 23, 23, 19, 11, -6, -19, -32, -42, 
-50, -54, -53, -51, -48, -46, -44, -44, -45, -47, -50, -54, -57, -62, -63, -63, 
-61, -58, -54, -48, -45, -43, -41, -41, -40, -41, -41, -40, -39, -39, -40, -42, 
-44, -45, -45, -46, -47, -49, -51, -54, -58, -65, -67, -66, -61, -54, -46, -37, 
-33, -33, -35, -39, -44, -51, -54, -56, -57, -57, -53, -48, -42, -38, -36, -35, 
-37, -40, -44, -47, -49, -49, -46, -44, -39, -35, -30, -25, -23, -22, -21, -20, 
-19, -18, -17, -17, -18, -20, -26, -31, -34, -35, -35, -32, -26, -22, -18, -16, 
-14, -12, -9, -7, -3, 0, 2, 4, 3, 1, -3, -7, -10, -11, -9, -5, 
0, 4, 6, 7, 7, 6, 6, 5, 6, 6, 5, 5, 5, 5, 8, 11, 
15, 18, 20, 22, 21, 19, 16, 13, 11, 10, 11, 14, 16, 17, 18, 17, 
15, 14, 14, 15, 16, 15, 14, 13, 10, 7, 2, -1, -4, -7, -9, -12, 
-16, -19, -22, -26, -30, -35, -43, -46, -49, -52, -52, -52, -51, -50, -49, -49, 
-49, -47, -45, -42, -37, -30, -22, -6, 5, 15, 25, 33, 42, 46, 47, 48, 
50, 51, 54, 57, 60, 62, 64, 66, 68, 68, 67, 66, 66, 65, 66, 67, 
69, 70, 72, 77, 81, 88, 94, 100, 106, 112, 115, 117, 118, 118, 118, 117, 
117, 117, 116, 114, 108, 103, 98, 94, 89, 82, 78, 74, 69, 65, 60, 53, 
51, 50, 50, 53, 58, 66, 72, 77, 82, 85, 88, 88, 88, 87, 85, 82, 
76, 71, 65, 59, 53, 49, 44, 43, 44, 46, 47, 49, 49, 49, 50, 51, 
53, 57, 61, 65, 70, 76, 81, 87, 89, 90, 89, 87, 79, 74, 67, 61, 
54, 49, 41, 36, 30, 22, 15, 5, -11, -22, -32, -39, -45, -47, -48, -50, 
-52, -56, -61, -67, -71, -73, -73, -71, -64, -46, -31, -15, 0, 13, 28, 35, 
41, 47, 54, 63, 77, 86, 93, 96, 99, 99, 94, 88, 76, 58, 36, 0, 
-25, -45, -59, -65, -64, -51, -39, -27, -18, -15, -17, -28, -41, -54, -68, -79, 
-86, -85, -80, -72, -62, -54, -48, -51, -58, -68, -78, -86, -95, -99, -100, -98, 
-91, -71, -54, -37, -22, -10, -3, 3, 5, 8, 14, 22, 40, 52, 62, 68, 
67, 60, 39, 20, 2, -14, -23, -26, -15, 0, 18, 36, 51, 68, 72, 72, 
68, 64, 60, 56, 57, 58, 59, 59, 56, 46, 37, 28, 18, 10, 3, -1, 
-4, -8, -17, -27, -47, -63, -78, -92, -103, -111, -116, -116, -112, -108, -102, -95, 
-95, -97, -99, -103, -105, -107, -104, -98, -89, -80, -71, -60, -55, -49, -42, -34, 
-23, -17, -17, -21, -31, -47, -75, -92, -105, -113, -115, -109, -93, -79, -64, -51, 
-41, -36, -38, -43, -50, -56, -60, -60, -55, -48, -40, -31, -24, -18, -17, -18, 
-19, -20, -17, -12, -5, 4, 13, 20, 22, 17, 7, -7, -20, -32, -44, -45, 
-41, -32, -21, -8, -6, -10, -18, -30, -43, -57, -59, -57, -52, -43, -36, -28, 
-26, -26, -27, -30, -36, -38, -38, -37, -34, -30, -24, -21, -19, -19, -22, -26, 
-29, -30, -31, -32, -32, -29, -28, -26, -27, -28, -30, -37, -41, -45, -48, -47, 
-40, -34, -26, -16, -5, 6, 20, 26, 30, 30, 27, 21, 10, 3, -4, -12, 
-18, -28, -33, -36, -39, -41, -44, -48, -52, -55, -59, -62, -65, -64, -63, -61, 
-58, -55, -48, -44, -41, -38, -36, -33, -31, -30, -31, -32, -33, -34, -37, -39, 
-41, -42, -42, -40, -36, -31, -26, -20, -16, -11, -10, -5, 0, };