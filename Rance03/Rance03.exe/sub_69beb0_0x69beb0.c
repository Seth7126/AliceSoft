// 函数: sub_69beb0
// 地址: 0x69beb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[3].b = 0

if (arg2 != 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
else
    uint32_t* eax = __getptd()
    arg1[2] = eax
    int32_t edx_1 = eax[0x1b]
    *arg1 = edx_1
    arg1[1] = eax[0x1a]
    
    if (edx_1 != data_74adfc && (eax[0x1c] & data_74aec0) == 0)
        *arg1 = sub_6a5929()
    
    if (arg1[1] != data_74ab9c && (*(arg1[2] + 0x70) & data_74aec0) == 0)
        arg1[1] = sub_6a5cab()
    
    void* ecx_3 = arg1[2]
    int32_t eax_6 = *(ecx_3 + 0x70)
    
    if ((eax_6.b & 2) == 0)
        *(ecx_3 + 0x70) = eax_6 | 2
        arg1[3].b = 1

return arg1
