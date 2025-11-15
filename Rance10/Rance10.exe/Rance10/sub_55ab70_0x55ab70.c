// 函数: sub_55ab70
// 地址: 0x55ab70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg2 + 8)
int32_t ebx = edi

if ((ebx.b & 1) != 0)
    ebx += 1

int32_t eax = int.d(sub_4a78b0(*(arg2 + 0x20)))
int32_t esi = edi

if (eax s< edi)
    esi = eax

int32_t eax_1 = int.d(sub_4a78b0(*(arg2 + 0x1c)))

if (eax_1 s< edi)
    edi = eax_1

if (edi s< esi)
    edi = esi

int32_t* esi_1 = *arg1
int32_t eax_3 = arg1[1]
int32_t result = ebx + (edi << 1)
uint32_t ebp_4 = (eax_3 - esi_1 + 3) u>> 2
int32_t ebx_1 = 0

if (esi_1 u> eax_3)
    ebp_4 = 0

if (ebp_4 != 0)
    do
        int32_t* eax_4 = *esi_1
        void* ecx_1 = *eax_4
        int32_t result_1
        
        if (ecx_1 == 0)
            result_1 = 0
        else if (*(eax_4 + 0x16) == 0)
            int32_t* ecx_2 = *(ecx_1 + 0x118)
            
            if (ecx_2 != 0)
                result_1 = (*(*ecx_2 + 0x14))()
            else
                result_1 = 0
        else
            result_1 = eax_4[0xc]
        
        if (result s< result_1)
            result = result_1
        
        ebx_1 += 1
        esi_1 = &esi_1[1]
    while (ebx_1 != ebp_4)

return result
