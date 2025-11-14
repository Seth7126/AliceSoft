// 函数: sub_520050
// 地址: 0x520050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x1c) != 0)
        goto label_520089
    
    if (sub_5200e0(arg1) != 0)
        *(arg1 + 0x1c) = 1
    label_520089:
        int32_t edi = *(arg1 + 0x28)
        void** eax_2 = sub_417ed0(arg1 + 0x28, arg2)
        
        if (eax_2 != *(arg1 + 0x28) && sub_40c3a0(arg2, &eax_2[4]) == 0)
            int32_t eax_5
            eax_5.b = eax_2 != edi
            return eax_5
        
        int32_t eax_7
        eax_7.b = *(arg1 + 0x28) != edi
        return eax_7
else
    sub_64b530(0x6e313c)

return 0
