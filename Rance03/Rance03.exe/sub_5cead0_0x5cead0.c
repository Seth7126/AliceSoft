// 函数: sub_5cead0
// 地址: 0x5cead0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
int32_t eax_2 = (*(edx + 0x178) - *(edx + 0x174)) s>> 2

if (arg2 u< eax_2)
    eax_2 = *(edx + 0x174)
    arg1 = *(eax_2 + (arg2 << 2))
    
    if (arg1 != 0)
        int32_t edi = *(arg1 + 0xc)
        uint32_t eax_4 = edi u>> 2
        
        if (arg3 u>= eax_4)
            uint32_t var_10 = edi u>> 2
            int32_t var_14 = arg4
            int32_t var_18 = arg3
            int32_t var_1c = arg2
            int32_t var_20 = 0x6e9c78
            return sub_5c2400(eax_4, edx, arg1, edx, "system.ResumeSave")
        
        if (edi != 0)
            *(*(arg1 + 8) + (arg3 << 2)) = arg4
            int32_t eax_6
            eax_6.b = 1
            return eax_6
        
        *(arg3 << 2) = arg4
        int32_t eax_5
        eax_5.b = 1
        return eax_5

int32_t var_10_1 = arg3
int32_t var_14_1 = arg2
int32_t var_18_1 = 0x6e9cc4
return sub_5c2400(eax_2, edx, arg1, edx, "system.ResumeSave")
