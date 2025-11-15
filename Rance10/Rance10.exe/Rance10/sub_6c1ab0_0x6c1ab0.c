// 函数: sub_6c1ab0
// 地址: 0x6c1ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg3
int32_t ebx = arg5
int32_t edi = arg4

if (ebx s< 0)
    goto label_6c1aec

if (ebx s> 0 || edi != 0)
    int32_t temp3_1 = edi
    edi += arg3[2]
    ebx = adc.d(ebx, arg3[3], temp3_1 + arg3[2] u< temp3_1)

void* eax

while (true)
    if (ebx s>= 0 && (ebx s> 0 || edi != 0))
        int32_t temp8_1 = arg3[3]
        
        if (temp8_1 s> ebx)
            return 0xffffffff
        
        if (temp8_1 s>= ebx && arg3[2] u>= edi)
            return 0xffffffff
    
label_6c1aec:
    eax = sub_6b7c80(&arg3[6], arg2)
    
    if (eax s>= 0)
        if (eax != 0)
            break
        
        if ((edi | ebx) == 0)
            return 0xffffffff
        
        int32_t eax_4 = sub_6c19d0(arg3)
        
        if (eax_4 == 0)
            return 0xfffffffe
        
        if (eax_4 s< 0)
            return 0xffffff80
    else
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(eax)
        int32_t temp2_1 = arg3[2]
        arg3[2] -= eax_1
        arg3[3] = sbb.d(arg3[3], edx_1, temp2_1 u< eax_1)

int32_t result = arg3[2]
int32_t ecx_5 = arg3[3]
int32_t eax_7
int32_t edx_5
edx_5:eax_7 = sx.q(eax)
arg3[2] = eax_7 + result
arg3[3] = adc.d(edx_5, ecx_5, eax_7 + result u< eax_7)
return result
