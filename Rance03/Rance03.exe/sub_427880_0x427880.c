// 函数: sub_427880
// 地址: 0x427880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x88) != *(arg1 + 0x8c))
    int32_t ebx_1 = (zx.d(arg2) - 0x190) << 2
    bool cond:0_1 = SendMessageA(*(*(arg1 + 0x88) + ((zx.d(arg2) - 0x190) << 2)), 0xf0, 0, 0) != 1
    int32_t eax_4 = *(arg1 + 0x88)
    void* ecx
    
    if (cond:0_1)
        SendMessageA(*(ebx_1 + eax_4), 0xf1, 1, 0)
        ecx = *(arg1 + 0x84)
        
        if (zx.d(arg2) - 0x190 s>= 0
                && zx.d(arg2) - 0x190 u<= (*(ecx + 0x4c) - *(ecx + 0x48)) s>> 2)
            *(ebx_1 + *(ecx + 0x48)) = 1
            sub_42e0d0(ecx, nullptr)
    else
        SendMessageA(*(ebx_1 + eax_4), 0xf1, 0, 0)
        ecx = *(arg1 + 0x84)
        
        if (zx.d(arg2) - 0x190 s>= 0
                && zx.d(arg2) - 0x190 u<= (*(ecx + 0x4c) - *(ecx + 0x48)) s>> 2)
            *(ebx_1 + *(ecx + 0x48)) = 0
            sub_42e0d0(ecx, nullptr)
    SendMessageA(*(arg1 + 0x50), 0x111, 0x190, 0)

return 0
