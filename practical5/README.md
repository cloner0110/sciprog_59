# Paractical 5
Compile .C files located in src/ folder using: 

`gcc fibo.c -o fibo -lm `

and similarly for Arctanh:

` gcc atanh.c -o atanh -lm`
 

The output files are exectuble like:

`./fibo` and `./atanh`

Sample output for **fibo** series (n=12):

`Enter the n`
`12`
`fibonacci sequence =`

`-------------------`

`0`

`1`

`1`

`2`

`3`

`5`

`8`

`13`

`21`

`34`

`55`

`89`

`144`

and sample output for **arctanh** using neutral logarithm and McLaurin series:

`Enter the value for delta (McLaurin series) ...`

`1e-06`

`==========================================`

`For x = -0.900000, the value of arctanh1 = -1.4722158356, arctanh2 = -1.4722194896, and the diff= 0.0000036540`

`For x = -0.890000, the value of arctanh1 = -1.4219225011, arctanh2 = -1.4219258711, and the diff= 0.0000033701`

`For x = -0.880000, the value of arctanh1 = -1.3757648284, arctanh2 = -1.3757676565, and the diff= 0.0000028281`

`For x = -0.870000, the value of arctanh1 = -1.3330769036, arctanh2 = -1.3330796297, and the diff= 0.0000027261`

`For x = -0.860000, the value of arctanh1 = -1.2933424971, arctanh2 = -1.2933446720, and the diff= 0.0000021749`

`For x = -0.850000, the value of arctanh1 = -1.2561509094, arctanh2 = -1.2561528120, and the diff= 0.0000019026`

`For x = -0.840000, the value of arctanh1 = -1.2211716905, arctanh2 = -1.2211735177, and the diff= 0.0000018272`

`For x = -0.830000, the value of arctanh1 = -1.1881344750, arctanh2 = -1.1881364044, and the diff= 0.0000019294`

`For x = -0.820000, the value of arctanh1 = -1.1568160091, arctanh2 = -1.1568174646, and the diff= 0.0000014555`

`For x = -0.810000, the value of arctanh1 = -1.1270278774, arctanh2 = -1.1270290260, and the diff= 0.0000011487`

`For x = -0.800000, the value of arctanh1 = -1.0986107467, arctanh2 = -1.0986122887, and the diff= 0.0000015419`

`For x = -0.790000, the value of arctanh1 = -1.0714303136, arctanh2 = -1.0714316841, and the diff= 0.0000013705`

`For x = -0.780000, the value of arctanh1 = -1.0453692712, arctanh2 = -1.0453705485, and the diff= 0.0000012772`

`For x = -0.770000, the value of arctanh1 = -1.0203265091, arctanh2 = -1.0203277583, and the diff= 0.0000012492`

`For x = -0.760000, the value of arctanh1 = -0.9962143754, arctanh2 = -0.9962150823, and the diff= 0.0000007069`

`For x = -0.750000, the value of arctanh1 = -0.9729543329, arctanh2 = -0.9729550745, and the diff= 0.0000007416`

`For x = -0.740000, the value of arctanh1 = -0.9504785623, arctanh2 = -0.9504793806, and the diff= 0.0000008183`

`For x = -0.730000, the value of arctanh1 = -0.9287264135, arctanh2 = -0.9287273642, and the diff= 0.0000009507`

`For x = -0.720000, the value of arctanh1 = -0.9076444126, arctanh2 = -0.9076449833, and the diff= 0.0000005707`

`For x = -0.710000, the value of arctanh1 = -0.8871831485, arctanh2 = -0.8871838633, and the diff= 0.0000007148`

`For x = -0.700000, the value of arctanh1 = -0.8673000913, arctanh2 = -0.8673005277, and the diff= 0.0000004364`
...
 
 ==== >(truncated)
