// 函数: sub_522840
// 地址: 0x522840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (arg2 == 1)
    result = arg1
    
    if (*(result + 8) != sub_519270)
        *(result + 8) = sub_519270
        *(result + 4) = 1
else if (arg2 == 2)
    result = arg1
    
    if (*(result + 8) != sub_519290)
        *(result + 8) = sub_519290
        *(result + 4) = 1
else
    result = arg2 - 3
    
    if (arg2 == 3)
        result = arg1
        
        if (*(result + 8) != sub_5192b0)
            *(result + 8) = sub_5192b0
            *(result + 4) = 1

return result
