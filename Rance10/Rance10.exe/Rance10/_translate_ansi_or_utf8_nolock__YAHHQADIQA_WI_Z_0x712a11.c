// 函数: ?translate_ansi_or_utf8_nolock@@YAHHQADIQA_WI@Z
// 地址: 0x712a11
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t result = translate_text_mode_nolock<char>(arg1, arg2, arg3)

if (result != 0)
    int32_t edx_2 = arg1 s>> 6
    int32_t edi
    int32_t var_14_1 = edi
    int32_t edi_1 = (arg1 & 0x3f) * 0x30
    int32_t eax_2 = (&data_7fc718)[edx_2]
    int32_t var_c_1 = eax_2
    
    if (*(eax_2 + edi_1 + 0x29) != 0)
        void* esi_2 = &arg2[0xffffffff + result]
        eax_2.b = *esi_2
        
        if (eax_2.b s< 0)
            uint32_t eax_3 = zx.d(eax_2.b)
            int32_t edx_3 = 1
            
            while (*(eax_3 + 0x7e1560) == 0)
                if (edx_3 u> 4)
                    break
                
                if (esi_2 u< arg2)
                    break
                
                esi_2 -= 1
                edx_3 += 1
                eax_3 = zx.d(*esi_2)
            
            int32_t ecx_1
            ecx_1.b = *esi_2
            int32_t eax_5 = sx.d(*(zx.d(ecx_1.b) + 0x7e1560))
            
            if (eax_5 != 0)
                if (eax_5 + 1 == edx_3)
                    esi_2 += edx_3
                else if ((*(var_c_1 + edi_1 + 0x28) & 0x48) == 0)
                    int32_t eax_11
                    int32_t edx_5
                    edx_5:eax_11 = sx.q(neg.d(edx_3))
                    __lseeki64_nolock(arg1, eax_11, edx_5, FILE_CURRENT)
                else
                    char* esi_3 = esi_2 + 1
                    *(var_c_1 + edi_1 + 0x2a) = ecx_1.b
                    
                    if (edx_3 u>= 2)
                        int32_t eax_8
                        eax_8.b = *esi_3
                        esi_3 = &esi_3[1]
                        *((&data_7fc718)[edx_2] + edi_1 + 0x2b) = eax_8.b
                    
                    if (edx_3 == 3)
                        int32_t eax_9
                        eax_9.b = *esi_3
                        esi_3 = &esi_3[1]
                        *((&data_7fc718)[edx_2] + edi_1 + 0x2c) = eax_9.b
                    
                    esi_2 = esi_3 - edx_3
                
                goto label_712b10
            
            *__errno() = 0x2a
            result = 0xffffffff
        else
            esi_2 += 1
        label_712b10:
            void* cbMultiByte = esi_2 - arg2
            int32_t eax_12 = MultiByteToWideChar(0xfde9, 0, arg2, cbMultiByte, arg4, arg5)
            
            if (eax_12 != 0)
                int32_t ecx_6 = (&data_7fc718)[edx_2]
                int32_t eax_14
                eax_14.b = eax_12 != cbMultiByte
                eax_14.b *= 2
                eax_14.b ^= *(ecx_6 + edi_1 + 0x2d)
                eax_14.b &= 2
                *(ecx_6 + edi_1 + 0x2d) ^= eax_14.b
                result = eax_12 * 2
            else
                ___acrt_errno_map_os_error(GetLastError())
                result = 0xffffffff

return result
