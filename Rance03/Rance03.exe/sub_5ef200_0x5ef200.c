// 函数: sub_5ef200
// 地址: 0x5ef200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = (*(*arg1 + 8))(0, 0)
int32_t* result = (*(*arg1 + 0x1c))() - arg2
int32_t i_1 = arg3
arg1 = result

if (i_1 s> 0)
    int32_t i
    
    do
        if (arg2 s> 0)
            int32_t edi_3 = __builtin_memset(esi, 0, arg2 u>> 2 << 2)
            esi += arg2
            __builtin_memset(edi_3, 0, arg2 & 3)
            result = arg1
        
        esi += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
