// 函数: sub_671270
// 地址: 0x671270
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
sub_402110(arg1, 0x6da8a3, nullptr)
int32_t edi = 0
int32_t var_4_1 = 0
int32_t var_10_2 = 1
int32_t ebp = arg2[4]

if (ebp != 0)
    do
        int32_t ecx_2 = arg2[5]
        int32_t* eax_3
        
        if (ecx_2 u< 0x10)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        if (*(eax_3 + edi) != 0x20)
            int32_t* eax_4
            
            if (ecx_2 u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
            
            if (sx.d(*(eax_4 + edi)) != 0x8140)
                int32_t* eax_6
                
                if (ecx_2 u< 0x10)
                    eax_6 = arg2
                else
                    eax_6 = *arg2
                
                sub_4031c0(arg1, 1, *(eax_6 + edi))
        
        edi += 1
    while (edi u< ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
