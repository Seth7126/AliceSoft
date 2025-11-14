// 函数: sub_5a49f0
// 地址: 0x5a49f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
int32_t eax_1 = __security_cookie ^ &var_28

if (arg3 s>= 0)
    void* edx = data_75d508
    
    if (arg3 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* edx_1 = *(*(edx + 0x50) + (arg3 << 2))
        
        if (edx_1 != 0 && arg2 s>= 0 && arg2 s< (*(edx_1 + 0x20) - *(edx_1 + 0x1c)) s>> 2)
            void* esi_1 = *(*(edx_1 + 0x1c) + (arg2 << 2))
            
            if (esi_1 != 0)
                int32_t var_24
                sub_401f60(&var_24, (**arg4)())
                int32_t result
                
                if (*(esi_1 + 0x15c) == 0)
                    result = 0xffffffff
                else if (*(esi_1 + 0x160) == 0)
                    void* ecx_2 = *(*(esi_1 + 0x15c) + 0x10)
                    
                    if (ecx_2 != 0)
                        result = sub_54d1e0(ecx_2, &var_24)
                    else
                        result = 0xffffffff
                else
                    result = 0xffffffff
                
                int32_t var_10
                
                if (var_10 u>= 0x10)
                    j__free(var_24)
                
                sub_69a5bc(eax_1 ^ &var_28)
                return result

sub_69a5bc(eax_1 ^ &var_28)
return 0xffffffff
