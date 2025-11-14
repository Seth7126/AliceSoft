// 函数: sub_587050
// 地址: 0x587050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax

if (*(arg1 + 0x23d) == 0)
    eax = *(arg1 + 0x214)
    
    if (eax != 0)
        int32_t var_c_1 = *(arg1 + 0x230)
        data_74b43c = 0
        int32_t ecx_1
        int32_t edx_1
        eax, ecx_1, edx_1 = sub_58a8e0(eax, var_c_1)
        
        if (eax.b == 0)
            void var_8
            sub_59f4e0(eax, edx_1, ecx_1, 0x6e579c, var_8)
            sub_59f610()
            data_74b43c = 1
            enum MESSAGEBOX_RESULT eax_1
            eax_1.b = 0
            return eax_1
        
        data_74b43c = 1

eax.b = 1
return eax
