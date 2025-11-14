// 函数: sub_10010a40
// 地址: 0x10010a40
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100194b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t edi
int32_t var_20 = edi
int32_t var_24 = __security_cookie ^ &var_20
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t var_28 = 0
sub_1000e860(arg1, arg2)
*(arg1 + 0x1c) = arg6
int32_t var_4 = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = arg4
*(arg1 + 0x24) = 0
*(arg1 + 0x25) = 0
*(arg1 + 0x26) = 0
*(arg1 + 0x28) = arg3
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 1
sub_10012a30(arg1 + 0x34)
*(arg1 + 0x80) = 0
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0xffffffff
*(arg1 + 0x8c) = 0x7fffffff
*(arg1 + 0x90) = fconvert.d(float.t(1))
var_4.b = 1

if (arg5 != 0)
    int32_t i_1 = 0x7fffffff
    int16_t* eax_5 = arg5
    int32_t i
    
    do
        if (*eax_5 == 0)
            if (i_1 != 0)
                int32_t ecx_2
                ecx_2.b = mulu.dp.d(0x7fffffff - i_1 + 1, 2) u>> 0x20 != 0
                int16_t* eax_9 = sub_10001dc9(neg.d(ecx_2) | ((0x7fffffff - i_1 + 1) * 2))
                *(arg1 + 0x14) = eax_9
                
                if (eax_9 != 0)
                    sub_10010320(eax_9, 0x7fffffff - i_1 + 1, arg5)
            
            break
        
        eax_5 = &eax_5[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
