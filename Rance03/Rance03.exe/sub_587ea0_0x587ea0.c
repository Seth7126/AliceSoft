// 函数: sub_587ea0
// 地址: 0x587ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_60
__builtin_memset(&var_60, 0, 0x18)
int32_t var_54

if (sub_587d30(arg1, arg3, arg4, &var_54, &var_60).b != 0 && arg2 s>= 0
        && arg2 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* edi_1 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (edi_1 != 0)
        void var_48
        int32_t* eax_2 = sub_52d450(arg1 + 0x24, &var_48)
        void* ecx_2 = *(edi_1 + 0x1c0)
        
        if (ecx_2 != 0)
            int32_t var_6c_2 = arg5
            return sub_53c710(ecx_2 + 0x9c, &var_54, &var_60, eax_2)
        
        *arg5 = ecx_2
        *(arg5 + 4) = ecx_2
        *(arg5 + 8) = ecx_2

int32_t result
result.b = 0
return result
