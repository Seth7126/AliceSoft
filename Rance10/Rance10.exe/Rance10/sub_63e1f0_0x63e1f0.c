// 函数: sub_63e1f0
// 地址: 0x63e1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = (*(*arg1 + 8))(0, 0)
int32_t* result = (*(*arg1 + 0x1c))() - arg2
int32_t i_1 = arg3
arg1 = result

if (i_1 s> 0)
    int32_t i
    
    do
        if (arg2 s> 0)
            int32_t edi_2 = __builtin_memset(esi, 0, arg2 u>> 2 << 2)
            esi += arg2
            __builtin_memset(edi_2, 0, arg2 & 3)
            result = arg1
        
        esi += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
