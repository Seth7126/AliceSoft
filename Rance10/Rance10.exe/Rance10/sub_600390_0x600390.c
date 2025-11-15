// 函数: sub_600390
// 地址: 0x600390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *arg1
int32_t esi = *arg2
int32_t edi = arg1[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, arg2[1] - esi)
int32_t edx_1 = edx s>> 2
int32_t result

if ((edi - ebx) s/ 0x18 != (edx_1 u>> 0x1f) + edx_1)
label_6003f0:
    result.b = 0
    return result

if (ebx != edi)
    void* esi_1 = esi - ebx
    
    do
        if (sub_5ff9f0(ebx, esi_1 + ebx).b == 0)
            goto label_6003f0
        
        ebx += 0x18
    while (ebx != edi)

result.b = 1
return result
