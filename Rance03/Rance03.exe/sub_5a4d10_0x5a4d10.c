// 函数: sub_5a4d10
// 地址: 0x5a4d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ecx_1 != 0)
                int32_t var_c = 0
                int32_t var_8_1 = 0
                int32_t var_4_1 = 0
                
                if (sub_541bc0(ecx_1, arg4, &var_c).b != 0)
                    *arg5 = var_c
                    *arg6 = var_8_1
                    *arg7 = var_4_1
                    int32_t* eax_6
                    eax_6.b = 1
                    return eax_6

arg1.b = 0
return arg1
