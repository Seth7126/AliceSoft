// 函数: sub_564db0
// 地址: 0x564db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg1
int32_t result_1 = result
void** ebx = arg2
void** edi = ebx

if (*(ebx + 0xd) == 0)
    do
        sub_564db0(edi[2])
        edi = *edi
        int32_t var_8_1 = 0
        int32_t* esi_1 = ebx[6]
        
        if (esi_1 != 0)
            bool cond:1_1 = esi_1[1] != 1
            esi_1[1]
            esi_1[1] -= 1
            
            if (not(cond:1_1))
                (**esi_1)(eax_2)
                bool cond:2_1 = esi_1[2] != 1
                esi_1[2]
                esi_1[2] -= 1
                
                if (not(cond:2_1))
                    (*(*esi_1 + 4))()
        
        int32_t var_8_2 = 0xffffffff
        sub_403160(ebx, 1, 0x1c)
        result = result_1
        ebx = edi
    while (*(edi + 0xd) == 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
