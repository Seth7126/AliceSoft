// 函数: sub_4a55e0
// 地址: 0x4a55e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t arg_4
int32_t edi = arg_4
int32_t* eax

if (edi s> 0)
    arg_4 = edi s/ 0x2710
    sub_42f3d0(&arg1[7], &var_4, &arg_4)
    eax = var_4
    
    if (eax != arg1[7])
        void* ecx_1 = eax[5]
        
        if (ecx_1 != 0)
            int32_t edx_3 = *(ecx_1 + 8)
            
            if (edi s>= edx_3 && *(ecx_1 + 4) + edx_3 s> edi)
                int32_t eax_6
                eax_6.b = *(*(ecx_1 + 0xc) + ((edi - edx_3) << 2)) != 0
                return eax_6

eax.b = 0
return eax
