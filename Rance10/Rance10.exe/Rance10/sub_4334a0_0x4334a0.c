// 函数: sub_4334a0
// 地址: 0x4334a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a638
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** i_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[3].b != 0)
    void* esi_1 = *arg1
    void* eax_3 = *(esi_1 + 4)
    int32_t edi_1 = *(eax_3 + 8)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x2aaaaaab, *(eax_3 + 0xc) - edi_1)
    int32_t edx_2 = edx_1 s>> 2
    int32_t i_2 = (edx_2 u>> 0x1f) + edx_2
    i_1 = i_2 * 3
    
    if (*(edi_1 + (i_1 << 3) - 8) == 0)
        i_2 -= 1
    
    int32_t edi_2 = 0
    
    if (i_2 s> 0)
        int32_t edx_3 = 0
        int32_t i
        
        do
            edx_3 += 0x18
            i_1 = *(*(esi_1 + 4) + 8)
            edi_2 += *(i_1 + edx_3 - 8)
            i = i_2
            i_2 -= 1
        while (i != 1)
        
        if (edi_2 != 0)
            int32_t i_3 = i_2
            void var_34
            sub_4332e0(&var_34)
            int128_t var_28
            __builtin_memset(&var_28, 0, 0x18)
            int32_t var_8_1 = 0
            void* esi_2 = *arg1
            int32_t* eax_6 = sub_433d10(esi_2, *(esi_2 + 4), &var_34)
            int32_t eax_7 = arg1[1]
            
            if (0x5d1745c - eax_7 u< 1)
                sub_6d0927("list<T> too long")
                noreturn
            
            arg1[1] = eax_7 + 1
            *(esi_2 + 4) = eax_6
            *eax_6[1] = eax_6
            sub_417070(&var_28:0xc)
            sub_417070(&var_28)
            sub_417070(&var_34)
            
            for (i_1 = arg1[1]; i_1 s> arg1[2]; i_1 = arg1[1])
                int32_t* edi_3 = **arg1
                *edi_3[1] = *edi_3
                *(*edi_3 + 4) = edi_3[1]
                arg1[1] -= 1
                sub_417070(&edi_3[8])
                sub_417070(&edi_3[5])
                sub_417070(&edi_3[2])
                sub_403160(edi_3, 1, 0x2c)

fsbase->NtTib.ExceptionList = ExceptionList
return i_1
