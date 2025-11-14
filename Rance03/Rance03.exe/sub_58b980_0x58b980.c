// 函数: sub_58b980
// 地址: 0x58b980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t ebp = *(*(arg1 + 4) + 0x4c)
void* eax

if (ebp s> 0 && *(arg1 + 0x124) s>= 2 && *(arg1 + 0x129) != 0)
    void* ecx_1
    eax, ecx_1 = (*(**(arg1 + 8) + 0xa0))()
    
    if (eax.b != 0)
        if (*(arg1 + 0x15c) != *(arg1 + 0x160))
            ecx_1 = *(arg1 + 4)
        
        enum MESSAGEBOX_RESULT eax_4
        
        if (*(arg1 + 0x15c) == *(arg1 + 0x160) || *(arg1 + 0x168) != *(ecx_1 + 0x8c))
            int32_t var_18_1 = *(arg1 + 8)
            int32_t ecx_3
            int32_t edx_1
            eax_4, ecx_3, edx_1 = sub_59b470(arg1 + 0x158, ecx_1, *(*(arg1 + 4) + 0x8c))
            
            if (eax_4.b == 0)
                sub_59f4e0(eax_4, edx_1, ecx_3, 0x6e58a0, arg2)
            label_58ba0c:
                eax_4.b = 0
                return eax_4
        
        void** i = *(arg1 + 0x15c)
        int32_t* ebx_1 = *(arg1 + 8)
        
        for (; i != *(arg1 + 0x160); i = &i[1])
            if (sub_592f30(*i, ebx_1).b == 0)
                goto label_58ba0c
        
        *(arg1 + 0x154) = ebp
        eax_4.b = 1
        *(arg1 + 0x150) = 1
        return eax_4

if (*(arg1 + 0x150) != 0)
    sub_59b570(arg1 + 0x158)
    *(arg1 + 0x150) = 0
    *(arg1 + 0x154) = 0xffffffff

eax.b = 1
return eax
