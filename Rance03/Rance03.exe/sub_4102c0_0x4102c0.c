// 函数: sub_4102c0
// 地址: 0x4102c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
int32_t result
int32_t edx
edx:result = muls.dp.d(0x8d3dcb09, esi_1)
int32_t ecx_2 = esi_1 s/ 0x74

if (ecx_2 u> arg2)
    void* ebx_3 = (arg2 - ecx_2) * 0x74 + edi
    void* esi_2 = ebx_3
    
    if (ebx_3 != edi)
        do
            result = sub_405be0(esi_2)
            esi_2 += 0x74
        while (esi_2 != edi)
    
    arg1[1] = ebx_3
    return result

if (ecx_2 u< arg2)
    sub_410690(arg1, arg2 - ecx_2)
    int32_t* ecx_5 = arg1[1]
    int32_t var_14_2 = arg2
    sub_410c40(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x74)
    result = (arg2 - (arg1[1] - *arg1) s/ 0x74) * 0x74
    arg1[1] += result

return result
