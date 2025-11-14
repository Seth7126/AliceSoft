// 函数: sub_5cb1e0
// 地址: 0x5cb1e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t edx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_4)
    eax_4 = arg1[0x5d]
    ecx = *(eax_4 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_5 = sub_5d40f0(ecx, edx)
        int32_t eax_6 = arg1[0x8b]
        int32_t edi_2 = (arg1[0x8d] - arg1[0x8a]) s>> 2
        
        if (edi_2 + 1 u>= eax_6)
            sub_64ad90(&arg1[0x89], eax_6 * 2)
            arg1[0x8d] = arg1[0x8a] + (edi_2 << 2)
        
        uint32_t* result = arg1[0x8d]
        *result = eax_5
        arg1[0x8d] += 4
        return result

return sub_5c24e0(eax_4, edx, ecx, arg1, 0x6e8c90)
