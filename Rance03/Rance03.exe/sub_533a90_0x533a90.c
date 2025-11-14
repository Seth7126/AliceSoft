// 函数: sub_533a90
// 地址: 0x533a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t* result = arg2
int64_t* esi = arg1

while (esi != result)
    result -= 0xc
    
    if (esi == result)
        break
    
    int64_t xmm1_1 = *esi
    int32_t edx_1 = esi[1].d
    *esi = *result
    esi[1].d = result[1].d
    esi += 0xc
    *result = xmm1_1
    result[1].d = edx_1

return result
