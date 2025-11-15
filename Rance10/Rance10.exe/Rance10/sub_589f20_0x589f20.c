// 函数: sub_589f20
// 地址: 0x589f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d9be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_2c = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1
int32_t* var_18 = eax_3
int32_t* edx = arg2
int32_t esi = 0
int32_t ecx_2 = (edx[1] - *edx) s>> 3
int32_t var_1c = ecx_2

if (ecx_2 s> 0)
    do
        if (esi s>= 0)
            int32_t edi_1 = *eax_3
            
            if (esi s< (eax_3[1] - edi_1) s>> 2 && *(edi_1 + (esi << 2)) != 0)
                void var_24
                int32_t* edx_1 = sub_586e30(edx, &var_24, esi)
                int32_t var_8_1 = 0
                void* ecx_4 = *(edi_1 + (esi << 2))
                int32_t* eax_7
                
                if (*(ecx_4 + 8) == 0)
                    ebx.b = 1
                else if (*(ecx_4 + 4) != 8)
                    ebx.b = 1
                else if (*(ecx_4 + 0x4c) != 0)
                    eax_7.b = *(ecx_4 + 0x50)
                    
                    if (eax_7.b == 0)
                        ebx.b = sub_5a8a10(*(ecx_4 + 0x4c), *(*edx_1 + 0x178), edx_1).b != 0
                    else
                        ebx.b = 1
                else
                    ebx.b = 1
                
                int32_t var_8_2 = 1
                int32_t* var_20
                
                if (var_20 != 0)
                    bool cond:0_1 = var_20[1] != 1
                    var_20[1]
                    var_20[1] -= 1
                    
                    if (not(cond:0_1))
                        (**var_20)(eax_2)
                        bool cond:1_1 = var_20[2] != 1
                        var_20[2]
                        var_20[2] -= 1
                        
                        if (not(cond:1_1))
                            (*(*var_20 + 4))()
                
                int32_t var_8_3 = 0xffffffff
                
                if (ebx.b == 0)
                    eax_7.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_7
                
                ecx_2 = var_1c
                edx = arg2
            
            eax_3 = var_18
        
        esi += 1
    while (esi s< ecx_2)

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
