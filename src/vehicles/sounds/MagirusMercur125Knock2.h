const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 4830;
const signed char knockSamples[] = {//0
0, 0, 0, 1, 2, 1, -1, -2, -3, -1, -1, -7, -8, -13, -13, -11, //16
-1, -1, -7, 0, 13, 19, 14, 11, 16, 14, 3, -12, -20, 7, 20, 23, //32
26, 14, -8, -4, 11, 3, -19, -25, -14, -6, 2, 0, 6, 22, 8, 6, //48
19, 25, 24, 22, 23, 24, 31, 34, 29, 41, 38, 32, 33, 24, 24, 28, //64
38, 42, 38, 19, 21, 30, 39, 44, 30, 26, 38, 29, 27, 26, 22, 13, //80
28, 27, 20, 13, 10, 15, 21, 16, 9, 29, 47, 49, 57, 50, 40, 23, //96
24, 23, 29, 25, 8, 2, 4, -9, -10, 0, 7, -1, -2, -15, -19, -4, //112
-8, -11, -3, 2, -8, -21, -38, -30, -27, -23, -21, -21, -21, -27, -30, -27, //128
-26, -25, -33, -14, -14, -4, -2, -2, 13, 23, 14, 3, -1, -3, 22, 22, //144
32, 50, 53, 28, 11, 8, 9, -3, -1, -2, 9, 34, 51, 61, 48, 21, //160
22, 31, 25, 8, -6, -6, 6, 9, 4, 13, 30, 21, 17, 28, 27, 29, //176
37, 36, 46, 44, 29, 19, 14, 20, 24, 14, 0, -3, 1, 22, 37, 46, //192
55, 34, 24, 6, 3, 6, 17, 5, -2, 11, 19, 25, 29, 24, 11, 4, //208
4, -8, -27, -33, -34, -29, -27, -16, -3, 18, 36, 41, 32, 26, 24, 13, //224
4, 1, 3, -5, -10, -1, 10, 11, -1, -12, -26, -28, -36, -39, -28, -29, //240
-41, -34, -22, -20, -18, -31, -28, -16, -14, -18, -11, -4, 8, 8, 17, 16, //256
-3, -28, -42, -52, -63, -82, -88, -81, -65, -57, -46, -50, -47, -28, -26, -39, //272
-71, -79, -71, -58, -57, -56, -31, -22, -26, -31, -34, -43, -55, -58, -65, -63, //288
-67, -52, -43, -34, -18, -11, -7, -5, -11, -14, -22, -17, -26, -21, -11, -6, //304
-10, -13, -2, -3, -9, -15, -28, -48, -46, -32, -26, -18, -10, 1, -4, -3, //320
-6, -1, -3, -14, -29, -44, -60, -60, -62, -65, -71, -63, -54, -45, -53, -46, //336
-35, -39, -42, -45, -42, -34, -24, -19, -17, -10, -5, -2, -5, -5, 4, 9, //352
2, -7, -15, -28, -31, -38, -36, -16, 0, -2, -8, -9, -9, -5, 0, 2, //368
-10, -27, -41, -45, -34, -32, -38, -28, -13, -7, -15, -13, -12, -12, -14, -18, //384
-27, -23, -13, -7, 1, 12, 22, 25, 32, 31, 39, 51, 58, 56, 56, 60, //400
50, 46, 49, 56, 57, 54, 51, 45, 38, 32, 27, 20, 12, 8, 15, 21, //416
22, 21, 18, 17, 15, 10, 13, 8, 4, 7, 9, 4, 2, 0, 14, 20, //432
21, 15, 8, 7, -7, -20, -23, -16, -14, -18, -5, 13, 24, 38, 50, 60, //448
58, 58, 62, 62, 58, 57, 62, 64, 59, 52, 47, 41, 29, 22, 19, 18, //464
23, 35, 40, 37, 35, 39, 42, 35, 31, 33, 25, 4, 17, 40, 45, 35, //480
30, 32, 31, 21, 9, 7, 12, 29, 36, 42, 43, 41, 48, 50, 51, 54, //496
61, 70, 64, 62, 64, 66, 68, 71, 56, 37, 29, 34, 38, 32, 35, 41, //512
38, 32, 32, 39, 36, 23, 16, 14, 10, -9, -17, -14, -9, -9, -23, -35, //528
-41, -42, -38, -34, -32, -27, -15, 1, 13, 21, 33, 37, 29, 16, 4, -4, //544
-4, -7, -4, 2, 5, 12, 15, 12, 8, 10, 11, -1, -11, -17, -18, -29, //560
-53, -53, -44, -40, -41, -39, -28, -23, -25, -29, -29, -31, -41, -51, -57, -58, //576
-55, -42, -43, -50, -51, -43, -42, -45, -37, -27, -23, -26, -26, -21, -15, -12, //592
-4, -1, 7, 8, 8, 1, -5, -6, 4, 10, 11, 12, 17, 20, 19, 15, //608
11, 7, 8, 10, 5, -1, 2, 3, -1, -17, -20, -16, -14, -19, -27, -27, //624
-35, -51, -62, -63, -54, -51, -55, -54, -46, -38, -35, -38, -33, -26, -26, -34, //640
-38, -36, -29, -24, -23, -27, -33, -34, -32, -30, -29, -21, -12, -5, 3, 9, //656
16, 15, 11, 5, -4, -9, -17, -25, -30, -23, -21, -26, -30, -28, -28, -31, //672
-32, -33, -32, -32, -31, -28, -28, -32, -34, -30, -25, -17, -12, -7, -4, -6, //688
-13, -23, -30, -24, -17, -15, -13, -13, -6, -1, 0, -4, -10, -13, -11, -12, //704
-15, -15, -14, -13, -14, -10, -5, 0, 6, 2, -3, -8, -11, -12, -18, -21, //720
-10, 2, 0, -8, -13, -6, -5, -7, -10, -1, 13, 14, 6, 1, 3, 2, //736
-2, -6, -12, -19, -15, 2, 10, 24, 40, 63, 74, 72, 70, 59, 51, 38, //752
18, 2, -8, -12, -12, 0, 19, 28, 32, 24, 15, 12, 3, -14, -23, -24, //768
-15, -2, 12, 29, 39, 48, 56, 57, 44, 28, 11, 8, 16, 24, 28, 36, //784
45, 52, 57, 58, 55, 52, 42, 37, 33, 37, 50, 62, 61, 61, 57, 55, //800
56, 47, 31, 22, 23, 23, 17, 16, 24, 30, 33, 40, 43, 38, 21, 2, //816
3, 5, 0, -8, -11, -2, 13, 24, 24, 16, 26, 35, 29, 12, 0, -6, //832
-3, 5, 4, -4, -3, 6, 17, 22, 23, 22, 21, 7, -5, -9, -1, 11, //848
3, -11, -4, 12, 11, -3, -13, 2, 2, -9, -18, -11, 3, 6, 6, 3, //864
-7, -18, -22, -21, -32, -36, -33, -15, -1, 10, 14, 9, -4, -4, -4, -16, //880
-26, -34, -44, -44, -36, -38, -39, -27, -22, -10, 4, 14, 7, -2, 2, 11, //896
17, 6, -1, 5, 16, 13, 21, 29, 18, 4, 9, 2, -18, -24, -15, -19, //912
-16, 4, 26, 26, 22, 31, 38, 36, 18, 2, -7, -18, -24, -22, -22, -32, //928
-35, -19, -10, -11, -7, -14, -14, -6, 0, -9, -12, -15, -25, -24, -8, 2, //944
10, 7, 11, 19, 14, 5, 2, 11, 21, 25, 13, -6, -2, 15, 25, 19, //960
28, 36, 12, -6, -11, -11, -13, -17, -10, -6, -1, 11, 24, 48, 49, 33, //976
25, 18, 6, -11, -16, -20, -27, -31, -28, -21, -16, -12, -9, -1, -5, -8, //992
0, 9, 3, -6, -13, -18, -27, -32, -17, -16, -34, -48, -52, -42, -38, -57, //1008
-61, -67, -67, -63, -49, -40, -37, -28, -11, -4, -2, -6, -12, -18, -28, -30, //1024
-36, -46, -45, -34, -21, 3, 14, 19, 25, 22, 22, 15, -3, -19, -27, -26, //1040
-21, -29, -26, -21, -16, -14, 0, 6, 8, 4, 0, 1, -3, -9, -13, -15, //1056
-18, -23, -27, -19, -21, -25, -26, -32, -39, -37, -25, -23, -17, 2, 20, 21, //1072
21, 28, 31, 24, 17, 18, 18, 17, 8, 4, 6, -7, -14, -5, 21, 19, //1088
20, 30, 41, 40, 29, 24, 20, 11, -5, -14, -1, -1, -10, -2, 15, 34, //1104
42, 39, 34, 28, 22, 41, 55, 48, 38, 40, 52, 61, 50, 33, 31, 27, //1120
30, 27, 24, 24, 36, 56, 75, 76, 67, 52, 32, 3, -16, -23, -34, -45, //1136
-33, -6, 3, 4, -2, -7, -7, -13, -27, -40, -47, -51, -53, -44, -36, -19, //1152
-7, 3, 26, 37, 37, 35, 44, 51, 45, 37, 28, 29, 39, 62, 69, 77, //1168
76, 75, 78, 65, 54, 38, 35, 42, 47, 45, 33, 24, 24, 32, 32, 15, //1184
11, 5, 6, 5, 2, 3, 8, 14, 13, 6, 8, 8, 6, 9, 12, 9, //1200
7, 2, -5, -9, -18, -23, -22, -20, -10, -7, 3, 9, 15, 14, 9, -4, //1216
-12, -12, -7, -4, -5, -19, -16, 1, 20, 22, 4, -16, -19, -15, -20, -26, //1232
-35, -50, -55, -50, -42, -42, -42, -34, -26, -29, -32, -31, -31, -35, -45, -50, //1248
-41, -25, -2, -2, 3, 5, 6, 2, -9, -11, -12, -18, -27, -15, -1, 12, //1264
19, 23, 23, 20, 5, -5, -14, -25, -40, -48, -50, -60, -62, -54, -48, -53, //1280
-57, -63, -62, -63, -66, -60, -50, -40, -26, -14, -4, -4, -1, 13, 12, 3, //1296
3, 12, 19, 7, -3, 10, 21, 25, 25, 30, 38, 32, 32, 46, 54, 50, //1312
28, 19, 16, 8, 5, 9, 10, 7, 11, 5, -4, -10, -9, -9, -9, -10, //1328
-11, 7, 22, 34, 31, 28, 27, 31, 27, 20, 18, 8, 6, 10, 10, 9, //1344
11, 18, 22, 29, 46, 52, 50, 43, 39, 37, 34, 30, 26, 29, 23, 17, //1360
17, 20, 30, 26, 24, 30, 41, 53, 64, 65, 57, 43, 32, 29, 25, 27, //1376
25, 32, 35, 32, 40, 50, 53, 50, 43, 31, 15, 10, 12, 12, 6, 2, //1392
1, -6, -13, -12, -8, -18, -23, -17, -7, -8, -12, -12, -8, -8, -12, -11, //1408
-4, -9, -14, -9, 2, 12, 8, 3, 2, 4, 6, 6, -1, -3, 7, 22, //1424
29, 32, 37, 39, 44, 47, 47, 25, 17, 18, 19, 26, 30, 35, 29, 23, //1440
15, 18, 29, 20, 9, -3, -22, -28, -32, -32, -23, -25, -25, -21, -23, -16, //1456
-21, -29, -43, -63, -58, -45, -41, -52, -51, -39, -34, -35, -34, -33, -47, -49, //1472
-49, -43, -38, -36, -35, -39, -47, -43, -37, -27, -26, -39, -46, -42, -40, -44, //1488
-42, -42, -52, -53, -47, -36, -30, -28, -20, -16, -13, -8, -4, 9, 15, 12, //1504
11, 17, 20, 20, 26, 31, 16, 8, 7, 7, 0, -10, -4, -12, -25, -36, //1520
-43, -48, -50, -58, -62, -57, -53, -51, -49, -53, -62, -66, -69, -67, -76, -84, //1536
-85, -83, -75, -63, -51, -45, -40, -46, -53, -49, -37, -28, -18, -8, -2, 10, //1552
22, 30, 33, 33, 28, 21, 20, 22, 25, 31, 30, 25, 13, 6, 12, 7, //1568
5, -6, -21, -27, -21, -3, 6, 8, 10, 15, 15, 13, 19, 23, 19, 7, //1584
-4, -9, -5, 1, 9, 17, 5, 12, 19, 25, 30, 31, 25, 18, 23, 26, //1600
27, 41, 38, 50, 60, 50, 47, 34, 31, 31, 23, 17, 21, 28, 29, 23, //1616
21, 20, 9, -2, -21, -15, -3, -4, -7, -14, -23, -10, 1, 1, -3, -12, //1632
-13, -16, -2, 11, -1, -7, -1, 6, 18, 33, 51, 42, 26, 19, 41, 49, //1648
41, 26, 17, 29, 34, 23, 9, 6, 11, 5, -18, -29, -15, -16, -17, -34, //1664
-22, -13, -23, -42, -40, -21, -13, -13, -28, -37, -24, -12, 3, -2, -18, -20, //1680
-15, -6, 4, 7, 8, -7, 3, 4, 6, 12, 14, 13, 16, 9, 13, 14, //1696
12, 21, 8, 7, 9, 16, 16, 4, 5, 9, 8, 3, -17, -11, -12, -3, //1712
-6, -16, 1, 3, -2, 7, 20, 28, 24, 24, 21, 8, 2, -14, -12, -3, //1728
-15, -7, -23, -31, -25, -12, -8, -38, -43, -45, -35, -23, -31, -31, -42, -36, //1744
-26, -13, -5, -18, -31, -28, -31, -40, -50, -56, -47, -31, -31, -35, -34, -36, //1760
-24, -28, -20, -15, -23, -31, -41, -19, 1, 8, 17, 17, 21, 40, 51, 42, //1776
53, 53, 46, 49, 45, 47, 38, 38, 38, 37, 33, 11, 13, 16, 4, -7, //1792
-8, -5, 2, 13, 7, -3, -10, -22, -27, -26, -28, -23, -22, -30, -27, -19, //1808
-11, -24, -15, -17, -21, -22, -10, 8, 0, -5, -8, -7, -8, 0, 9, 13, //1824
6, 1, 1, 20, 27, 40, 30, 10, 29, 35, 39, 23, 12, 21, 27, 37, //1840
27, 18, 19, 22, 13, 26, 20, 15, 13, 4, 8, 5, 5, 3, 1, -18, //1856
-31, -27, -24, -20, -18, -18, -19, -25, -15, -3, -14, -19, -32, -38, -44, -50, //1872
-46, -43, -39, -25, -21, -12, -5, 1, 0, -1, -1, -3, -7, -14, -23, -19, //1888
-10, 11, 10, 7, 8, 16, 27, 5, -9, 0, 1, -10, -23, -6, 4, 2, //1904
-1, 4, 9, 1, -9, -1, 2, -10, -11, -4, 8, 12, 11, 9, -9, -15, //1920
-10, -3, -3, -14, -8, -13, -13, -6, -16, -25, -29, -20, -25, -32, -35, -36, //1936
-30, -24, -23, -25, -25, -24, -25, -33, -54, -66, -66, -61, -50, -39, -36, -39, //1952
-31, -19, -10, -12, -17, -18, -11, -10, -6, -2, 11, 19, 13, 9, 7, 4, //1968
6, 11, 8, 5, 9, 8, 11, 8, 8, 5, 16, 25, 24, 24, 24, 16, //1984
13, 18, 18, 9, 4, -2, -12, -25, -26, -29, -41, -46, -44, -37, -26, -23, //2000
-15, -1, 20, 13, 4, -2, 3, 10, 2, -4, -2, 5, 14, 24, 11, 10, //2016
13, 18, 19, 5, 1, 4, 16, 29, 40, 34, 27, 18, 19, 16, 9, 8, //2032
6, 10, 22, 36, 49, 49, 54, 52, 39, 29, 20, 15, 4, 6, 12, 14, //2048
11, 15, 15, 11, 4, -2, -5, 0, 10, 15, 15, 13, 18, 20, 20, 21, //2064
17, 15, 6, 1, 1, 6, 12, 14, 14, 11, 9, 12, -1, -10, -10, -10, //2080
-9, 3, 13, 15, 17, 15, 15, 23, 21, 21, 28, 29, 33, 34, 31, 28, //2096
26, 28, 18, 18, 24, 31, 36, 36, 41, 49, 54, 57, 52, 41, 45, 45, //2112
45, 45, 41, 30, 25, 27, 27, 13, -5, -14, -16, -18, -24, -26, -30, -28, //2128
-22, -21, -27, -34, -39, -43, -50, -50, -53, -62, -63, -53, -45, -42, -45, -47, //2144
-48, -56, -63, -65, -63, -49, -41, -35, -34, -32, -21, -12, -10, -7, -7, -8, //2160
-4, 3, -1, -12, -16, -14, -16, -26, -36, -45, -46, -39, -37, -40, -37, -32, //2176
-28, -19, -13, -11, -15, -17, -19, -23, -40, -54, -55, -49, -44, -45, -41, -37, //2192
-38, -33, -35, -39, -34, -21, -16, -19, -16, -9, -3, -4, -3, 1, 3, 5, //2208
8, 7, 7, 6, -5, -13, -16, -16, -13, -6, -6, -7, -6, -1, 0, -4, //2224
-12, -14, -16, -25, -25, -20, -12, -7, -9, -12, -16, -13, -16, -20, -27, -29, //2240
-25, -24, -22, -21, -20, -10, 2, 7, 10, 10, 7, 12, 14, 13, 7, 6, //2256
12, 19, 28, 34, 37, 34, 39, 44, 42, 31, 20, 13, 3, 0, 2, 11, //2272
14, 11, 12, 18, 17, 8, 0, -11, -12, -12, -19, -24, -19, -7, -10, -16, //2288
-20, -15, -6, -12, -22, -31, -30, -20, -10, -12, -11, -1, 10, 6, 2, 1, //2304
-2, -6, -3, 3, 0, -1, 3, 10, 13, 18, 20, 24, 26, 27, 24, 23, //2320
29, 33, 34, 32, 24, 18, 13, 10, 9, 5, -5, -8, -14, -11, -2, -1, //2336
-13, -13, -1, 13, 18, 19, 27, 35, 40, 42, 46, 51, 44, 36, 28, 23, //2352
28, 29, 24, 19, 21, 27, 26, 27, 28, 27, 20, 15, 16, 13, 4, 2, //2368
-1, -2, -3, -6, -10, -2, 8, 19, 23, 25, 23, 30, 30, 21, 22, 27, //2384
25, 16, 14, 17, 14, 18, 27, 31, 26, 14, 5, 12, 26, 27, 1, 4, //2400
21, 29, 26, 27, 37, 53, 64, 67, 64, 54, 50, 39, 27, 12, 2, -5, //2416
2, 0, -5, -4, 24, 32, 31, 26, 28, 28, 19, 16, 20, 21, 22, 20, //2432
8, 10, 12, 7, -3, -25, -12, 14, 33, 24, 14, 17, 13, -1, -17, -33, //2448
-39, -17, -9, -23, -41, -33, 8, 26, 21, 13, 8, 16, 41, 36, 15, 8, //2464
16, 11, -5, -15, -19, -20, -19, -14, -24, -42, -45, -21, -11, -33, -45, -40, //2480
-27, -21, -33, -58, -54, -44, -28, -17, -30, -21, -15, -20, -28, -19, -19, -38, //2496
-37, -15, -9, -19, -15, -3, -6, -16, -23, -39, -42, -41, -54, -54, -40, -28, //2512
-33, -22, -6, -4, -18, -29, -34, -27, -22, -20, -15, -9, -6, -18, -43, -63, //2528
-58, -40, -20, -5, 7, 7, -6, -12, -4, 3, 0, 2, 13, 8, -10, -16, //2544
-21, -10, 7, 23, 31, 30, 4, -27, -33, -16, -7, -8, 0, -5, -25, -48, //2560
-66, -81, -73, -68, -77, -79, -68, -65, -65, -50, -32, -25, -24, -18, -10, -3, //2576
3, -7, -25, -38, -28, -30, -29, -4, 39, 44, 48, 52, 44, 42, 45, 40, //2592
41, 49, 52, 44, 46, 61, 74, 86, 72, 34, 24, 32, 31, 13, -3, -27, //2608
-36, -30, -19, -16, -21, -12, -4, -11, -24, -22, 2, 2, -6, -24, -41, -55, //2624
-59, -62, -67, -67, -55, -41, -22, -18, -19, -7, 9, 18, 31, 38, 41, 43, //2640
37, 25, 13, -2, -1, 9, 7, 13, 17, 25, 41, 64, 93, 101, 109, 115, //2656
105, 92, 67, 41, 27, 32, 42, 25, 8, -5, -13, -13, 2, 15, 8, 12, //2672
33, 43, 33, 6, -1, -3, -5, -15, -24, -17, -6, 13, 25, 26, 21, 14, //2688
-3, -16, -18, -15, -11, 3, 31, 51, 60, 62, 67, 68, 64, 60, 59, 51, //2704
33, 30, 42, 61, 68, 52, 40, 30, 21, 11, -1, 6, 11, 16, 16, 21, //2720
27, 22, 22, 33, 33, 17, 7, 9, 14, 13, 16, 20, 10, 7, 8, 11, //2736
22, 27, 12, -6, -11, -10, -7, 9, 29, 37, 44, 44, 37, 41, 56, 65, //2752
66, 64, 48, 39, 36, 31, 25, 28, 39, 43, 43, 43, 42, 22, 15, 15, //2768
24, 27, 29, 26, 41, 56, 56, 45, 29, 15, 12, 17, 20, 12, -14, -23, //2784
-22, -24, -28, -25, -7, -4, -11, -23, -28, -27, -18, -4, 5, 4, -1, -4, //2800
-10, -18, -21, -12, 3, 11, 21, 26, 23, 14, 3, -1, -3, 0, -5, -8, //2816
-10, -4, -6, -13, -23, -23, -14, -12, -3, 4, 1, -10, -11, -22, -30, -31, //2832
-26, -29, -46, -58, -56, -34, -15, -4, -2, -4, -7, -11, -21, -30, -39, -46, //2848
-50, -51, -56, -66, -79, -75, -63, -46, -50, -54, -54, -52, -43, -36, -36, -33, //2864
-26, -18, -19, -17, -11, -8, -12, -19, -19, -29, -47, -64, -73, -71, -78, -69, //2880
-53, -33, -26, -33, -32, -28, -35, -49, -53, -46, -42, -37, -23, -9, 2, 4, //2896
7, 10, 21, 21, 12, -3, 2, 4, 0, 2, 9, 14, 18, 21, 19, 12, //2912
12, 12, 10, 9, 14, 10, -2, -7, -13, -13, -7, 4, 8, 12, 20, 24, //2928
28, 30, 34, 30, 18, 20, 31, 42, 38, 31, 16, 0, -11, -2, 10, 20, //2944
29, 33, 32, 30, 34, 34, 32, 29, 33, 43, 44, 37, 33, 39, 42, 41, //2960
33, 24, 26, 40, 37, 29, 31, 43, 54, 55, 53, 52, 40, 30, 15, 8, //2976
8, 7, 6, 9, 21, 29, 27, 27, 31, 38, 61, 70, 65, 52, 35, 30, //2992
32, 33, 32, 27, 32, 42, 41, 36, 30, 28, 34, 44, 40, 35, 28, 20, //3008
22, 30, 38, 42, 49, 60, 62, 55, 37, 14, 3, 4, 3, -5, -12, -18, //3024
-21, -17, -11, -6, -5, -7, -16, -27, -23, -15, -9, -4, -5, -18, -32, -36, //3040
-36, -31, -33, -26, -14, -4, -9, -22, -33, -22, -12, -9, -13, -18, -16, -10, //3056
-4, -5, -12, -18, -9, 8, 17, 15, 9, 14, 15, 8, 3, 3, 4, 1, //3072
-5, -4, -6, -19, -37, -33, -24, -25, -37, -46, -52, -62, -64, -61, -52, -46, //3088
-53, -47, -30, -17, -18, -31, -30, -26, -32, -39, -52, -45, -40, -41, -46, -46, //3104
-53, -58, -60, -58, -54, -47, -33, -24, -19, -17, -16, -17, -8, -8, -12, -14, //3120
-18, -23, -29, -40, -57, -63, -58, -39, -30, -23, -15, -8, -2, 1, 3, -3, //3136
-15, -24, -21, -21, -39, -57, -60, -54, -33, -32, -37, -42, -38, -29, -23, -18, //3152
-16, -16, -17, -18, -13, -14, -17, -14, -7, 9, 4, -8, -20, -27, -34, -31, //3168
-30, -40, -48, -51, -48, -45, -45, -47, -43, -31, -18, -27, -43, -37, -18, -9, //3184
-29, -39, -43, -25, -9, -5, -13, -5, 0, -6, -10, -16, -29, -33, -19, -12, //3200
-14, -6, -7, -9, -15, -17, 11, 9, -1, -1, -2, -3, -12, -17, -22, -27, //3216
-42, -52, -41, -22, -13, -25, -37, -32, -20, -19, -25, -34, -37, -2, 10, 20, //3232
6, -7, 7, 26, 22, 10, 4, 7, 0, 5, 15, 29, 39, 26, 14, 21, //3248
25, 26, 21, 25, 22, 41, 42, 31, 30, 33, 31, 33, 39, 41, 47, 43, //3264
43, 51, 54, 50, 58, 49, 49, 52, 46, 45, 49, 64, 66, 55, 38, 32, //3280
25, 23, 24, 23, 27, 42, 62, 69, 70, 50, 28, 23, 37, 24, 25, 30, //3296
25, -9, -7, 10, 20, 14, -6, -14, -5, 13, 15, 10, 0, 2, 5, 12, //3312
32, 52, 48, 52, 53, 52, 44, 20, 16, 26, 31, 32, 32, 39, 52, 66, //3328
72, 63, 40, 12, 12, 15, 11, -1, 4, -6, -18, -14, -12, -22, -34, -37, //3344
-33, -32, -42, -46, -27, -14, 3, 8, 11, 4, -3, -17, -27, -33, -27, -25, //3360
-17, -16, -12, 0, 19, 50, 19, -4, -2, 2, -12, -26, -16, 3, 27, 40, //3376
71, 70, 51, 43, 42, 31, 20, 12, 8, 2, -5, -2, 8, -11, -31, -41, //3392
-45, -28, -18, -7, 0, 12, 43, 42, 27, 12, -5, -8, -19, -24, -41, -49, //3408
-42, -15, 11, 1, 3, 20, 16, -21, -37, -48, -43, -42, -38, -37, -35, -33, //3424
-29, -12, 6, -2, -15, -28, -40, -49, -35, -39, -49, -53, -54, -36, -25, -30, //3440
-39, -48, -70, -98, -84, -56, -17, 0, -4, -11, -6, 3, 10, 19, 0, -61, //3456
-69, -36, -33, -58, -74, -75, -56, -40, -37, -36, -29, -33, -32, -12, 0, 2, //3472
-14, -11, 6, -1, -15, -26, -54, -64, -63, -52, -39, -28, -24, -9, 4, 5, //3488
-6, -16, -40, -55, -57, -52, -36, -16, 3, 7, 7, 8, 5, -11, -26, -35, //3504
-41, -39, -29, -24, -23, -1, 30, 39, 28, 17, 29, 29, 19, -3, -14, -35, //3520
-58, -77, -81, -63, -55, -42, -32, -22, -11, 1, -3, -17, -40, -66, -67, -49, //3536
-39, -36, -28, -21, -15, -5, 13, 12, 1, -9, 8, 22, 15, -1, -18, -13, //3552
-18, -30, -37, -35, -29, -32, -19, -10, -1, 7, 38, 44, 39, 26, 20, 32, //3568
41, 22, -11, -40, -58, -70, -76, -69, -59, -66, -76, -61, -31, -15, -28, -42, //3584
-18, 29, 35, 24, 14, 8, 5, -18, -38, -41, -38, -31, -14, 12, 41, 65, //3600
80, 87, 66, 42, 22, 7, 6, 5, -6, -15, -11, 0, 28, 60, 62, 59, //3616
54, 48, 46, 53, 47, 20, -6, -10, 3, 16, 11, -9, -23, -10, 23, 20, //3632
12, 7, -2, -2, 21, 34, 25, 9, 16, 32, 49, 46, 39, 37, 46, 52, //3648
58, 70, 76, 73, 58, 55, 58, 57, 39, 23, 26, 27, 32, 45, 57, 61, //3664
63, 76, 82, 84, 86, 77, 40, 41, 51, 52, 36, 20, 14, 13, 13, 28, //3680
45, 30, 22, 25, 29, 37, 30, 15, 12, 12, 18, 34, 39, 26, 9, -3, //3696
-5, -7, 4, 14, 15, 9, 14, 24, 38, 37, 30, 26, 26, 22, 4, -16, //3712
-30, -29, -21, -3, 2, 5, 12, 28, 31, 21, 19, 18, 7, 6, 17, 18, //3728
5, -17, -24, -17, -14, -16, -28, -42, -41, -34, -18, -3, 2, -6, -13, -22, //3744
-23, -33, -52, -67, -72, -67, -58, -40, -21, -8, -3, 7, 6, -11, -22, -29, //3760
-39, -38, -30, -25, -21, -10, 15, 25, 26, 15, 9, 16, 31, 40, 49, 51, //3776
49, 31, 22, 20, 20, 15, 3, -10, -10, -8, -2, 10, 10, -7, -17, -22, //3792
-22, -19, -23, -34, -39, -35, -29, -24, -32, -43, -47, -42, -42, -38, -32, -26, //3808
-26, -32, -23, -15, -7, 2, 2, -3, -5, -12, -18, -25, -37, -44, -47, -33, //3824
-16, -4, 6, 2, -13, -28, -43, -61, -71, -82, -85, -81, -68, -58, -49, -25, //3840
-7, -2, -10, -26, -36, -33, -27, -24, -25, -20, -9, 1, 2, 2, -7, -18, //3856
-35, -38, -33, -26, -28, -27, -19, -13, -11, -11, -8, -5, -22, -42, -56, -59, //3872
-51, -43, -48, -45, -39, -35, -35, -33, -36, -49, -61, -70, -77, -68, -69, -76, //3888
-82, -74, -48, -39, -32, -30, -28, -25, -23, -18, -19, -23, -22, -12, 0, 2, //3904
12, 30, 48, 69, 71, 68, 68, 75, 78, 67, 52, 44, 42, 38, 31, 18, //3920
9, 5, 17, 30, 30, 26, 26, 30, 32, 25, -1, -17, -11, 5, 10, 5, //3936
4, 7, 11, 11, 10, 10, 13, 15, 23, 30, 29, 41, 58, 63, 67, 68, //3952
74, 69, 56, 44, 39, 38, 28, 23, 27, 34, 49, 55, 67, 77, 75, 60, //3968
41, 30, 24, 9, -2, -7, -4, 4, 18, 28, 21, 19, 21, 21, 20, 9, //3984
-1, -5, -1, 3, 4, -3, 0, 13, 11, -1, -2, 8, 6, -13, -13, -4, //4000
8, 10, 14, 28, 44, 50, 44, 45, 47, 35, 28, 34, 42, 36, 29, 35, //4016
50, 53, 49, 46, 37, 27, 16, 12, 13, 3, 0, 11, 12, 5, 7, 15, //4032
21, 35, 53, 64, 49, 37, 59, 66, 47, 26, 27, 14, -10, -22, -24, -22, //4048
-16, -5, 0, 9, 18, 24, 39, 51, 50, 43, 37, 47, 65, 55, 33, 28, //4064
33, 31, 23, 34, 38, 29, 18, 10, 0, -12, -25, -31, -24, -18, -13, -7, //4080
2, 6, 15, 20, 18, 22, 23, 9, -15, -23, -30, -35, -46, -51, -53, -71, //4096
-85, -79, -51, -35, -42, -42, -18, -1, 15, 28, 31, 21, 9, 0, -5, -26, //4112
-42, -36, -18, -9, -28, -40, -40, -41, -44, -48, -32, -25, -38, -38, -15, -2, //4128
-10, -10, 3, 8, 1, -10, -18, -28, -32, -33, -36, -34, -27, -20, -21, -16, //4144
-13, -10, -3, 9, 17, 14, -6, -14, -15, -6, 12, 19, 10, 3, 1, -3, //4160
-11, -24, -29, -46, -66, -65, -46, -40, -41, -28, -14, -18, -25, -23, -33, -48, //4176
-56, -46, -30, -20, -16, -12, -16, -12, 8, 7, 0, -11, -17, -18, 0, 7, //4192
15, 24, 27, 16, 14, 23, 25, 6, -14, -16, -13, -23, -33, -32, -27, -18, //4208
-12, -6, -16, -24, -29, -28, -38, -40, -23, 3, 8, -1, 1, -7, -36, -54, //4224
-58, -37, -24, -11, -3, -12, -36, -40, -34, -33, -36, -31, -25, -37, -49, -50, //4240
-31, 0, 19, 33, 38, 37, 31, 7, 6, 0, -10, -18, -29, -27, -32, -28, //4256
-21, -20, -34, -38, -29, -29, -38, -50, -59, -54, -42, -30, -25, -40, -50, -42, //4272
-36, -36, -34, -37, -32, -32, -30, -23, -2, 20, 38, 39, 20, 6, -10, -4, //4288
6, 11, -2, -5, 9, 15, 13, 30, 54, 59, 63, 77, 76, 65, 63, 64, //4304
46, 34, 29, 29, 34, 34, 21, 20, 23, 16, 7, 10, 23, 21, 5, -4, //4320
20, 22, -2, -16, 5, 35, 40, 33, 42, 61, 75, 72, 67, 72, 76, 74, //4336
74, 71, 65, 61, 66, 86, 99, 84, 65, 57, 61, 61, 61, 66, 65, 59, //4352
47, 38, 42, 55, 54, 46, 49, 65, 78, 72, 65, 63, 62, 45, 35, 26, //4368
23, 21, 16, 17, 19, 22, 19, 8, -1, 2, 9, 11, 7, 10, 18, 37, //4384
55, 54, 34, 31, 56, 60, 52, 50, 55, 49, 31, 29, 29, 26, 14, 10, //4400
12, 8, 11, 19, 11, -3, 0, 7, 16, 19, 14, 19, 26, 30, 23, 12, //4416
18, 29, 31, 29, 29, 35, 28, 12, -5, -14, -20, -21, -16, -22, -22, -13, //4432
-7, -16, -31, -41, -49, -53, -57, -73, -79, -78, -71, -65, -52, -42, -44, -60, //4448
-82, -96, -93, -96, -115, -127, -121, -107, -93, -83, -70, -59, -48, -35, -38, -49, //4464
-58, -54, -53, -66, -77, -78, -67, -56, -49, -49, -49, -44, -43, -53, -64, -67, //4480
-68, -69, -68, -72, -63, -50, -33, -14, -4, 10, 23, 11, -9, -16, -8, -19, //4496
-22, -17, -17, -22, -33, -38, -31, -19, -10, -7, -16, -25, -21, -18, -15, -14, //4512
-5, 7, 25, 37, 45, 43, 38, 39, 37, 39, 46, 49, 41, 35, 33, 33, //4528
33, 41, 46, 47, 53, 60, 59, 53, 60, 67, 57, 35, 20, 26, 29, 27, //4544
26, 31, 43, 52, 60, 60, 55, 45, 41, 44, 46, 34, 23, 16, 23, 29, //4560
30, 32, 42, 55, 49, 36, 21, 13, 16, 31, 36, 37, 33, 35, 31, 33, //4576
48, 57, 54, 48, 47, 49, 46, 40, 38, 38, 53, 61, 64, 64, 68, 79, //4592
83, 79, 75, 76, 81, 55, 33, 24, 29, 40, 42, 35, 35, 38, 38, 35, //4608
32, 33, 33, 29, 20, 10, 5, 11, 9, 1, -5, -4, 16, 28, 25, 12, //4624
7, 2, 2, -3, -9, -9, -2, 3, 13, 16, 16, 13, 5, 0, -5, -7, //4640
-11, -16, -16, -24, -26, -22, -19, -7, -12, -17, -21, -21, -13, -15, -26, -32, //4656
-29, -19, -18, -33, -30, -33, -40, -41, -46, -40, -41, -50, -51, -50, -43, -47, //4672
-60, -64, -57, -45, -37, -45, -37, -22, -12, -15, -34, -36, -25, -21, -26, -28, //4688
-24, -23, -21, -28, -26, -6, -10, -16, -18, -13, -11, -12, -22, -28, -25, -15, //4704
-20, -18, -18, -20, -21, -30, -19, -18, -27, -32, -32, -33, -30, -27, -28, -35, //4720
-39, -25, -10, -9, -15, -20, -18, -14, -14, -18, -19, -20, -18, -19, -28, -29, //4736
-22, -20, -22, -27, -39, -39, -33, -31, -40, -41, -32, -28, -31, -40, -41, -45, //4752
-47, -40, -30, -33, -35, -44, -48, -47, -55, -64, -62, -56, -52, -50, -53, -40, //4768
-33, -33, -37, -41, -36, -37, -41, -47, -54, -52, -50, -46, -28, -24, -24, -22, //4784
-15, -24, -37, -46, -48, -29, -20, -17, -25, -32, -25, -8, 5, 3, -7, -25, //4800
-37, -22, -21, -32, -40, -37, -27, -26, -22, -25, -17, -5, -7, -5, -4, -4, //4816
-1, 1, -10, -8, -9, -13, -7, 3, 2, -4, -4, 0, 1, 0, };