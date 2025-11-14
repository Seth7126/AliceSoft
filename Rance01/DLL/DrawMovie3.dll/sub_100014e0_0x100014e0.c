// 函数: sub_100014e0
// 地址: 0x100014e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* entry_result
*entry_result = 0
int32_t eax_1

if (arg1 != 0)
    eax_1 = arg2

if (arg1 == 0 || arg1[3] u> eax_1 || eax_1 u> arg1[4])
    __invalid_parameter_noinfo()
    eax_1 = arg2

int128_t* edi = arg3
*entry_result = *arg1
entry_result[1] = eax_1

if (arg1[3] u> edi || edi u> arg1[4])
    __invalid_parameter_noinfo()
    edi = arg3

int32_t eax_2 = *entry_result

if (eax_2 == 0 || eax_2 != *arg1)
    __invalid_parameter_noinfo()

int128_t* ecx_2 = entry_result[1]

if (ecx_2 != edi)
    void* eax_4 = arg1[4] - edi
    
    if (eax_4 s> 0)
        sub_10001e2e(ecx_2, eax_4, edi, eax_4)
    
    arg1[4] = eax_4 + ecx_2

return entry_result
