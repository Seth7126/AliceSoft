// 函数: sub_536ec0
// 地址: 0x536ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, arg1[0x68] - arg1[0x67])
int32_t edx_3 = edx_2 s>> 3
int32_t ecx

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    ecx = *arg1[0x67]
else
    ecx = 0

int32_t* arg_4
*arg_4 = ecx
int32_t eax_6 = arg1[0xb]
int32_t* eax_12
int32_t* edi

if (eax_6 s> 0)
    if (eax_6 != 1)
        int32_t* eax_23 = sub_536e60(arg1) + arg1[0xc]
        *arg2 = eax_23
        return eax_23
    
    edi = sub_536e60(arg1)
    int32_t eax_15
    int32_t edx_6
    edx_6:eax_15 = muls.dp.d(0x38e38e39, arg1[0x68] - arg1[0x67])
    arg_4 = edi
    int32_t edx_7 = edx_6 s>> 3
    int32_t ecx_6
    
    if ((edx_7 u>> 0x1f) + edx_7 s> 0)
        ecx_6 = *arg1[0x67]
    else
        ecx_6 = 0
    
    eax_12 = arg1[0xc] + ecx_6
else
    edi = sub_536e60(arg1)
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = muls.dp.d(0x38e38e39, arg1[0x68] - arg1[0x67])
    arg_4 = edi
    int32_t edx_5 = edx_4 s>> 3
    
    if ((edx_5 u>> 0x1f) + edx_5 s> 0)
        eax_12 = *arg1[0x67]
    else
        eax_12 = nullptr

var_4 = eax_12
int32_t** ecx_7 = &arg_4

if (eax_12 s>= edi)
    ecx_7 = &var_4

*arg2 = *ecx_7
return arg2
