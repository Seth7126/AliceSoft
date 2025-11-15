// 函数: sub_5b6290
// 地址: 0x5b6290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t result = eax_1 - edx
int32_t edx_2 = result s>> 1

while (arg4 s< edi)
    void* esi_2 = edx_2 * 0x6c + arg3
    
    if (*(arg5 + 0x68) f<= *(esi_2 + 0x68))
        break
    
    __builtin_memcpy(edi * 0x6c + arg3, esi_2, 0x6c)
    edi = edx_2
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(edx_2 - 1)
    result = eax_3 - edx_3
    edx_2 = result s>> 1

__builtin_memcpy(edi * 0x6c + arg3, arg5, 0x6c)
return result
