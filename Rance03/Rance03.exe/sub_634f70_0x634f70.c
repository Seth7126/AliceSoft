// 函数: sub_634f70
// 地址: 0x634f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result
result.b = *(arg1 + 9)

if (result.b u< 8)
    void* ebx_2 = *(arg1 + 4) + arg2
    int32_t esi_1
    
    if (result.b != 1)
        if (result.b == 2)
            esi_1 = 0x6f1b30
            goto label_634fa0
        
        if (result.b == 4)
            esi_1 = 0x6f1d30
            goto label_634fa0
    else
        esi_1 = 0x6f1c30
    label_634fa0:
        result = 0
        void* edi_2 = ebx_2 - arg2
        int32_t ecx = 0
        
        if (arg2 u> ebx_2)
            edi_2 = nullptr
        
        if (edi_2 != 0)
            do
                result = zx.d(*arg2)
                arg2 = &arg2[1]
                ecx += 1
                result.b = *(result + esi_1)
                arg2[0xffffffff] = result.b
            while (ecx u< edi_2)

return result
