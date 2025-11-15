// 函数: sub_5fbb00
// 地址: 0x5fbb00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5fc080(arg1)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, *(arg2 + 0x38) - *(arg2 + 0x34))
int32_t edx_3 = edx_2 s>> 5
sub_5fbc20(arg1, (edx_3 u>> 0x1f) + edx_3, arg2)
int32_t* i = arg1[3]
int32_t eax_4
int32_t edx_4
edx_4:eax_4 = muls.dp.d(0x66666667, *(arg2 + 0x68) - *(arg2 + 0x64))
void* ecx_3 = &arg1[3]
int32_t ebx_1 = *(ecx_3 + 4)
int32_t edx_5 = edx_4 s>> 4

for (; i != ebx_1; i = &i[3])
    sub_5fc940(i)

*(ecx_3 + 4) = *ecx_3
sub_5fc5b0(ecx_3, (edx_5 u>> 0x1f) + edx_5)
int32_t edi = 0
int32_t eax_9
int32_t edx_6
edx_6:eax_9 = muls.dp.d(0x66666667, *(arg2 + 0x68) - *(arg2 + 0x64))
int32_t edx_7 = edx_6 s>> 4
uint32_t eax_11 = edx_7 u>> 0x1f
int32_t result = eax_11 + edx_7

if (eax_11 != neg.d(edx_7))
    int32_t ebx_2 = 0
    
    do
        int32_t eax_12
        int32_t edx_8
        edx_8:eax_12 = muls.dp.d(0x66666667, *(arg2 + 0x68) - *(arg2 + 0x64))
        int32_t edx_9 = edx_8 s>> 4
        int32_t eax_16
        
        if (edi u< (edx_9 u>> 0x1f) + edx_9)
            int32_t eax_17 = *(arg2 + 0x64)
            int32_t eax_18
            int32_t edx_10
            edx_10:eax_18 =
                muls.dp.d(0x2aaaaaab, *(ebx_2 + eax_17 + 0x1c) - *(ebx_2 + eax_17 + 0x18))
            int32_t edx_11 = edx_10 s>> 3
            eax_16 = (edx_11 u>> 0x1f) + edx_11
        else
            eax_16 = 0
        
        sub_5fbdb0(arg1, edi, eax_16, arg2)
        edi += 1
        int32_t eax_21
        int32_t edx_12
        edx_12:eax_21 = muls.dp.d(0x66666667, *(arg2 + 0x68) - *(arg2 + 0x64))
        ebx_2 += 0x28
        int32_t edx_13 = edx_12 s>> 4
        result = (edx_13 u>> 0x1f) + edx_13
    while (edi u< result)

return result
