// 函数: sub_589e30
// 地址: 0x589e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d98e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t ebx_2 = (esi[1] - *esi) s>> 3
sub_58a5e0(arg1, ebx_2)
struct sealengine::CInstanceView::VTable** edi = nullptr

if (ebx_2 s> 0)
    do
        int32_t var_38_2 = arg5
        int32_t var_8_1 = 0
        void var_20
        bool ecx_2 = sub_58a500(arg1, edi, sub_586e30(esi, &var_20, edi), arg3, arg4) == 0
        int32_t var_8_2 = 1
        int32_t* var_1c
        
        if (var_1c != 0)
            bool cond:0_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:0_1))
                (**var_1c)(eax_2)
                bool cond:1_1 = var_1c[2] != 1
                var_1c[2]
                var_1c[2] -= 1
                
                if (not(cond:1_1))
                    (*(*var_1c + 4))()
        
        int32_t var_8_3 = 0xffffffff
        
        if (ecx_2 != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        esi = arg2
        edi += 1
    while (edi s< ebx_2)

fsbase->NtTib.ExceptionList = ExceptionList
return 1
