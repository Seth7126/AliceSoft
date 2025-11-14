// 函数: sub_48c300
// 地址: 0x48c300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 8
    
    do
        if (result != 0)
            *result = 0
            result[1] = 0
            result[2] = 0
            *result = esi_1[-2]
            result[1] = esi_1[-1]
            result[2] = *esi_1
            esi_1[-2] = 0
            esi_1[-1] = 0
            *esi_1 = 0
        
        esi_1 = &esi_1[3]
        result = &result[3]
    while (&esi_1[-2] != arg2)

return result
