// 函数: sub_5d9fa0
// 地址: 0x5d9fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if ((arg1[0x12] - arg1[0x11]) s>> 6 != ecx_2)
    sub_58cf40(&arg1[0x11], ecx_2)

sub_56b900(arg1)
int32_t edx_4 = 0
int32_t result = arg1[0x12] - arg1[0x11]

if ((result & 0xffffffc0) s> 0)
    int32_t edi_1 = 0
    int32_t ebx_1 = 0
    
    do
        int32_t eax_5 = *arg1
        ebx_1 += 0xd8
        edx_4 += 1
        int128_t* ecx_6 = arg1[0x11] + edi_1
        edi_1 += 0x40
        *ecx_6 = *(ebx_1 + eax_5 - 0x9c)
        ecx_6[1] = *(ebx_1 + eax_5 - 0x8c)
        ecx_6[2] = *(ebx_1 + eax_5 - 0x7c)
        ecx_6[3] = *(ebx_1 + eax_5 - 0x6c)
        result = (arg1[0x12] - arg1[0x11]) s>> 6
    while (edx_4 s< result)

return result
