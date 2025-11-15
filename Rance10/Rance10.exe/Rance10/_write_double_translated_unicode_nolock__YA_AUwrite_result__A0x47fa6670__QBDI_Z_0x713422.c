// 函数: ?write_double_translated_unicode_nolock@@YA?AUwrite_result@?A0x47fa6670@@QBDI@Z
// 地址: 0x713422
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ecx
uint32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int16_t* edi_1 = arg2
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
void* eax_1 = arg3 + edi_1

if (edi_1 u< eax_1)
    while (true)
        uint32_t ebx_1 = zx.d(*edi_1)
        int16_t eax_2 = __putwch_nolock(ecx)
        ecx = ebx_1
        
        if (eax_2 == ebx_1.w)
            arg1[1] += 2
            
            if (ebx_1 != 0xa)
                goto label_713474
            
            int16_t eax_3 = __putwch_nolock(ecx)
            ecx = 0xd
            
            if (eax_3 == 0xd)
                arg1[1] += 1
                arg1[2] += 1
            label_713474:
                edi_1 = &edi_1[1]
                
                if (edi_1 u>= eax_1)
                    break
                
                continue
        
        *arg1 = GetLastError()
        break

return arg1
