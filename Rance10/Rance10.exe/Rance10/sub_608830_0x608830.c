// 函数: sub_608830
// 地址: 0x608830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7429b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_6228d0(arg3, arg2)

if (eax_3 != 0)
    void* ebx_1 = *(eax_3 + 0x38)
    
    if (ebx_1 != 0)
        void* var_24 = nullptr
        int32_t var_20 = 0
        int32_t var_1c = 0
        int32_t var_8_1 = 0
        int32_t ecx_4 = *(ebx_1 + 0x30) - *(ebx_1 + 0x2c)
        void* var_28 = ebx_1
        sub_42c9c0(&var_24, ecx_4 s/ 0x70)
        int32_t esi = 0
        int32_t result
        
        if ((*(ebx_1 + 0x30) - *(ebx_1 + 0x2c)) s/ 0x70 s<= 0)
        label_60896f:
            sub_608ab0(arg1 + 4, &var_28)
            result = ((*(arg1 + 8) - *(arg1 + 4)) s>> 4) - 1
        else
            arg2 = 0
            
            while (true)
                void var_18
                
                if (esi u< *(eax_3 + 0x14) u>> 2 && sub_608330(*(*(ebx_1 + 0x2c) + arg2 + 0x34), 
                        *(*(eax_3 + 0x10) + (esi << 2)), &var_18, arg3) != 0)
                    *(var_24 + (esi << 2)) = (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2
                    sub_404370(arg1 + 0x34, &var_18)
                    esi += 1
                    arg2 += 0x70
                    
                    if (esi s>= (*(ebx_1 + 0x30) - *(ebx_1 + 0x2c)) s/ 0x70)
                        goto label_60896f
                    
                    continue
                
                result = 0xffffffff
                break
        
        void* eax_25 = var_24
        
        if (eax_25 != 0)
            sub_403160(eax_25, (var_1c - eax_25) s>> 2, 4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
