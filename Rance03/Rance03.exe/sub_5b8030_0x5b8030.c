// 函数: sub_5b8030
// 地址: 0x5b8030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
enum MESSAGEBOX_RESULT eax_6

if (arg3 s< (*(arg1 + 0x2c) - *(arg1 + 0x28)) s/ 0x1c)
    int32_t ebx_1 = *arg2
    int32_t* esi_1 = *(arg1 + 0x28) + arg3 * 0x1c
    
    if (ebx_1 s>= 0)
        void* ebx_2
        
        if (ebx_1 u< (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
            ebx_2 = *(*(arg4 + 8) + (ebx_1 << 2))
        
        if (ebx_1 u>= (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2 || ebx_2 == 0)
            sub_64b530("CGlobalLoader::WriteArray()\n")
        else
            int32_t eax_11 = *esi_1
            int32_t var_14[0x4]
            
            if (eax_11 s> 0)
                int32_t i = 0
                
                if (eax_11 s> 0)
                    do
                        if (i s>= (esi_1[2] - esi_1[1]) s>> 2)
                            goto label_5b8186
                        
                        var_14[i] = *(esi_1[1] + (i << 2))
                        i += 1
                    while (i s< *esi_1)
            
            if (*(ebx_2 + 0x48) != 0)
                eax_6 = sub_5d4a90(ebx_2)
            
            if (*(ebx_2 + 0x48) == 0 || eax_6.b != 0)
                int32_t eax_20 = *esi_1
                
                if (eax_20 s<= 0)
                    eax_20.b = 1
                    sub_69a5bc(eax_1 ^ &var_20)
                    return eax_20
                
                if (sub_5d4340(ebx_2, eax_20, &var_14, 0).b != 0)
                    int32_t ecx_7 = *arg2
                    
                    if (ecx_7 u< (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
                        eax_6 = *(*(arg4 + 8) + (ecx_7 << 2))
                        
                        if (eax_6 != 0)
                            int32_t var_1c = 0
                            bool eax_19 = sub_5b81a0(arg1, *esi_1, esi_1, eax_6, &var_1c, arg4) != 0
                            sub_69a5bc(eax_1 ^ &var_20)
                            return eax_19
else
    sub_64b530("WriteArray error")

label_5b8186:
eax_6.b = 0
sub_69a5bc(eax_1 ^ &var_20)
return eax_6
