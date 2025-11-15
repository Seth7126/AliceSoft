// 函数: sub_65d010
// 地址: 0x65d010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x194) != 0)
label_65d033:
    int32_t ecx_2 = *(*(arg1 + 0x1ac) + 0x10)
    
    if (*(arg1 + 0x194) == ecx_2 + 0xd0)
        *(*arg1 + 0x14) = 0x64
        *(*arg1 + 0x18) = *(*(arg1 + 0x1ac) + 0x10)
        (*(*arg1 + 4))(arg1, 3)
        void* ecx_4 = *(arg1 + 0x1ac)
        *(arg1 + 0x194) = 0
        *(ecx_4 + 0x10) = (*(ecx_4 + 0x10) + 1) & 7
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    
    if ((*(*(arg1 + 0x18) + 0x14))(arg1, ecx_2) != 0)
        void* ecx_5 = *(arg1 + 0x1ac)
        *(ecx_5 + 0x10) = (*(ecx_5 + 0x10) + 1) & 7
        int32_t eax_16
        eax_16.b = 1
        return eax_16
else if (sub_65cb50(arg1) != 0)
    goto label_65d033

return 0
