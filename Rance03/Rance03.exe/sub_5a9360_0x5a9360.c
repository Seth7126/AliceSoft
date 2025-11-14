// 函数: sub_5a9360
// 地址: 0x5a9360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* esi_2 = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (esi_2 != 0)
            int32_t var_60
            __builtin_memset(&var_60, 0, 0x18)
            int32_t var_54
            
            if (sub_587d30(esi_2 + 0x14, arg2, arg4, &var_54, &var_60).b != 0)
                void var_48
                sub_52d450(esi_2 + 0x38, &var_48)
                int32_t var_6c = 0
                int32_t var_68_1 = 0
                int32_t var_64_1 = 0
                
                if (sub_524d10(esi_2 + 0x1d8, &var_54, &var_60, &var_48, &var_6c).b != 0)
                    *arg5 = var_6c
                    *arg6 = var_68_1
                    *arg7 = var_64_1
                    int32_t* eax_4
                    eax_4.b = 1
                    return eax_4

arg1.b = 0
return arg1
