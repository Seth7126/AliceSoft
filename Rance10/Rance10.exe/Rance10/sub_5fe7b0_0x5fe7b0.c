// 函数: sub_5fe7b0
// 地址: 0x5fe7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
uint32_t edx
eax, edx = __allmul(*(arg2 + 0x30), *(arg2 + 0x34), 0x3e8, 0)
uint32_t edi = data_7fcbec
uint32_t eax_1
int32_t edx_1
eax_1, edx_1 = __alldiv(eax, edx, data_7fcbe8, edi)
int32_t eax_2
uint32_t edx_2
eax_2, edx_2 = __allmul(*(arg3 + 0x30), *(arg3 + 0x34), 0x3e8, 0)
uint32_t eax_3
int32_t edx_3
eax_3, edx_3 = __alldiv(eax_2, edx_2, data_7fcbe8, edi)

if (edx_1 s>= edx_3 && (edx_1 s> edx_3 || eax_1 u> eax_3))
    sub_5fe900(arg2, arg3)
    edi = data_7fcbec

int32_t eax_5
uint32_t edx_5
eax_5, edx_5 = __allmul(*(arg4 + 0x30), *(arg4 + 0x34), 0x3e8, 0)
int32_t ebx_1 = data_7fcbe8
uint32_t eax_6
int32_t edx_6
eax_6, edx_6 = __alldiv(eax_5, edx_5, ebx_1, edi)
int32_t eax_7
uint32_t edx_7
eax_7, edx_7 = __allmul(*(arg2 + 0x30), *(arg2 + 0x34), 0x3e8, 0)
uint32_t result
int32_t edx_8
result, edx_8 = __alldiv(eax_7, edx_7, ebx_1, edi)

if (edx_6 s>= edx_8 && (edx_6 s> edx_8 || eax_6 u> result))
    sub_5fe900(arg4, arg2)
    int32_t eax_8
    uint32_t edx_10
    eax_8, edx_10 = __allmul(*(arg2 + 0x30), *(arg2 + 0x34), 0x3e8, 0)
    uint32_t edi_1 = data_7fcbec
    int32_t esi_2 = data_7fcbe8
    uint32_t eax_9
    int32_t edx_11
    eax_9, edx_11 = __alldiv(eax_8, edx_10, esi_2, edi_1)
    int32_t eax_11
    uint32_t edx_12
    eax_11, edx_12 = __allmul(*(arg3 + 0x30), *(arg3 + 0x34), 0x3e8, 0)
    int32_t edx_13
    result, edx_13 = __alldiv(eax_11, edx_12, esi_2, edi_1)
    
    if (edx_11 s>= edx_13 && (edx_11 s> edx_13 || eax_9 u> result))
        return sub_5fe900(arg2, arg3) __tailcall

return result
