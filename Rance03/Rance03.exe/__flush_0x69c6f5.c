// 函数: __flush
// 地址: 0x69c6f5
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0

if (((arg1[3]).b & 3) == 2 && (arg1[3] & 0x108) != 0)
    uint32_t edi_2 = *arg1 - arg1[2]
    
    if (edi_2 s> 0)
        if (sub_6a40fd(__fileno(arg1), arg1[2], edi_2) != edi_2)
            arg1[3] |= 0x20
            result = 0xffffffff
        else
            int32_t eax_3 = arg1[3]
            
            if (eax_3.b s< 0)
                arg1[3] = eax_3 & 0xfffffffd

int32_t ecx_2 = arg1[2]
arg1[1] = 0
*arg1 = ecx_2
return result
