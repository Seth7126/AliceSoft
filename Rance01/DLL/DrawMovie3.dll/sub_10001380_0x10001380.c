// 函数: sub_10001380
// 地址: 0x10001380
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx = arg1[3]
int32_t edi = arg1[4]
int32_t* result = edi - ecx
char var_20 = 0

if (arg2 u> result)
    if (ecx u> edi)
        __invalid_parameter_noinfo()
    
    int32_t var_34_1 = edi
    return sub_10001560(arg1[3] - arg1[4] + arg2, arg1, &var_20, *arg1)

if (arg2 u>= result)
    return result

if (ecx u> edi)
    __invalid_parameter_noinfo()

void* ebx_1 = arg1[3]
int32_t ecx_1 = *arg1

if (ebx_1 u> arg1[4])
    __invalid_parameter_noinfo()

void** edi_1 = *arg1
void* var_14_1 = ebx_1
void* const eax_6

if (edi_1 != 0)
    eax_6 = *edi_1
else
    __invalid_parameter_noinfo()
    eax_6 = nullptr

int128_t* ebx_2 = ebx_1 + arg2
void* const edi_2

if (ebx_2 u<= *(eax_6 + 0x10))
    if (edi_1 == 0)
        edi_2 = nullptr
    else
        edi_2 = *edi_1

if (ebx_2 u> *(eax_6 + 0x10) || ebx_2 u< *(edi_2 + 0xc))
    __invalid_parameter_noinfo()

int32_t var_34_2 = edi
int32_t var_38_2 = ecx_1
return sub_100014e0(arg1, edi_1, ebx_2)
