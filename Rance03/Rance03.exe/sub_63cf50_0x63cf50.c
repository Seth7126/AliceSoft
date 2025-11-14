// 函数: sub_63cf50
// 地址: 0x63cf50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]

if (ecx - arg2 s<= arg1[2])
    int32_t eax_4
    uint32_t edi_1
    
    if (ecx s<= 0x7fffffff - arg2)
        edi_1 = ecx + arg2
        
        if (edi_1 s< 0x7ffffbff)
            edi_1 += 0x400
        
        eax_4 = _realloc(*arg1, edi_1)
    
    if (ecx s> 0x7fffffff - arg2 || eax_4 == 0)
        sub_63cf00(arg1)
        return 0xffffffff
    
    arg1[1] = edi_1
    *arg1 = eax_4

return 0
