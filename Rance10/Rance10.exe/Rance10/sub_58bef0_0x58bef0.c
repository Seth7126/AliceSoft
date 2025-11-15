// 函数: sub_58bef0
// 地址: 0x58bef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dac0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
char* arg_4
char* ebx = arg_4
int32_t edi = 0
int32_t result = (*(ebx + 0x4c) - *(ebx + 0x48)) s>> 2

if (result s> 0)
    while (true)
        void** esi_1
        
        if (edi s>= 0 && edi s< (*(ebx + 0x4c) - *(ebx + 0x48)) s>> 2)
            esi_1 = *(*(ebx + 0x48) + (edi << 2))
        
        char* esi_3
        
        if (edi s< 0 || edi s>= (*(ebx + 0x4c) - *(ebx + 0x48)) s>> 2 || esi_1 == 0)
            char* var_14 = nullptr
            int32_t var_8_3 = 0
            sub_58c280(arg1 + 0x34, &var_14)
            int32_t var_8_4 = 0xffffffff
            esi_3 = var_14
        else
            sub_58c470(&arg_4)
            int32_t var_8_1 = 1
            char* esi_2 = arg_4
            
            if (sub_58c020(esi_2, esi_1, arg2) == 0)
                if (esi_2 != 0)
                    sub_570280(esi_2)
                    int32_t var_30_5 = 0x58
                    operator new(esi_2)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            sub_58c4a0(var_18 + 0x34, &arg_4)
            int32_t var_8_2 = 0xffffffff
            esi_3 = arg_4
        
        if (esi_3 != 0)
            sub_570280(esi_3)
            int32_t var_30_4 = 0x58
            operator new(esi_3)
        
        edi += 1
        
        if (edi s>= result)
            break
        
        arg1 = var_18

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
