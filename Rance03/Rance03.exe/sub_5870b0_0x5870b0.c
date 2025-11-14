// 函数: sub_5870b0
// 地址: 0x5870b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t eax

if (*(arg1 + 0x23d) == 0 && *(arg1 + 0x218) != 0)
    void* ecx = *(arg1 + 0x214)
    
    if (ecx != 0)
        data_74b43c = 0
        int32_t ecx_1
        int32_t edx_1
        int80_t st0_1
        st0_1, eax, ecx_1, edx_1 = sub_58ae40(ecx)
        
        if (eax.b == 0)
            sub_59f4e0(eax, edx_1, ecx_1, 0x6e5780, arg2)
            sub_59f610()
            data_74b43c = 1
            enum MESSAGEBOX_RESULT eax_1
            eax_1.b = 0
            *(arg1 + 0x218) = 0
            return eax_1
        
        data_74b43c = 1

eax.b = 1
return eax
