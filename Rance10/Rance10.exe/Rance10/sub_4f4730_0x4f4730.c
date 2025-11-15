// 函数: sub_4f4730
// 地址: 0x4f4730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
int32_t arg_8
int32_t* eax = &arg_8
int32_t edx_2 = (*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2

if (arg_8 s>= edx_2)
    eax = &var_4

var_4 = edx_2
int32_t* ecx = *(arg1 + 0x5c)
int32_t edi = 0
int32_t* edx_3 = ecx
int32_t eax_1 = *eax

if (eax_1 s> 0)
    edi = eax_1

void** result = *(arg1 + 0x60)

if (edx_3 != result)
    void* arg_4
    
    while (true)
        void* esi_2 = *(*edx_3 + 4)
        
        if (esi_2 != 0)
            esi_2 = *(esi_2 + 0x40)
        
        if (esi_2 == arg_4)
            break
        
        edx_3 = &edx_3[1]
        
        if (edx_3 == result)
            return result
    
    int32_t edx_5 = (edx_3 - ecx) s>> 2
    
    if (edx_5 != 0xffffffff && edx_5 != edi)
        if (edx_5 s< edi)
            edi -= 1
        
        arg_8 = ecx[edx_5]
        char* eax_3 = &ecx[edx_5]
        sub_6feca0(eax_3, &eax_3[4], *(arg1 + 0x60) - &eax_3[4])
        *(arg1 + 0x60) -= 4
        int32_t* var_18_2 = &arg_8
        return sub_404420(arg1 + 0x5c, &arg_4, *(arg1 + 0x5c) + (edi << 2), &arg_8)

return result
