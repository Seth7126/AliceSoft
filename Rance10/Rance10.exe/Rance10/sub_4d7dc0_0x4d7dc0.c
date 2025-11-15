// 函数: sub_4d7dc0
// 地址: 0x4d7dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
