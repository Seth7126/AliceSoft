// 函数: sub_637780
// 地址: 0x637780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce6ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x1014)
int32_t eax_2 = __security_cookie ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_1008
fsbase->NtTib.ExceptionList = &arg_1008
int32_t* result

if (*(ecx + 0x3c) != 0)
    if (sub_637b00(ecx) s< arg1)
        do
            void var_3c
            void arg_4
            result = sub_649a00(&__return_addr, &arg_4, *(ecx + 0x3c), var_3c)
            
            if (result s<= 0)
                goto label_6377c7
            
            ExceptionList = nullptr
            int32_t var_8_1 = 0
            int32_t var_4 = 0
            int32_t arg_1010 = 0
            void* edi_1 = *(ecx + 4)
            int32_t* eax_6 = sub_637c50(edi_1, *(edi_1 + 4), &ExceptionList)
            int32_t edx_2 = *(ecx + 8)
            
            if (0xccccccb - edx_2 u< 1)
                sub_69a551("list<T> too long")
                noreturn
            
            *(ecx + 8) = edx_2 + 1
            *(edi_1 + 4) = eax_6
            arg_1010 = 0xffffffff
            *eax_6[1] = eax_6
            void* edi_2 = *(*(ecx + 4) + 4)
            sub_403540(edi_2 + 8, result)
            sub_69d850(*(edi_2 + 8), &arg_4, result, eax_4)
            *(ecx + 0x50) += result
            result = sub_637b00(ecx)
        while (result s< arg1)
    
    result.b = 1
else
label_6377c7:
    result.b = 0

fsbase->NtTib.ExceptionList = arg_1008
sub_69a5bc(eax_2 ^ &ExceptionList)
return result
