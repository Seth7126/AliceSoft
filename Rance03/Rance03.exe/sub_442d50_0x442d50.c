// 函数: sub_442d50
// 地址: 0x442d50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_442cb0(arg1)
int32_t var_c = arg2
BOOL eax
int32_t ecx_1
eax, ecx_1 = sub_4421b0(arg1 + 0x1c)

if (eax.b != 0)
    eax = *(arg1 + 0xcc)
    
    if (eax != *(arg1 + 0xd0))
        void* ecx_2 = *(data_75d4e4 + 0x93c)
        
        if (ecx_2 != 0 && sub_4760b0(ecx_2, arg3, eax, *(arg1 + 0xd0) - eax, arg4).b != 0)
            void* ecx_3 = *(data_75d4e4 + 0x93c)
            
            if (ecx_3 != 0)
                int32_t var_c_2 = 1
                eax = sub_46ef10(ecx_3 + 0x78, arg3)
                
                if (eax != 0)
                    (*(**(eax + 4) + 0x28))(1)
                    *(arg1 + 0x42c) = arg3
                    int32_t eax_2
                    eax_2.b = 1
                    return eax_2
    else if (data_75d534 != 0)
        int32_t var_c_3 = ecx_1
        eax = sub_6203f0()
        
        if (eax != 0)
            *(arg1 + 0x430) = (**eax)(0x6db458)
            int32_t eax_3
            eax_3.b = 1
            return eax_3

eax.b = 0
return eax
