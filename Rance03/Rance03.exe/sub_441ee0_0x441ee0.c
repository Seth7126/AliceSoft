// 函数: sub_441ee0
// 地址: 0x441ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = &arg1[0x40]
int32_t edx = 0
uint32_t esi_3 = (result - arg1 + 1) u>> 1

if (arg1 u> result)
    esi_3 = 0

if (esi_3 != 0)
    result.w = arg2
    
    do
        edx += 1
        *arg1 = result.w
        arg1 = &arg1[1]
    while (edx != esi_3)

return result
