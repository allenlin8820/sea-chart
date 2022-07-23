# 海圖說明書


首先輸入總共有幾個座標

把每個座標相連的兩個島嶼看成一個座標

以1號島嶼跟2號島與相連來說 座標就是1 2

第一行先輸入每組的1號島嶼

第二行再輸入每組的2號島嶼

我以題目給的範例示範

結果會長這樣 如下圖  
![image1](https://user-images.githubusercontent.com/19874467/180593976-78fa3107-0ae9-4493-8dea-3e56e8b50b40.png)



而按下ENTER的同時

也會把所有配對跑完

首先 他會先跑第一個座標0 5

因為0號島嶼跟5號島嶼中間有路徑

所以結果顯示為1 就代表1條路徑

如下圖  
![image2](https://user-images.githubusercontent.com/19874467/180593984-b25593f1-0cb6-4418-84bf-8f6f0c581c05.png)



接下來看第二個座標4 3

因為4號島嶼跟3號島嶼中間有路徑

而且沒有跟前面已經確定有的路徑0 5有重複到島與

所以顯示為有2條路徑

如下圖  
![image3](https://user-images.githubusercontent.com/19874467/180593995-2a45560d-f0e7-49f9-a7b3-40c2c6a555e0.png)



第三個座標0 1

因為0號島嶼跟1號島嶼有跟第一個座標0 5重複到島嶼

所以這三個將會形成一個島嶼

而路徑就維持上一個檢查完的

有4 3和0 5 1路徑 顯示還是有2條路徑

如下圖  

![image4](https://user-images.githubusercontent.com/19874467/180594019-d09f3c45-7cad-43d2-ba9e-bad3ae6db4b8.png)


第四個座標 9 12

因為沒有與前面的重複島嶼

所以為新的路徑

加上前面的 現在總共有3條路徑

如下圖  
![image5](https://user-images.githubusercontent.com/19874467/180594038-b595a237-d313-40ac-8c40-9b81e8196583.png)



第五個座標 6 4

因為4號島嶼與前面的4 3座標有重疊島嶼

所以納入同一個島嶼中 而路徑維持3條

如下圖  
![image6](https://user-images.githubusercontent.com/19874467/180594041-9624a984-fe86-4760-95f9-34bbd955e457.png)



第六個座標5 4

這裡因為5跟4都有與前面重複到島嶼

而5跟4分別是不同島嶼 以上面的結果來看

第六個座標會把前面的第1.2條路徑合為1條路徑

最終顯示結果為2條路徑

如下圖  

![image7](https://user-images.githubusercontent.com/19874467/180594045-95e85ca3-d7a0-4f11-8008-2e48260fc744.png)


第七個座標 0 2

因為0有跟前面島嶼重複 所以納入同一條路徑

結果還是為2條路徑

如下圖  
![image8](https://user-images.githubusercontent.com/19874467/180594047-20aa4f74-a50a-4ccf-b47b-aacb44adc5c5.png)



第八個座標 11 12

因為12有跟前面第二條路徑的島嶼重複 所以納入同一條路徑

結果還是有2條路徑

如下圖  

![image9](https://user-images.githubusercontent.com/19874467/180594049-24edbd38-1dd0-46ee-ac57-96300dffbde7.png)


第九個座標9 10

因為9跟前面第二條路徑的島嶼重複 所以納入同一條路徑

結果還是有2條路徑

如下圖  
![image10](https://user-images.githubusercontent.com/19874467/180594053-9bee4588-7c93-41d4-9dc6-e818acad0a28.png)



第十個座標0 6

因為0跟6接有與前面第一條路徑重疊島嶼

所以結果不變為2條路徑

如下圖  

![image11](https://user-images.githubusercontent.com/19874467/180594057-496e3243-1b0a-4b0d-9537-9d41855176d8.png)


第十一個座標7 8

因為新座標7 8 皆沒有跟上面的島嶼重疊

所以形成新的路徑

路徑結果更新為3

如下圖  

![image12](https://user-images.githubusercontent.com/19874467/180594065-ffcbcacb-eebe-40f7-8eb2-ec41d03105a9.png)


第十二個座標9 11

因為島嶼9和11都有和第二條路徑重疊島嶼

所以結果不變 路徑為3

如下圖  

![image13](https://user-images.githubusercontent.com/19874467/180594069-870fbfd7-5b49-4a4c-883b-dfbd3d0eac18.png)


第十三個座標5 3

此為最後一個座標

而5和3島嶼都有和第一條路徑的島嶼重疊

所以結果也不變 路徑顯示為3

最後輸出程式跑完後 計算出的總路線為3條

如下圖  

![image14](https://user-images.githubusercontent.com/19874467/180594071-c195fcc2-f377-491f-88c0-cad11b1e6673.png)



