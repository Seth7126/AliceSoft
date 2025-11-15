// 函数: sub_5d9180
// 地址: 0x5d9180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        ebx += 1
        void* ecx_1 = *arg1 + edi_1
        edi_1 += 0xd8
        *(ecx_1 + 0x24) = data_7fd4d8.q
        *(ecx_1 + 0x2c) = data_7fd4e0
        *(ecx_1 + 0x30) = data_7e70ec
        *(ecx_1 + 0x38) = data_7e70f4
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
        int32_t edx_5 = edx_4 s>> 6
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
