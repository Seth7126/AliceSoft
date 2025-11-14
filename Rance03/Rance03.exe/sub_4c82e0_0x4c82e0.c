// 函数: sub_4c82e0
// 地址: 0x4c82e0
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
sub_402110(arg1, 0x6da4f6, nullptr)
int32_t* esi = arg2
char ecx_2 = 0
int32_t var_4_1 = 0
int32_t ebx = 0
int32_t var_10_2 = 1
int32_t ebp = esi[4]

if (ebp s> 0)
    do
        int32_t* eax_3
        
        if (esi[5] u< 0x10)
            eax_3 = esi
        else
            eax_3 = *esi
        
        if (*(eax_3 + ebx) == 0xa && ecx_2 != 0xd)
            sub_4031c0(arg1, 1, 0xd)
        
        int32_t* eax_4
        
        if (esi[5] u< 0x10)
            eax_4 = esi
        else
            eax_4 = *esi
        
        eax_4.b = *(eax_4 + ebx)
        arg2.b = eax_4.b
        sub_4031c0(arg1, 1, arg2.b)
        ecx_2 = arg2.b
        ebx += 1
    while (ebx s< ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
