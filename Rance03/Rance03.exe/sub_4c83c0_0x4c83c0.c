// 函数: sub_4c83c0
// 地址: 0x4c83c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be969
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_10_1 = 0
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_402110(arg1, 0x6da4ea, nullptr)
int32_t* ebx = arg2
int32_t edi = 0
int32_t var_4_1 = 0
int32_t var_10_2 = 1
int32_t ebp = ebx[4]

if (ebp s> 0)
    do
        int32_t* eax_3
        
        if (ebx[5] u< 0x10)
            eax_3 = ebx
        else
            eax_3 = *ebx
        
        eax_3.b = *(eax_3 + edi)
        arg2.b = eax_3.b
        
        if (eax_3.b s< 0)
            if (eax_3.b == 0x7f)
                goto label_4c8454
            
            sub_4031c0(arg1, 1, arg2.b)
        else if (eax_3.b s< 0x20 || eax_3.b == 0x7f)
        label_4c8454:
            int32_t eax_4 = sx.d(eax_3.b)
            
            if (eax_4 == 9)
                sub_4031c0(arg1, 1, 0x20)
            else if (eax_4 == 0xa)
                sub_4031c0(arg1, 1, arg2.b)
        else
            sub_4031c0(arg1, 1, arg2.b)
        
        edi += 1
    while (edi s< ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
