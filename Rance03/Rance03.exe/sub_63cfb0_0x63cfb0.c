// 函数: sub_63cfb0
// 地址: 0x63cfb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[6]

if (ecx - arg2 s<= arg1[7])
    if (ecx s> 0x7fffffff - arg2)
        sub_63cf00(arg1)
        return 0xffffffff
    
    int32_t edi_1 = ecx + arg2
    
    if (edi_1 s< 0x7fffffdf)
        edi_1 += 0x20
    
    int32_t eax_5 = _realloc(arg1[4], edi_1 << 2)
    
    if (eax_5 == 0)
        sub_63cf00(arg1)
        return 0xffffffff
    
    arg1[4] = eax_5
    int32_t eax_7 = _realloc(arg1[5], edi_1 << 3)
    
    if (eax_7 == 0)
        sub_63cf00(arg1)
        return 0xffffffff
    
    arg1[5] = eax_7
    arg1[6] = edi_1

return 0
