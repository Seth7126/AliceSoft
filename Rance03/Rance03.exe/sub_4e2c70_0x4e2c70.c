// 函数: sub_4e2c70
// 地址: 0x4e2c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (arg2 == 1)
    result = arg1
    
    if (*(result + 8) != sub_4d2f90)
        *(result + 8) = sub_4d2f90
        *(result + 4) = 1
else if (arg2 == 2)
    result = arg1
    
    if (*(result + 8) != sub_4d2fb0)
        *(result + 8) = sub_4d2fb0
        *(result + 4) = 1
else
    result = arg2 - 3
    
    if (arg2 == 3)
        result = arg1
        
        if (*(result + 8) != sub_4d2fd0)
            *(result + 8) = sub_4d2fd0
            *(result + 4) = 1

return result
