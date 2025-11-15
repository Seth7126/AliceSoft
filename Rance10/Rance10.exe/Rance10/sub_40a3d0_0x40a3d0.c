// 函数: sub_40a3d0
// 地址: 0x40a3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
uint32_t edi_3 = (arg2 - arg3 + 3) u>> 2

if (arg3 u> arg2)
    edi_3 = 0

int32_t* result = arg4

if (edi_3 != 0)
    int32_t* ebx_1 = arg3 - result
    
    do
        if (result != 0)
            int32_t ecx = *(ebx_1 + result)
            *(ebx_1 + result) = 0
            *result = ecx
        
        esi += 1
        result = &result[1]
    while (esi != edi_3)

return result
