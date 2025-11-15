// 函数: sub_608530
// 地址: 0x608530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi_1 = arg1 - 1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 - 1 s>= 0)
    int32_t __saved_ebp
    int32_t eax_4 = (*(*(arg3 + 0x20) + 8))(__security_cookie ^ &__saved_ebp)
    
    if (esi_1 s>= (arg2[2] - arg2[1]) s>> 2)
    label_60867f:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    arg2[1][esi_1] = eax_4
    
    if (esi_1 != 0)
        int32_t i = 0
        
        if (eax_4 s> 0)
            while (i u< *(arg3 + 0x14) u>> 2)
                result = sub_622840(arg4, *(*(arg3 + 0x10) + (i << 2)))
                
                if (result == 0)
                    break
                
                if (sub_608530(esi_1, arg2, result, arg4).b == 0)
                    break
                
                i += 1
                
                if (i s>= eax_4)
                    goto label_6086d7
            
            goto label_60867f
    else
        char* var_20 = esi_1
        char* var_8_1 = esi_1
        uint32_t var_24 = (**(arg3 + 0x20))()
        sub_42c9c0(&var_20, eax_4)
        uint32_t edx_1 = var_24
        
        if (edx_1 - 0xa u> 0x52)
        label_60862c:
            int32_t esi_2 = 0
            
            if (eax_4 s> 0)
                while (true)
                    if (esi_2 u< *(arg3 + 0x14) u>> 2 && sub_608330(edx_1, 
                            *(*(arg3 + 0x10) + (esi_2 << 2)), &var_20[esi_2 << 2], arg4).b != 0)
                        esi_2 += 1
                        
                        if (esi_2 s>= eax_4)
                            goto label_608603
                        
                        edx_1 = var_24
                        continue
                    
                    char* ecx_12 = var_20
                    
                    if (ecx_12 != 0)
                        sub_403160(ecx_12, (esi_1 - ecx_12) s>> 2, 4)
                    
                    break
                
                goto label_60867f
        else
            switch (edx_1)
                case 0xa, 0xb, 0x2f, 0x5c
                    char* edx_2 = var_20
                    
                    if (edx_2 != esi_1)
                        char* ecx_7
                        
                        if (*(arg3 + 0x14) != 0)
                            ecx_7 = *(arg3 + 0x10)
                        else
                            ecx_7 = nullptr
                        
                        sub_700660(edx_2, ecx_7, eax_4 << 2)
                case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                        0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                        0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x30, 0x31, 
                        0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 
                        0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 
                        0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 
                        0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b
                    goto label_60862c
        
    label_608603:
        sub_608be0(&arg2[4], &var_24)
        char* ecx_10 = var_20
        
        if (ecx_10 != 0)
            sub_403160(ecx_10, (esi_1 - ecx_10) s>> 2, 4)

label_6086d7:
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
