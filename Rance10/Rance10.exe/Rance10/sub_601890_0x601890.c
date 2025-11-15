// 函数: sub_601890
// 地址: 0x601890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* __saved_edi = arg1
*arg1 = 0x4f
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 2
void* eax_4 = sub_601bb0(arg1, 0xc, (edx_3 u>> 0x1f) + edx_3)

if (eax_4 == 0)
    *arg1 = 0xffffffff
    return eax_4

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_5 = edx_4 s>> 2
int32_t edi = 0
uint32_t eax_7 = edx_5 u>> 0x1f
int32_t eax_8 = eax_7 + edx_5

if (eax_7 != neg.d(edx_5))
    int32_t ebx_1 = 0
    
    while (true)
        int32_t* eax_10 = (*(*(eax_4 + 0x20) + 0x14))(edi)
        
        if (eax_10 == 0)
            eax_8 = sub_621db0(data_7fcbb0, arg1[2])
            *arg1 = 0xffffffff
            break
        
        void** ecx_5 = *arg2 + ebx_1
        
        if (ecx_5[5] u>= 0x10)
            ecx_5 = *ecx_5
        
        (*(*eax_10 + 4))(ecx_5)
        edi += 1
        int32_t eax_12
        int32_t edx_7
        edx_7:eax_12 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
        ebx_1 += 0x18
        int32_t edx_8 = edx_7 s>> 2
        int32_t eax_15 = (edx_8 u>> 0x1f) + edx_8
        
        if (edi u>= eax_15)
            return eax_15

return eax_8
