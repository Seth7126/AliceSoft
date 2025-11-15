// 函数: sub_4b1760
// 地址: 0x4b1760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
int32_t edi = arg2

if (ebx[1] == 1)
    int32_t edx_1 = *(arg1 + 0xbc)
    int32_t edx_2 = neg.d(edx_1)
    
    if (edi == (sbb.d(edx_2, edx_2, edx_1 != 0) & (edx_1 + 0xc)))
    label_4b17c8:
        void* ebp_1 = data_7fcb64
        
        if (sub_47d5a0(ebp_1) != 0)
            (***(ebp_1 + 0xc))(&arg2, &arg3)
        
        *(arg1 + 0x170) = (*(**(*(arg1 + 0xbc) + 0x74) + 0x44))(arg2, arg3, 1)
        *(arg1 + 0x171) = (*(**(*(arg1 + 0xc0) + 0x74) + 0x44))(arg2, arg3, 1)
        *(arg1 + 0x172) = (*(**(*(arg1 + 0xc4) + 0x74) + 0x44))(arg2, arg3, 1)
        *(arg1 + 0x173) = (*(**(*(arg1 + 0xc8) + 0x74) + 0x44))(arg2, arg3, 1)
    else
        int32_t ecx = *(arg1 + 0xc0)
        int32_t ecx_1 = neg.d(ecx)
        
        if (edi == (sbb.d(ecx_1, ecx_1, ecx != 0) & (ecx + 0xc)))
            goto label_4b17c8
        
        int32_t ecx_4 = *(arg1 + 0xc4)
        int32_t ecx_5 = neg.d(ecx_4)
        
        if (edi == (sbb.d(ecx_5, ecx_5, ecx_4 != 0) & (ecx_4 + 0xc)))
            goto label_4b17c8
        
        int32_t ecx_8 = *(arg1 + 0xc8)
        int32_t ecx_9 = neg.d(ecx_8)
        
        if (edi == (sbb.d(ecx_9, ecx_9, ecx_8 != 0) & (ecx_8 + 0xc)))
            goto label_4b17c8

return sub_4cbd50(arg1 + 0xc, ebx, edi)
