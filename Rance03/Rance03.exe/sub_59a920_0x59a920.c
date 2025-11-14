// 函数: sub_59a920
// 地址: 0x59a920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c866b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ec
int32_t eax_2 = __security_cookie ^ &var_ec
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (*(arg1 + 0xc) != 0 && *(arg1 + 0x10) != 0 && arg2 == 4 && *(arg1 + 0x14) != 0)
    sub_535530(&var_ec)
    int32_t var_4 = 0
    sub_5356d0(&var_ec, arg1 + 0x18)
    (*(*arg4 + 0xbc))(1)
    (*(*arg4 + 0xc4))(1)
    (*(*arg4 + 0xc8))(0)
    int32_t var_7c_1 = 0x3f000000
    
    if (sub_58c7b0(arg3, &var_ec) == 0)
        result = false
    else if ((*(**(arg1 + 0xc) + 0x24))(eax_4) == 0)
        result = false
    else if ((*(**(arg1 + 0x10) + 0x2c))() == 0)
        result = false
    else
        int32_t* eax_13 = *(arg1 + 0xc)
        void* edi_1 = *eax_13
        int32_t eax_16
        int32_t edx_2
        edx_2:eax_16 = muls.dp.d(0x55555556, (*(**(arg1 + 0x10) + 0x24))())
        int32_t eax_21 = (*(*eax_13 + 0x20))(0, (edx_2 u>> 0x1f) + edx_2)
        *(arg1 + 0xc)
        
        if ((*(edi_1 + 0x2c))(0, 0, eax_21) != 0)
            result = true
        else
            result = false
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ec)
return result
