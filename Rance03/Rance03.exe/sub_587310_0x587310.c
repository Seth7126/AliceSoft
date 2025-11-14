// 函数: sub_587310
// 地址: 0x587310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t eax

if (*(arg1 + 0x23d) != 0)
    int32_t ecx
    int32_t edx_1
    eax, ecx, edx_1 = sub_587260(arg1)
    
    if (eax.b != 0)
        sub_59f4e0(eax, edx_1, ecx, 0x6e5720, arg2)
        enum MESSAGEBOX_RESULT eax_1
        eax_1.b = 0
        return eax_1
    
    if (*(arg1 + 0x16c) s>= 1)
        int32_t ecx_2
        int32_t edx_2
        eax, ecx_2, edx_2 = sub_587120(arg1)
        
        if (eax.b == 0)
            sub_59f4e0(eax, edx_2, ecx_2, 0x6e5818, arg2)
            enum MESSAGEBOX_RESULT eax_2
            eax_2.b = 0
            return eax_2
    
    *(arg1 + 0x22c) = 0
    *(arg1 + 0x23d) = 0

eax.b = 1
return eax
