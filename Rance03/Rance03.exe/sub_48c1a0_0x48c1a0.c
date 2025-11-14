// 函数: sub_48c1a0
// 地址: 0x48c1a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = nullptr
int32_t* eax

if (arg2 != 0)
    if (arg2 u> 0x15555555)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 * 0xc)
    edi = eax
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_48c300(eax, arg1[1], *arg1, edi)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t* ecx_3 = *arg1
int32_t edx_2 = edx_1 s>> 1

if (ecx_3 != 0)
    int32_t var_14_1 = arg2
    int32_t* var_18_1 = ecx_3
    sub_48c2c0(ecx_3, arg1[1])
    j__free(*arg1)

*arg1 = edi
arg1[2] = &edi[arg2 * 3]
void* result = &edi[((edx_2 u>> 0x1f) + edx_2) * 3]
arg1[1] = result
return result
