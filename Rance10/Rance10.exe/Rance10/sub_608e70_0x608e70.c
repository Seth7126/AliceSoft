// 函数: sub_608e70
// 地址: 0x608e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_61ed80(arg2, arg1).b != 0)
    char* ecx_1 = *(arg2 + 4)
    
    if (&ecx_1[4] u<= *(arg2 + 8))
        int32_t ebx_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg2 + 4) = &ecx_1[4]
        
        if (ebx_7 s> 0)
            int32_t eax_2 = arg1[7]
            
            for (void* i = arg1[6]; i != eax_2; i += 0x30)
                sub_609410(i)
            
            arg1[7] = arg1[6]
            sub_608ff0(&arg1[6], ebx_7)
            int32_t esi_1 = 0
            
            if (ebx_7 s> 0)
                int32_t edi_1 = 0
                
                do
                    if (sub_609480(arg1[6] + edi_1, arg2, esi_1).b == 0)
                        goto label_608f2b
                    
                    esi_1 += 1
                    edi_1 += 0x30
                while (esi_1 s< ebx_7)
        
        result.b = 1
        return result

label_608f2b:
result.b = 0
return result
